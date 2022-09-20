#ifndef STRINGMIO_H
#define STRINGMIO_H

#include <stdlib.h>
#include <ctype.h>

char* str_cpy(char* destino, const char* origen);

int str_len(const char*cad);

char* str_cat(char* destino, const char*origen);

char* str_chr(char* cad, int c);

char* str_Rchr(char* cad, int c);

char* str_str(const char* cad1, const char* cad2);

int str_cmp(const char* cad1, const char* cad2);

int str_cmpi(const char* cad1, const char* cad2);

char* str_lwr(char*cad);

char* str_upr(char*cad);

void* mem_cpy(void* copia, const void* orig, int n);

void* mem_move(void* copia, const void* orig, int n);

#endif // STRINGMIO_H
