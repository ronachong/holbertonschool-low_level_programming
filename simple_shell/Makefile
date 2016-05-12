CC := gcc
CFLAGS := -Wall -Werror -Wextra -pedantic -Iinc
VPATH := src:lib
DEPS := inc/header.h inc/libshell.h

LIB := libshell.a
OBJ := main.o shell.o
OBJECTS := $(patsubst %, obj/%, $(OBJ))
EXE := simple_shell

all: $(EXE)

$(EXE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) $(LIB) -o $(EXE)

obj/%.o: %.c $(DEPS)
	$(CC) -c $(CFLAGS) $< -o $@

re: clean all

clean:
	rm -rf $(OBJECTS)

delete: clean
	rm -f $(EXE)
