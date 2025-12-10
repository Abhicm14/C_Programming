CC = gcc
CFLAGS = -Iinc

src_dir = src
bin_dir = bin
test_dir = test
static_dir = staticlib
dynamic_dir = dynamiclib

# Source files and object files
SRCS = $(wildcard $(src_dir)/*.c)
OBJS = $(SRCS:.c=.o)

# Targets
static_lib = $(static_dir)/librecursion.a
dynamic_lib = $(dynamic_dir)/librecursion.so
static_exec = $(bin_dir)/recursion_static
dynamic_exec = $(bin_dir)/recursion_dynamic

# All targets
all : $(static_lib) $(dynamic_lib) $(static_exec) $(dynamic_exec)

# --- Executables ---

# Static executable
$(static_exec) : $(test_dir)/main.o $(static_lib)
	$(CC) $(CFLAGS) $^ -o $@ -lm

# Dynamic executable
$(dynamic_exec) : $(test_dir)/main.o $(dynamic_lib)
	$(CC) $(CFLAGS) $< -L$(dynamic_dir) -lrecursion -o $@ -lm

# --- Libraries ---

# Static library
$(static_lib) : $(OBJS)
	ar rcs $@ $^

# Dynamic library
DYN_OBJS = $(patsubst $(src_dir)/%.c, $(dynamic_dir)/%.o,$(SRCS))

$(dynamic_lib) : $(DYN_OBJS)
	$(CC) -shared -o $@ $^

# --- Object file rules ---

# Test object files
$(test_dir)/%.o : $(test_dir)/%.c 
	$(CC) $(CFLAGS) -c $< -o $@

# Source object files for static lib
$(src_dir)/%.o : $(src_dir)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Source object files for dynamic lib (PIC required)
$(dynamic_dir)/%.o : $(src_dir)/%.c
	$(CC) $(CFLAGS) -fPIC -c $< -o $@

# --- Clean ---
clean:
	rm -rf $(src_dir)/*.o $(test_dir)/*.o $(dynamic_dir)/*.o \ 
			$(static_lib) $(dynamic_lib) $(static_exec) $(dynamic_exec)

.PHONY: all clean
