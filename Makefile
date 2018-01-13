CC=gcc
CFLAGS=-g -Wall
TARGET=date-giver
INSTALL=install
INSTALL_DIRECTORY=$(INSTALL) -dm755
INSTALL_PROGRAM=$(INSTALL) -Dpm 0755

default: do-all

do-all: main.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

clean:
	$(RM) $(TARGET) *.o *~

install:
	$(INSTALL_DIRECTORY) $(DESTDIR)/usr/bin/
	$(INSTALL_PROGRAM) $(TARGET) $(DESTDIR)/usr/bin/

uninstall:
	rm -f $(DESTDIR)/usr/bin/$(TARGET)
