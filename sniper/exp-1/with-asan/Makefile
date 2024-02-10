CC = gcc 
IDIR = ../include/sim_api.h
CFLAGS = -I$(IDIR)

with-asan: with-asan.c
	$(CC) -O3 -fno-tree-vectorize  -fsanitize=address -mno-avx with-asan.c -o with-asan