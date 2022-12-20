#include "_UiCalendarDatePickerPopup.h"
#include "_UiCalendarDatePickerDayItem.h"

#include <chrono>

typedef std::chrono::system_clock Clock;

std::string get_month(int m)
{
	if (m == 12) return "December";
    if (m == 11) return "November";
    if (m == 10) return "October";
    if (m == 9) return "September";
    if (m == 8) return "August";
    if (m == 7) return "July";
    if (m == 6) return "June";
    if (m == 5) return "May";
    if (m == 4) return "April";
    if (m == 3) return "March";
    if (m == 2) return "February";
    if (m == 1) return "Junuary";
	return "";
}

/*A Function that returns the index of the day
  of the date- day/month/year
  For e.g-
 
  Index     Day
  0         Sunday
  1         Monday
  2         Tuesday
  3         Wednesday
  4         Thursday
  5         Friday
  6         Saturday*/
int dayNumber(int day, int month, int year)
{
 
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1,
                       4, 6, 2, 4 };
    year -= month < 3;
    return ( year + year/4 - year/100 +
             year/400 + t[month-1] + day) % 7;
}

/* A Function to return the number of days in
   a month
 
  Month Number     Name        Number of Days
  0                January     31
  1                February    28 (non-leap) / 29 (leap)
  2                March       31
  3                April       30
  4                May         31
  5                June        30
  6                July        31
  7                August      31
  8                September   30
  9                October     31
  10               November    30
  11               December    31
 
*/
int numberOfDays (int monthNumber, int year)
{
    // January
    if (monthNumber == 0)
        return (31);
 
    // February
    if (monthNumber == 1)
    {
        // If the year is leap then February has
        // 29 days
        if (year % 400 == 0 ||
                (year % 4 == 0 && year % 100 != 0))
            return (29);
        else
            return (28);
    }
 
    // March
    if (monthNumber == 2)
        return (31);
 
    // April
    if (monthNumber == 3)
        return (30);
 
    // May
    if (monthNumber == 4)
        return (31);
 
    // June
    if (monthNumber == 5)
        return (30);
 
    // July
    if (monthNumber == 6)
        return (31);
 
    // August
    if (monthNumber == 7)
        return (31);
 
    // September
    if (monthNumber == 8)
        return (30);
 
    // October
    if (monthNumber == 9)
        return (31);
 
    // November
    if (monthNumber == 10)
        return (30);
 
    // December
    if (monthNumber == 11)
        return (31);
}
#include <e3/Application.h>
_UiCalendarDatePickerPopup::_UiCalendarDatePickerPopup(e3::Element* pParent)
	: _UiCalendarDatePickerPopupBase(pParent)
{
  GetApplication()->GetElement()->SignalOnClick.Connect([this](e3::MouseEvent* pE){
    if (!GetGeometry().contains(glm::vec2(pE->GetX(), pE->GetY()))) {
       GetApplication()->GetElement()->RemoveElement(this, false);
    }
  });

	std::vector<std::string> days = 
	{
		"Su", "Mo", "Tu", "We", "Th", "Fr", "Sa"
	};

	e3::Element* pRow = new e3::Element();
	pRow->SetWidth("100%");
	for (auto d : days)
	{
		UiText* pText = new UiText();
		pText->SetText(d);
		pText->SetWidth("40dp");
		pText->SetHeight("40dp");
    pText->SetMargin("2dp");
		pRow->AddElement(pText);
	}
	//mContent->AddElement(pRow);

	auto now = Clock::now();
  std::time_t now_c = Clock::to_time_t(now);
  struct tm *parts = std::localtime(&now_c);

  int year = 1900 + parts->tm_year;
  int m = 1    + parts->tm_mon;
  int d = parts->tm_mday;

  mYear = year;
  mDay = d;
  mIMonth = m;
  _Create(d, m, year);

  mPrev->SignalOnClick.Connect([this](e3::MouseEvent*) {
    mContent->RemoveAllElements(false);
    if (mIMonth == 1)
    {
      mIMonth = 12;
      mYear -= 1;
    }
    else 
    {
      --mIMonth;
    }
    _Create(mDay, mIMonth, mYear);
  });

  mNext->SignalOnClick.Connect([this](e3::MouseEvent*) {
    mContent->RemoveAllElements(false);
    if (mIMonth == 12)
    {
      mIMonth = 1;
      mYear += 1;
    }
    else
    {
      ++mIMonth;
    }
    _Create(mDay, mIMonth, mYear);
    });
}

void _UiCalendarDatePickerPopup::_Create(int d, int m, int year)
{
  SetHeader(get_month(m) + " " + std::to_string(year));

  e3::Element* r = new e3::Element();
  int k = 0;

  if (0)
  {
    int month = m - 1;
    int yy = year;
    if (month == -1) 
    {
      month = 11;
      --yy;
    }
    int current = dayNumber (d, month, yy);
    int dd = numberOfDays (month - 1, yy);
    r->SetWidth("100%");
 
    for (k = 0; k < current; k++)
    {
       _UiCalendarDatePickerDayItem* tt = new _UiCalendarDatePickerDayItem();
       r->AddElement(tt);
    }
 
    for (int j = 1; j <= dd; j++)
    {
      _UiCalendarDatePickerDayItem* tt = new _UiCalendarDatePickerDayItem();
      tt->SetDay(j);
      tt->Disable();
      r->AddElement(tt);
      if (j == d) tt->Check();
 
      if (++k > 6)
      {
          k = 0;
          mContent->AddElement(r);
          r = new e3::Element();
      }
    }
    if (r->GetNumChildren())  mContent->AddElement(r);
   
  }
  if (1)
  {
    int current = dayNumber (d, m-1, year);
    int dd = numberOfDays (m-1, year);
   // int k;
   // e3::Element* r = new e3::Element();
    r->SetWidth("100%");
 
    for (k = 0; k < current; k++)
    {
       _UiCalendarDatePickerDayItem* tt = new _UiCalendarDatePickerDayItem();
       r->AddElement(tt);
    }
 
    for (int j = 1; j <= dd; j++)
    {
      _UiCalendarDatePickerDayItem* tt = new _UiCalendarDatePickerDayItem();
      tt->SetDay(j);
      r->AddElement(tt);
      if (j == d) tt->Check();
 
      if (++k > 6)
      {
          k = 0;
          mContent->AddElement(r);
          r = new e3::Element();
      }
    }
  }
  if (0)
  {
    int month = m;
    int yy = year;
    if (month == 12) 
    {
      month = 1;
      yy += 1;
    }
    int current = dayNumber(d, month, yy);
    int dd = numberOfDays(month - 1, yy);
   // int k;
    // e3::Element* r = new e3::Element();
    r->SetWidth("100%");

   // for (k = 0; k < current; k++)
    {
      //_UiCalendarDatePickerDayItem* tt = new _UiCalendarDatePickerDayItem();
     // r->AddElement(tt);
    }

    for (int j = 1; j <= dd; j++)
    {
      _UiCalendarDatePickerDayItem* tt = new _UiCalendarDatePickerDayItem();
      tt->SetDay(j);
      tt->Disable();
      r->AddElement(tt);
      if (j == d) tt->Check();

      if (++k > 6)
      {
        k = 0;
        mContent->AddElement(r);
        r = new e3::Element();
      }
    }
  }
}

void _UiCalendarDatePickerPopup::SetHeader(const std::string& header)
{
	mMonth->SetText(header);
}