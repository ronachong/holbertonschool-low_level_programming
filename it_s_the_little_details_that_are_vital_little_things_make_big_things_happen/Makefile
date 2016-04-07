#steps

CC = gcc
CFLAGS = -I
DEPS = inc/holbertonschool.h

# build library from object files (ar); and index (ranlib):
libholbertonschool.a: all the o files
	ar -cvq libholbertonschool.a [alltheofiles]
	ranlib libholbertonschool.a

# compile all the c files to object files for library
onefilefornow.o: onefilefornow.c $(DEPS)
	$(CC) -c CFLAGS onefilefornow.c -o onefilefornow.o

