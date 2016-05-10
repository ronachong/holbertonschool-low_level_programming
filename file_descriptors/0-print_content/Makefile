CC := gcc
CFLAGS := -Wall -Werror -Wextra -pedantic
DEPS := 0-header.h
OBJECTS := 0-main.o 0-print_content.o
EXE := 0-print_content

all: $(EXE)

$(EXE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(EXE)

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

re: clean all

clean:
	rm -f $(OBJECTS)
