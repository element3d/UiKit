#include "MainWindow.h"

#ifdef __E3_TARGET_WEB__
#include <emscripten.h>

std::function<void(void)> loop;
#endif

int main()
{
	e3::WindowCreateInfo info;
	info.Name = "UiKitTest";
	info.Size.Width = 1280;
	info.Size.Height = 720;
	info.Resoluction.Width = 1280;
	info.Resoluction.Height = 720;

	MainWindow manWindow(&info);
#ifdef __E3_TARGET_WEB__
	loop = [&](){
		manWindow.Show();
	//	ALOGE("Frane -----------------\n");
		};
	emscripten_set_main_loop([](){
	//	manWindow.Show();
		loop();
		}, 0, true);
#else
	manWindow.Show();
#endif
	return 0;
}
