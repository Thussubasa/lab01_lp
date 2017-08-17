RM = rm -rf

CC=g++

LIB_DIR=./lib
INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./bin
DOC_DIR=./doc
TEST_DIR=./test

CFLAGS= -Wall -pedantic -ansi -stf=c++11 -I. -I$(INC_DIR)

.PHONY: all clean distclean doxy


all: questao_02

debug: CFLAGS += -g -O0
debug: questao_02

questao_02: $(OBJ_DIR)/fatorial.o $(OBJ_DIR)/primalidade.o $(OBJ_DIR)/main.o
	@echo "============"
	@echo "Ligando o alvo"
	@echo "============"
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executavel da questao_02 criado em $(BIN_DIR)] +++"
	@echo "============" 

$(OBJ_DIR)/fatorial.o: $(SRC_DIR)/questao_02/fatorial.cpp
	$(INC_DIR)/questao_02/fatorial.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/primalidade.o: $(SRC_DIR)/questao_02/primalidade.cpp
	$(INC_DIR)/questao_02/primalidade.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/main.o: $(SRC_DIR)/questao_02/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

doxy: 
	$(RM) $(BIN_DIR)/*
	doxygen DoxyFile

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*
