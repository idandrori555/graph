# Compilers
CC := gcc

# Common flags
FLAGS := -Wall -static

# Directories
INCLUDE_DIR := include
SRC_DIR := src

# Source files
SOURCES := $(wildcard $(SRC_DIR)/*.c)

# Build directory
BUILD_DIR := build

# Output names
EXE_NAME := graph
OUT := $(BUILD_DIR)/$(EXE_NAME)

# Default target
all: $(OUT)

# Ensure build directory exists
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Compile source files
$(OUT): $(BUILD_DIR) $(SOURCES)
	$(CC) $(FLAGS) -I$(INCLUDE_DIR) -o $(OUT) $(SOURCES)

# Clean up
clean:
	rm -rf $(BUILD_DIR)

.PHONY: windows linux clean all
