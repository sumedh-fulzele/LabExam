
TARGET=main
CSRCS=$(TARGET).c blog.c main.c
COBJS=$(CSRCS:.c=.o)

CC=gcc
CFLAGS=-Wall
LDFLAGS=

$(TARGET).out: $(COBJS)
	$(CC) $(CFLAGS)  -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -r -f *.o $(TARGET).out

.phony: clean

