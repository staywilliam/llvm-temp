# Define compiler path
CC = ../build/bin/clang

# Source and target files
SRC = draft.c
TARGET = draft

# Compilation flags
CFLAGS = -fsanitize=address -fsanitize-recover=address -lstdc++ -g -O0

# Default build rule
all: $(TARGET)

# Compilation rule
$(TARGET): $(SRC)
    $(CC) $(CFLAGS) -o $@ $<

# Clean rule
clean:
    rm -f $(TARGET)

.PHONY: all clean