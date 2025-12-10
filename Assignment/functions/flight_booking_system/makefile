CC = gcc
CFLAGS = -Iinc -I../Validation/inc

SRC_DIR = src
BIN_DIR = bin

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:.c=.o)

TARGET_Static = $(BIN_DIR)/flight_static
TARGET_Dynamic = $(BIN_DIR)/flight_dynamic

Static_lib = ../Validation/staticlib/libvalidate.a
Dynamic_lib_dir = ../Validation/dynamiclib
Dynamic_lib = -L$(Dynamic_lib_dir) -lvalidate

all : $(TARGET_Dynamic) $(TARGET_Static)

$(TARGET_Static): $(OBJS) $(Static_lib)
	$(CC) $(CFLAGS)  $^ -o $@

$(TARGET_Dynamic) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(Dynamic_lib) -Wl,-rpath=$(Dynamic_lib_dir) -o $@

$(SRC_DIR)/%.o:$(SRC_DIR)/%.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(SRC_DIR)/*.o $(TARGET_Dynamic) $(TARGET_Static)
