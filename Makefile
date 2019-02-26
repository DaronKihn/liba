# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dkihn <dkihn@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/27 17:42:58 by dkihn             #+#    #+#              #
#    Updated: 2019/02/14 22:10:11 by dkihn            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/*.c srcs/libft.h



O_FT = *.o

all: $(NAME)
$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS)
	ar rc $(NAME) $(O_FT)
	ranlib $(NAME)
clean:
	/bin/rm -f $(O_FT)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
