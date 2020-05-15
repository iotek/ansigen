PREFIX  = /usr
LDFLAGS = -lX11 -lImlib2 -L/opt/X11/lib
CFLAGS  = -Wall -pedantic -I/opt/X11/include

all: ansigen
