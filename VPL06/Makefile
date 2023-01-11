CC := g++
FLAGS := -I include/ -Wall
BUILD := build
SRC := src/
TARGET := main.out

all: main

main: util venda
	$(CC) $(FLAGS) $(BUILD)/*.o src/main.cpp -o $(TARGET)

produto: 
	$(CC) $(FLAGS) -c src/produto.cpp -o build/produto.o

acai: produto
	$(CC) $(FLAGS) -c src/acai.cpp -o build/acai.o

cachorro_quente: produto
	$(CC) $(FLAGS) -c src/cachorro_quente.cpp -o build/cachorro_quente.o

pizza: produto
	$(CC) $(FLAGS) -c src/pizza.cpp -o build/pizza.o
    
util: pedido
	$(CC) $(FLAGS) -c src/util.cpp -o build/util.o

venda: pedido
	$(CC) $(FLAGS) -c src/venda.cpp -o build/venda.o

pedido: produto acai cachorro_quente pizza
	$(CC) $(FLAGS) -c src/pedido.cpp -o build/pedido.o
    
clean:
	$(RM) -r $(BUILD)/* $(TARGET)