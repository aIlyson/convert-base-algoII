SRCS = Sistemas_numericos.c  $(wildcard lib/*.c)
OBJS = $(SRCS: .c = .o)

programa: $(OBJS)
	gcc $(OBJS) -o programa

%.o: %.c
	gcc -c $< -o $@
clean:
    rm -f $(OBJS) programa