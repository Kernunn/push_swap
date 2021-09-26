
NAME = libft.a

CC = gcc
SRC_DIR = src/
OBJ_DIR = obj/
INC_DIR = includes/

SRC_FILES = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c      \
			ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c     \
			ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c      \
			ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c  \
			ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c     \
			ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c       \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c     \
			ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c           \
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c        \
			ft_lstmap.c ft_atof.c get_next_line.c ft_lst_at.c error.c

OBJ_FILES = $(SRC_FILES:.c=.o)
DEP_FILES = $(SRC_FILES:.c=.d)

SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_FILES))
DEP = $(addprefix $(OBJ_DIR), $(DEP_FILES))

INC = -I $(INC_DIR)
HEADER = libft.h
CINC = $(addprefix $(INC_DIR), $(HEADER))
CFLAGS = -Wall -Werror -Wextra -g

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ) 
	ranlib $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(INC) $(CFLAGS) -c $< -o $@ -MMD 

-include $(DEP)

clean:
	@mkdir -p $(OBJ_DIR)
	rm -f $(OBJ_DIR)*.o
	rm -f $(OBJ_DIR)*.d

fclean: clean
	rm -f $(NAME)
	rm -rf $(OBJ_DIR)

re: fclean all

.PHONY: all clean fclean re 
