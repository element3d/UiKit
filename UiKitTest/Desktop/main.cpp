#include "MainWindow.h"

#ifdef __E3_TARGET_WEB__
#include <emscripten.h>

std::function<void(void)> loop;


EM_JS(int, canvas_get_width, (), {
  return canvas.width;
});

EM_JS(int, canvas_get_height, (), {
  return canvas.height;
});


#endif


int main()
{
	e3::WindowCreateInfo info;
	info.Name = "UiKit";

	#ifdef __E3_TARGET_WEB__
	int width = canvas_get_width();
	int height = canvas_get_height();

	info.Size.Width = width;
	info.Size.Height = height;
	info.Resoluction.Width = width;
	info.Resoluction.Height = height;
#else
	info.Size.Width = 1280;
	info.Size.Height = 720;
	info.Resoluction.Width = 1280;
	info.Resoluction.Height = 720;
#endif
	MainWindow manWindow(&info);
#ifdef __E3_TARGET_WEB__
	loop = [&](){
		manWindow.Show();
	//	ALOGE("Frane -----------------\n");
		};
	emscripten_set_main_loop([](){
	//	manWindow.Show();
		loop();
		}, 10000, true);
#else
	manWindow.Show();
#endif
	return 0;
}
