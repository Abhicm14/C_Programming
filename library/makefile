CC = gcc
SRC_PATH = src
INCLUDE_PATH = include
LIB_PATH = lib
BIN_PATH = bin

CFLAGS = -I$(INCLUDE_PATH)
LDFLAGS = -L$(LIB_PATH)
RPATH = -Wl,-rpath=$(LIB_PATH)

STATIC_LIB = $(LIB_PATH)/libmylib.a
DYNAMIC_LIB = $(LIB_PATH)/libmylib.so

STATIC_OBJ = $(LIB_PATH)/mylib.o
DYNAMIC_OBJ = $(LIB_PATH)/mylib_pic.o

TARGET_STATIC = $(BIN_PATH)/main_static
TARGET_DYNAMIC = $(BIN_PATH)/main_dynamic

all: $(STATIC_LIB) $(DYNAMIC_LIB) $(TARGET_STATIC) $(TARGET_DYNAMIC)

# Static library
$(STATIC_OBJ): $(SRC_PATH)/mylib.c
	$(CC) $(CFLAGS) -c $< -o $@

$(STATIC_LIB): $(STATIC_OBJ)
	ar rcs $@ $<

# Dynamic library
$(DYNAMIC_OBJ): $(SRC_PATH)/mylib.c
	$(CC) $(CFLAGS) -fPIC -c $< -o $@

$(DYNAMIC_LIB): $(DYNAMIC_OBJ)
	$(CC) -shared -o $@ $<

# Executables
$(TARGET_STATIC): $(SRC_PATH)/main.c $(STATIC_LIB)
	$(CC) $(CFLAGS) $< $(LDFLAGS) -lmylib -o $@

$(TARGET_DYNAMIC): $(SRC_PATH)/main.c $(DYNAMIC_LIB)
	$(CC) $(CFLAGS) $< $(LDFLAGS) -lmylib $(RPATH) -o $@

clean:
	rm -f $(LIB_PATH)/*.o $(LIB_PATH)/*.a $(LIB_PATH)/*.so $(BIN_PATH)/*
