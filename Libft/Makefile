NAME	= libft.a 

SRCS	= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isprint.c ft_isdigit.c ft_memset.c \
	ft_strlen.c ft_bzero.c ft_memcpy.c ft_strlcpy.c ft_strlcat.c ft_memmove.c ft_toupper.c \
	ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
	ft_strnstr.c
	
OBJS	=	${SRCS:.c=.o}

RM		= rm -rf

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

all: $(NAME)

# %.o: %.c
# 	${CC} ${CFLAGS} -o $@ -c $<

$(NAME):	$(OBJS)
		ar crs ${NAME} ${OBJS}
		
clean:
			${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME}

re:			fclean all

.PHONY: all, clean, fclean, re, bonus