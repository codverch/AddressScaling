CC = gcc 
IDIR = ../include/sim_api.h
CFLAGS = -I$(IDIR)

asan-and-address-scaling: asan-and-address-scaling.c 
	$(CC) -O3 -fno-tree-vectorize -fsanitize=address -mno-avx asan-and-address-scaling.c -o asan-and-address-scaling