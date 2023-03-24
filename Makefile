.PHONY: all clean

CC = gcc
#CFLAGS = -g
CFLAGS =
PROGS = intlist countchar1 countchar2 countint transpose 

all: $(PROGS)

% : %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(PROGS)
