CC := gcc
CFLAGS := -Wall -Werror -Wextra -pedantic -Iinc
VPATH := src:inc
DEPS := inc/3-header.h

OBJ := 3-main.o 3-cat.o
OBJECTS := $(patsubst %, obj/%, $(OBJ))
EXE := 3-cat

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
