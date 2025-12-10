CC = gcc
CFLAGS = -Iinc

src_dir = src
bin_dir = bin

SRCS = $(wildcard $(src_dir)/*.c)
OBJS = $(SRCS:.c=.o)

TARGET = $(bin_dir)/calculator

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

$(src_dir)/%.o:$(src_dir)/*.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(src_dir)/*.o $(TARGET)
