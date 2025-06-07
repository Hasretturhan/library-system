CC = gcc
CFLAGS = -Iinclude

SRC = src/main.c src/book.c src/user.c
OUT = library

all:
	$(CC) $(SRC) -o $(OUT) $(CFLAGS)

clean:
	del $(OUT).exe 2> nul || true
