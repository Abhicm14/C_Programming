CC = gcc
CFLAGS = -Iinc

src_dir = src
static_dir = staticlib
dynamic_dir = dynamiclib

SRCS = $(wildcard $(src_dir)/*.c)
OBJS = $(SRCS:.c=.o)

static_lib = $(static_dir)/libvalidate.a
dynamic_lib = $(dynamic_dir)/libvalidate.so

all: $(static_lib) $(dynamic_lib)

$(static_lib): $(OBJS)
	ar rcs $@ $^

DYN_OBJS = $(patsubst $(src_dir)/%.c,$(dynamic_dir)/%.o,$(SRCS))

$(dynamic_lib) : $(DYN_OBJS)
	$(CC) -shared -o $@ $^

$(src_dir)/%.o : $(src_dir)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(dynamic_dir)/%.o : $(src_dir)/%.c
	$(CC) $(CFLAGS) -fPIC -c $< -o $@ 

clean :
	rm -rf  $(src_dir)/*.o $(dynamic_dir)/*.o

.PHONY: all clean
