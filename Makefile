# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/28 14:24:57 by klafi             #+#    #+#              #
#    Updated: 2025/12/25 16:24:14 by klafi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
ADDLIB = libft.a
SRCS = ft_printf.c ft_strtoupper.c ft_utoa.c han1.c han2.c
OBJS := $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS) $(ADDLIB)
	ar rcs libft/$(ADDLIB) $(OBJS)
	cp libft/libft.a $(NAME)
$(wildcard %.o) : $(wildcard %.c)
	cc $(CFLAGS) -c $< -o $@
clean :
	rm -f $(OBJS)
	make clean -C libft/
fclean : clean
	rm -f $(NAME)
	make fclean -C libft/
re : fclean all

$(ADDLIB) :
	make -C libft/

