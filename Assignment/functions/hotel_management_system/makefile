CC = gcc
CFLAGS = -Iinc -I../Validation/inc

SRC_DIR = src
BIN_DIR = bin

TARGET_Dynamic = $(BIN_DIR)/hotel_dynamic
TARGET_Static = $(BIN_DIR)/hotel_static

srcs = $(wildcard $(SRC_DIR)/*.c)
objs = $(srcs:.c=.o)

STATIC_LIB = ../Validation/staticlib/libvalidate.a
DYNAMIC_LIB_DIR= ../Validation/dynamiclib
DYNAMIC_LIB = -L$(DYNAMIC_LIB_DIR) -lvalidate

all:$(TARGET_Dynamic) $(TARGET_Static)

$(TARGET_Static) : $(objs) $(STATIC_LIB)
	$(CC) $(CFLAGS) $^ -o $@

$(TARGET_Dynamic) : $(objs)
	$(CC) $(CFLAGS) $(objs) $(DYNAMIC_LIB) -Wl,-rpath=$(DYNAMIC_LIB_DIR) -o $@

$(SRC_DIR)/%.o : $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(SRC_DIR)/*.o  $(TARGET_Dynamic) $(TARGET_Static)
