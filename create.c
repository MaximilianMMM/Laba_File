#include <stdlib.h>
#include <stdio.h>
#include "struct.c"

void create(int num_books, books **arr){
    *arr = (books*)malloc(num_books*sizeof(books));
}

void arr_binary(books *arr, int num_books){
    FILE *f_bin = fopen("arr_bin.bin", "wb");
    if(f_bin){
        fwrite(&arr, sizeof(books), num_books, f_bin);
        fclose(f_bin);
    }
    else printf("Помилка при переписанні в бінарний файл");
}

void read_binary(books *arr, int num_books){
    FILE *f_bin = fopen("arr_bin.bin", "rb");
    if(f_bin){
        fread(&arr, sizeof(books), num_books, f_bin);
    }
    else printf("Помилка при читанні бінарного файлу");
}
