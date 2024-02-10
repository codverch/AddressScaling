CC = gcc 
IDIR = ../include/sim_api.h
CFLAGS = -I$(IDIR)

baseline: baseline.c
	$(CC) -O3 -fno-tree-vectorize -mno-avx baseline.c -o baseline