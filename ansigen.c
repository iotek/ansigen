#include <stdio.h>
#include <stdlib.h>
//#include <X11/Xlib.h>
#include <Imlib2.h>

int
main(int argc, char **argv) {
	Imlib_Image image;
	int w, h;

	image = imlib_load_image("/tmp/img.png");
	imlib_context_set_image(image);
	w = imlib_image_get_width();
	h = imlib_image_get_height();
	imlib_context_set_image(image);
	imlib_free_image();

	printf("Width: %d Height: %d\n", w, h);
	return 0;
}
