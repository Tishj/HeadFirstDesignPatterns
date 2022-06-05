# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tbruinem <tbruinem@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/06/04 21:22:59 by tbruinem      #+#    #+#                  #
#    Updated: 2022/06/05 12:20:43 by tbruinem      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

INCL = -I ./src/include
OBJ_DIR = obj
CFLAGS :=
CC = g++

PATTERNS =	strategy

obj/%.o: src/%.cpp
	mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INCL) -c $< -o $@

.SECONDEXPANSION:
SRC = $(shell find src/$(@)/ -type f -name '*.cpp')
OBJ = $(SRC:src/%.cpp=obj/%.o)
$(PATTERNS): $(OBJ)
	$(CC) $(CFLAGS) $(INCL) $(OBJ) -o $(@)

clean:
	rm -rf obj
	rm $(PATTERNS)
