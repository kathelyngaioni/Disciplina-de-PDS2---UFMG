CC := g++
SRCDIR := src
BUILDDIR := build
TARGET := main.out
CFLAGS := -g -Wall -O3 -std=c++11 -I include/

all: main

fogao:
    @mkdir build/fogao/
    $(CC) $(CFLAGS) -c src/fogao/fogao.cpp -o build/fogao/fogao.o

geladeira:
    @mkdir build/geladeira/
    $(CC) $(CFLAGS) -c src/geladeira/geladeira.cpp -o build/geladeira/geladeira.o

estoque:
    @mkdir build/estoque/
    $(CC) $(CFLAGS) -c src/estoque/estoque.cpp -o build/estoque/estoque.o

main:
    $(CC) $(CFLAGS) build/main.o src/main.cpp -o $(TARGET)

clean:
    $(RM) -r $(BUILDDIR)/* $(TARGET)