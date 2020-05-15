#include <stdio.h>
#include <stdlib.h>
#include <Imlib2.h>
#include <err.h>
#include "arg.h"

#define DBG(lvl, fmt, ...) if (debug >= lvl) warnx(fmt, __VA_ARGS__)
static int debug = 0;

int
main(int argc, char **argv) {
	Imlib_Image image;
	int w, h;
	char *argv0;

	ARGBEGIN {
	case 'd':
		debug++;
		DBG(1, "debugging level %d", debug);
		break;
	} ARGEND

	while (*argv) {
		image = imlib_load_image(*argv);
		imlib_context_set_image(image);
		w = imlib_image_get_width();
		h = imlib_image_get_height();
		DBG(2, "loaded image %s, width: %d, height: %d", *argv, w, h);
		imlib_context_set_image(image);
		imlib_free_image();

		(void)*argv++;
	}

	return 0;
}
