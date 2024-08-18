# Makefile 
# Autor: João Gabriel Dantas Soares

# Nome do programa
PROG = main

# Compilador e flags
CC = g++
CPPFLAGS = -std=c++17 -O2 -g -Wall -pedantic

# Objetos a serem gerados
OBJS = main.o balance_checker.o

# Regra principal para criar o executável
$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)

# Regra para compilar main.cpp
main.o: main.cpp balance_checker.h
	$(CC) $(CPPFLAGS) -c main.cpp

# Regra para compilar balance_checker.cpp
balance_checker.o: balance_checker.cpp balance_checker.h
	$(CC) $(CPPFLAGS) -c balance_checker.cpp

# Regra para limpar arquivos gerados
clean:
	rm -f $(PROG) $(OBJS)
