PREFIX  = /usr
LDFLAGS = -lX11 -lImlib2
CFLAGS  = -Wall -pedantic $(LDFLAGS)

all: ansigen
