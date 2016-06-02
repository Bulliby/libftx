# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gwells <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/30 02:38:12 by gwells            #+#    #+#              #
#    Updated: 2015/04/25 13:10:35 by gwells           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=  	libftx.a	

SRC		=	ft_pixel_put.c \
			ft_rgb.c \
			ft_draw_line_x.c \
			ft_draw_line_y.c \
			ft_draw_rec.c\
			ft_draw_horizontal.c\
			ft_draw_vertical.c

OBJ		=	$(SRC:.c=.o)

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ) && ranlib $(NAME)
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME) a.out

re: fclean $(NAME)

.PHONY: clean re fclean all			
