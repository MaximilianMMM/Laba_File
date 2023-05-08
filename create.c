#include <stdlib.h>
#include "struct.c"

void create(int num_books, books **arr){
    *arr = (books*)malloc(num_books*sizeof(books));
}