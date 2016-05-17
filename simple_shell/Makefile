CC := gcc
CFLAGS := -Wall -Werror -Wextra -pedantic -Iinc
VPATH := src:lib
DEPS := inc/header.h inc/libshell.h

LIB := libshell.a
LIBRARIES := $(patsubst %, lib/%, $(LIB))
OBJ := main.o shell.o print_prompt.o get_argv.o get_patharr.o free_2Darr.o builtins.o string_comparison.o string_length.o print_string.o get_fp.o concat_string.o create_subshell.o
OBJECTS := $(patsubst %, obj/%, $(OBJ))
EXE := simple_shell

all: $(EXE)

$(EXE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) $(LIBRARIES) -o $(EXE)

obj/%.o: %.c $(DEPS)
	$(CC) -c $(CFLAGS) $< -o $@

re: clean all

clean:
	rm -rf $(OBJECTS)

delete: clean
	rm -f $(EXE)
