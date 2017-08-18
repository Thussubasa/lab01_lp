RM = rm -rf

CC=g++

LIB_DIR=./lib
INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./bin
DOC_DIR=./doc
TEST_DIR=./test

CFLAGS= -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

.PHONY: all clean distclean doxy


all: questao_01 questao_02 questao_03 

debug: CFLAGS += -g -O0
debug: questao_02



questao_01: $(OBJ_DIR)/area.o $(OBJ_DIR)/perimetro.o $(OBJ_DIR)/volume.o $(OBJ_DIR)/calcula.o $(OBJ_DIR)/main.o
	@echo "============"
	@echo "Ligando o alvo"
	@echo "============"
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executavel da questao_01 criado em $(BIN_DIR)] +++"
	@echo "============" 

$(OBJ_DIR)/area.o: $(SRC_DIR)/questao_01/area.cpp
	$(INC_DIR)/questao_01/area.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/volume.o: $(SRC_DIR)/questao_01/volume.cpp
	$(INC_DIR)/questao_01/volume.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/perimetro.o: $(SRC_DIR)/questao_01/perimetro.cpp
	$(INC_DIR)/questao_01/perimetro.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/calcula.o: $(SRC_DIR)/questao_01/calcula.cpp
	$(INC_DIR)/questao_01/calcula.h $(OBJ_DIR)/perimetro.o $(OBJ_DIR)/volume.o $(OBJ_DIR)/area.o
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/main.o: $(SRC_DIR)/questao_01/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<



questao_02: $(OBJ_DIR)/fatorial.o $(OBJ_DIR)/primalidade.o $(OBJ_DIR)/main2.o
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

$(OBJ_DIR)/main2.o: $(SRC_DIR)/questao_02/main2.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

questao_03: $(OBJ_DIR)/main3.o
	@echo "============"
	@echo "Ligando o alvo"
	@echo "============"
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executavel da questao_02 criado em $(BIN_DIR)] +++"
	@echo "============"

$(OBJ_DIR)/main3.o: $(SRC_DIR)/questao_03/main3.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

doxy: 
	$(RM) $(BIN_DIR)/*
	doxygen DoxyFile

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*
