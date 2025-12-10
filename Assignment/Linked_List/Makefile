CC = gcc
CFLAGS = -Iinc -I../Validation_ptr/inc

SRC_DIR = src
BIN_DIR = bin
OBJ_DIR = obj

# Find all .c files in src/
SRCS = $(wildcard $(SRC_DIR)/*.c)
# Convert src/file.c to obj/file.o
OBJS = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))

TARGET = $(BIN_DIR)/eagle

DYNAMIC_LIB_DIR = ../Validation_ptr/dynamiclib
DYNAMIC_LIB = -L$(DYNAMIC_LIB_DIR) -lvalidate

all : $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(DYNAMIC_LIB) -Wl,-rpath=$(DYNAMIC_LIB_DIR) -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)/*.o  $(TARGET)
