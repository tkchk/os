NASM=nasm
CC=gcc
TARGET=myos
C_FILES=./libc/string/ctos.c \
./libc/string/memcmp.c \
./libc/string/memset.c \
./libc/string/strcat.c \
./libc/string/strchr.c \
./libc/string/strcmp.c \
./libc/string/strcpy.c \
./libc/string/strlen.c \
./libc/string/strncmp.c \
./libc/string/strstr.c \
./libc/string/strutil.c \
./kernel/tty.c \
./kernel/io.c \
./kernel.c
OBJS=$(C_FILES:.c=.o)

all compile: $(TARGET)
all: finale
.PHONY: all compile clean finale

%.o:
	$(CC) -c $(@:.o=.c) -o $@ -ffreestanding -fno-exceptions -m32

%.img:
	$(NASM) -f bin $(@:.asm=.img) -o $@

$(TARGET): $(OBJS)
	$(NASM) -g -f elf start.asm -o start.o
	$(CC) -g -m32 -nostdlib -fno-asynchronous-unwind-tables -nodefaultlibs -lgcc start.o $? -T linker.ld -o $(TARGET)

finale:
	$(shell cp $(TARGET) ./iso/boot/$(TARGET))
	$(shell grub2-mkrescue iso --output=$(TARGET).iso)

clean:
	rm -f bootloader.img
	rm -f *.o $(TARGET) $(TARGET).iso
	find . -name \*.o | xargs --no-run-if-empty rm
