SRCS = Sistemas_numericos.c $(wildcard lib/*.c) $(wildcard func/*.c)
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -g3

programa: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) programa