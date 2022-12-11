CC=clang

CFLAGS=`pkg-config --cflags gtk+-3.0`
LDFLAGS=`pkg-config --cflags --libs gtk+-3.0`

all: xcm.c
	$(CC) $(CFLAGS) xcm.c -o xcm $(LDFLAGS)
