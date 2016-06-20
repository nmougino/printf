# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/05 16:20:26 by nmougino          #+#    #+#              #
#    Updated: 2016/06/20 17:44:50 by nmougino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	Compilator - clang est plus sur que gcc
CC =		clang
CFLAGS =	-Wall -Wextra -Werror
ADDFLAGS =

#	Binary
NAME =		libftprintf.a
DST =

#	Default rule
DEFRULE =	glu

#	Dossiers utiles
SRCDIR =	srcs
INCDIR =	includes
LIBDIR =	libs
OBJDIR =	objs

#	Liste des sources
SRC =		addto.c \
			applyparams.c \
			conv.c \
			conv_b.c \
			conv_c.c \
			conv_di.c \
			conv_hexa.c \
			conv_mod.c \
			conv_o.c \
			conv_p.c \
			conv_s.c \
			conv_u.c \
			conv_uni.c \
			ft_abs.c \
			ft_bitlen.c \
			ft_bzero.c \
			ft_max.c \
			ft_min.c \
			ft_nbrlen.c \
			ft_nbrlenbase.c \
			ft_printf.c \
			ft_strchr.c \
			ft_strlen.c \
			ft_strnloc.c \
			recupparam.c \
			setconvparts.c \
			sitoa.c \
			uitoabase.c

LIB =
OBJ =		$(SRC:.c=.o)

#	Prefixes
LLIBP =		$(addprefix -l, $(LIB))
LIBP =		$(addprefix lib, $(LIB))
OBJP =		$(addprefix $(OBJDIR)/, $(SRC:.c=.o))

#	Couleurs
DEF =		\033[0m
GRA =		\033[1m
SOU =		\033[4m
BLI =		\033[5m
BLA =		\033[30m
RED =		\033[31m
GRE =		\033[32m
YEL =		\033[33m
BLU =		\033[34m
PUR =		\033[35m
CYA =		\033[36m
WHI =		\033[37m

define \n


endef

# #
#	RULES
#

.PHONY = default glu all re $(OBJDIR) $(NAME) deplib clean fclean

#	Main rules
default:
	@echo "$(GRA)  DEFAULT RULE EXECUTION  :::  rule $(DEFRULE)$(DEF)"
	@$(addprefix make ,$(DEFRULE))
	@echo "$(GRE)$(GRA)Programme termine :)$(DEF)"

glu: re
	make clean

all: $(NAME)

re: fclean all

#	Compilation rules
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS)	-c -o $@ $^ -I$(INCDIR)

$(OBJDIR):
	@echo "$(GRA)$(CYA)@ ++ Objects compilation$(DEF)"
	@mkdir -p $(OBJDIR)

$(NAME): $(OBJDIR) $(OBJP)
	@echo "$(PUR)@ Library indexation$(DEF)"
	@ar rc $(DST)$(NAME) $(OBJP)
	@ranlib $(DST)$(NAME)

#	MrProper's legacy
clean:
	@echo "$(RED)@ Objects deletion$(DEF)"
	@rm -rf $(OBJDIR)

fclean: clean
	@echo "$(RED)@ Binary deletion$(DEF)"
	@rm -f $(NAME)
