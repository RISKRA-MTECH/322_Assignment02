SHELL := /bin/bash

# Directory variables
INC_DIR := include
SRC_DIR := src
OBJ_DIR := obj
BIN_DIR := bin

CC := gcc
CFLAGS := -g -Wall -std=c99 -pedantic -I$(INC_DIR)
LFLAG := -g

TARGET :=  $(BIN_DIR)/main.exe

OBJS := $(OBJ_DIR)/main.o $(OBJ_DIR)/math_ops.o
RM := rm -f

.PHONY: all clean check-shell

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

all: $(TARGET)

$(TARGET): $(OBJS) | $(BIN_DIR)
	$(CC) $(LFLAG) $(OBJS) -o $(TARGET)

$(OBJ_DIR)/main.o: $(SRC_DIR)/main.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $(SRC_DIR)/main.c -o $(OBJ_DIR)/main.o

$(OBJ_DIR)/math_ops.o: $(INC_DIR)/math_ops.h $(SRC_DIR)/math_ops.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $(SRC_DIR)/math_ops.c -o $(OBJ_DIR)/math_ops.o

clean:
	$(RM) $(OBJ_DIR)/*.o $(TARGET)