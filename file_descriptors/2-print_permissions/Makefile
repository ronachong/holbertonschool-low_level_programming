CC := gcc
CFLAGS := -Wall -Werror -Wextra -pedantic -Iinc
VPATH := src:inc
DEPS := inc/1-header.h

OBJ := 1-main.o 1-copy_content.o
OBJECTS := $(patsubst %, obj/%, $(OBJ))
EXE := 1-copy_content

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
