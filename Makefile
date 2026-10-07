SRCS = $(shell find . -name "*.c")
OBJS = $(SRCS:%.c=%.o)

CFLAGS = -g
LDFLAGS = -g

%.o: %.c
	gcc $(CFLAGS) -o $@ -c $^

main: $(OBJS)
	gcc $(LDFLAGS) -o $@ $^

clean:
	rm -rf main $(OBJS)

.PHONY: clean

