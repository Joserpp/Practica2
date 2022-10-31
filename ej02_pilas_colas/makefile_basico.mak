HOME = .
BIN = $(HOME)/estudiante/bin
SRC = $(HOME)/estudiante/src
INCLUDE = $(HOME)/estudiante/include
LIB = $(HOME)/estudiante/lib
OBJ = $(HOME)/estudiante/obj
all: $(BIN)/usopilas_max
#......................Ejecutables
$(BIN)/usopilas_max : \
	$(SRC)/pilas_max.cpp \
	$(INCLUDE)/maxstack.h

	@echo
	@echo Creando el ejecutable: uso_pila_max
	@echo
	g++ -o $(BIN)/usopilas_max $(SRC)/pilas_max.cpp $(INCLUDE)/maxstack.h


#...................... OBJETOS
#...................... BIBLIOTECAS
#......................Limpiar

