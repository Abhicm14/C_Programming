CC = gcc
CFLAGS = -Iinc

src_path     = src
bin_path     = bin
test_path    = test
static_path  = staticlib
dynamic_path = dynamiclib

# Source files and object files
SRCS   = $(wildcard $(src_path)/*.c)
OBJS   = $(SRCS:.c=.o)

# Targets
static_lib   = $(static_path)/libnumprop.a
dynamic_lib  = $(dynamic_path)/libnumprop.so
static_exec  = $(bin_path)/numprop_static
dynamic_exec = $(bin_path)/numprop_dynamic

# All targets
all : $(static_lib) $(dynamic_lib) $(static_exec) $(dynamic_exec)

# --- Executables ---

# Static executable
$(static_exec) : $(test_path)/main.o $(static_lib)
	$(CC) $(CFLAGS) $^ -o $@ -lm

# Dynamic executable
$(dynamic_exec) : $(test_path)/main.o $(dynamic_lib)
	$(CC) $(CFLAGS) $^ -L$(dynamic_path) -lnumprop -o $@ -lm

# --- Libraries ---

# Static library
$(static_lib) : $(OBJS)
	ar rcs $@ $^

# Dynamic library
DYN_OBJS = $(patsubst $(src_path)/%.c,$(dynamic_path)/%.o,$(SRCS))

$(dynamic_lib) : $(DYN_OBJS)
	$(CC) -shared -o $@ $^

# --- Object file rules ---

# Test object files
$(test_path)/%.o : $(test_path)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Source object files for static lib
$(src_path)/%.o : $(src_path)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Source object files for dynamic lib (PIC required)
$(dynamic_path)/%.o : $(src_path)/%.c
	$(CC) $(CFLAGS) -fPIC -c $< -o $@

# --- Clean ---
clean:
	rm -rf $(src_path)/*.o $(test_path)/*.o $(dynamic_path)/*.o \ 
			$(static_lib) $(dynamic_lib) $(static_exec) $(dynamic_exec)

.PHONY: all clean
