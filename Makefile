CC := g++
SRCDIR := src
BUILDDIR := build
TARGET := main
CFLAGS := -g -Wall -O3 -std=c++11 -I include/

all: main

bot:
	$(CC) $(CFLAGS) -c src/bot.cpp -o build/bot.o 
carta:
	$(CC) $(CFLAGS) -c src/carta.cpp -o build/carta.o
humano:
	$(CC) $(CFLAGS) -c src/humano.cpp -o build/humano.o
mesa:
	$(CC) $(CFLAGS) -c src/mesa.cpp -o build/mesa.o
player:
	$(CC) $(CFLAGS) -c src/player.cpp -o build/player.o

# Remova as tres linhas abaixo
#old:
#	@mkdir build/old/
#	$(CC) $(CFLAGS) -c src/old.cpp -o build/old.o

# Modifique a funcao main
main: bot carta humano mesa player
	$(CC) $(CFLAGS) build/*.o src/main.cpp -o $(TARGET)

clean:
	$(RM) -r $(BUILDDIR)/* $(TARGET)