VERSION = 0
PATCHLEVEL = 0
EXTRAVERSION =

CC=gcc
CFLAGS=-I.
SRC=src/*.c
MAIN=date-giver
INSTALL=install
INSTALL_DIRECTORY=$(INSTALL) -dm755
INSTALL_PROGRAM=$(INSTALL) -Dpm 0755

all: $(MAIN)

$(MAIN): $(SRC)
	$(CC) $(SRC) -lncurses -o $(MAIN)

clean:
	$(RM) *~ $(MAIN) Makefile config.log config.status config.h

install:
	$(INSTALL_DIRECTORY) $(DESTDIR)/usr/bin/
	$(INSTALL_PROGRAM) $(MAIN) $(DESTDIR)/usr/bin/

uninstall:
	rm -f $(DESTDIR)/usr/bin/$(MAIN)