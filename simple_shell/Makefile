CC := gcc
CFLAGS := -Wall -Werror -Wextra -pedantic -Iinc
VPATH := src:inc
DEPS := inc/header.h

OBJ := main.o
OBJECTS := $(patsubst %, obj/%, $(OBJ))
EXE := simple_shell

all: $(EXE)

$(EXE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(EXE)

obj/%.o: %.c $(DEPS)
	$(CC) -c $(CFLAGS) $< -o $@

re: clean all

clean:
	rm -rf $(OBJECTS)

delete: clean
	rm -f $(EXE)
