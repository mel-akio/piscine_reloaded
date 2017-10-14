FUNCTIONS=srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJECTS=ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
all:
	gcc -c $(FUNCTIONS)
	ar rc libft.a $(OBJECTS)
	gcc -L. main.c includes/header.h -lft
clean:
	rm $(OBJECTS)

fclean:
	make clean
	rm libft.a
