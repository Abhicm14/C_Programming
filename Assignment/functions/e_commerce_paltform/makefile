CC = gcc
CFLAGS = -Iinc -I../Validation/inc

SRC_DIR = src
BIN_DIR = bin

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:.c=.o)

TARGET_Static = $(BIN_DIR)/ecommerce_static
TARGET_Dynamic = $(BIN_DIR)/ecommerce_dynamic

STATIC_LIB = ../Validation/staticlib/libvalidate.a
DYNAMIC_LIB_DIR = ../Validation/dynamiclib
DYNAMIC_LIB = -L$(DYNAMIC_LIB_DIR) -lvalidate

all: $(TARGET_Static) $(TARGET_Dynamic)

# Link with static lib
$(TARGET_Static): $(OBJS) $(STATIC_LIB)
	$(CC) $(CFLAGS) $(OBJS) $(STATIC_LIB) -o $@

# Link with dynamic lib
$(TARGET_Dynamic): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(DYNAMIC_LIB) -Wl,-rpath=$(DYNAMIC_LIB_DIR) -o $@

# Compile source files
$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(SRC_DIR)/*.o $(TARGET_Static) $(TARGET_Dynamic)
