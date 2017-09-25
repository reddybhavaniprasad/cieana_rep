SRC=/home/bhavani/Videos/ciena
IDIR =/home/bhavani/Videos/ciena/include

CC=gcc
CFLAGS=-I$(IDIR) -Wall -fprofile-arcs -ftest-coverage

ODIR=/home/bhavani/Videos/ciena/lib

_DEPS = *.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = *.c 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

memory: $(OBJ) $(DEPS)
	gcc $(CFLAGS) -o $@ $^ 

.PHONY: clean

clean:
	#rm -f $(SRC)/*.o $(SRC)/*.img $(SRC)/*.gcno $(SRC)/*.gcda $(SRC)/*.info $(SRC)/memory
	#rm -rf $(SRC)/res
