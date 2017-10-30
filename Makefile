SRC=./
IDIR =include/


CC=gcc
CFLAGS=-I$(IDIR) -Wall -fprofile-arcs -ftest-coverage

ODIR=lib/

_DEPS = *.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = *.c 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

memory: $(OBJ) $(DEPS)
	gcc $(CFLAGS) -o $@ $^ 

.PHONY: clean
