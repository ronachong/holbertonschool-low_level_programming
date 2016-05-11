CC := gcc
CFLAGS := -Wall -Werror -Wextra -pedantic -Iinc
VPATH := src:inc
DEPS := inc/0-header.h

OBJ := 0-main.o 0-print_content.o
OBJECTS := $(patsubst %, obj/%, $(OBJ))
EXE := 0-print_content

all: $(EXE)

$(EXE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(EXE)

obj/%.o: %.c $(DEPS)
	$(CC) -c $(CFLAGS) $< -o $@

re: clean all

clean:
	rm -rf $(OBJECTS)
