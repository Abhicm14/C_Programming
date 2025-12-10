CC = gcc
CFLAGS = -I inc -I../Validation/inc

SRC_DIR = src
BIN_DIR = bin

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:.c=.o)

TARGET_Static = $(BIN_DIR)/bank_static
TARGET_Dynamic = $(BIN_DIR)/bank_dynamic

STATIC_LIB = ../Validation/staticlib/libvalidate.a
DYNAMIC_LIB_DIR = ../Validation/dynamiclib
DYNAMIC_LIB = -L$(DYNAMIC_LIB_DIR) -lvalidate

all : $(TARGET_Dynamic) $(TARGET_Static)

$(TARGET_Static) : $(OBJS) $(STATIC_LIB)
	$(CC) $(CFLAGS) $(OBJS)  $(STATIC_LIB) -o $(TARGET_Static) -lm

$(TARGET_Dynamic) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(DYNAMIC_LIB) -Wl,-rpath=$(DYNAMIC_LIB_DIR) -o $@ -lm

$(SRC_DIR)/%.o : $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(SRC_DIR)/*.o $(TARGET_Dynamic) $(TARGET_Static)
