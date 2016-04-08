CC := gcc
CFLAGS := -Wall -Werror -Wextra -pedantic -Iinc

OBJECTS := absolute.o cap_string.o concat_strings.o first_digit.o is_prime_number.o lowercase.o nconcat_strings.o positive_or_not.o power.o print_array.o print_char.o print_number.o print_string.o reverse_array.o reverse_string.o square_root.o string_copy.o string_ncopy.o strings_compare.o string_to_integer.o str_len.o swap_int.o uppercase.o uppercase_string.o

# default target for makefile
all: libholbertonschool.a # don't know if clean should be here

# build library from object files (ar); and index (ranlib):
libholbertonschool.a: $(OBJECTS)
	ar -cvq libholbertonschool.a $(OBJECTS)
	ranlib libholbertonschool.a

# compile all the c files to object files for library
%.o: src/%.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

# force compilation of all object files
re: clean all

# clean object files after compiling library
clean:
	rm $(OBJECTS)
