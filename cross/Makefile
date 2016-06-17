CC := gcc
CFLAGS := -Wall -Werror -Wextra -pedantic -Iinc
VPATH := src:lib
DEPS := inc/header.h

LIB := 
LIBRARIES := $(patsubst %, lib/%, $(LIB))
OBJ := main.o
OBJECTS := $(patsubst %, obj/%, $(OBJ))
EXE := cross

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
