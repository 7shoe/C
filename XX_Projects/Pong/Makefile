SRC_DIR = src
BUILD_DIR = build/debug
CC = clang
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_NAME = play
INCLUDE_PATHS = -Iinclude
LIBRARY_PATHS = -Llib
COMPILER_FLAGS = -std=c99 -Wall -O0 -g
LINKER_FLAGS = -lsdl2

all:
	$(CC) $(COMPILER_FLAGS) $(LINKER_FLAGS) $(INCLUDE_PATHS) $(LIBRARY_PATHS) $(SRC_FILES) -o $(BUILD_DIR)/$(OBJ_NAME)