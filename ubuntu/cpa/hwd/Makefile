## Variables:

# Compiler
CC = gcc

# Target executable
TARGET = hola_mundo

# Source files
SRCS = hwd.c

# Object files
OBJS = $(SRCS:.c=.o)

## Targets:

# Default target
all: $(TARGET)

# Linking
$(TARGET): $(OBJS)
	$(CC) -o $@ $^
    
# Compiling
%.o: %.c
	$(CC) -c $< -o $@
    
# Cleaning
clean:
	rm -f $(OBJS) $(TARGET)
    
.PHONY: all clean
