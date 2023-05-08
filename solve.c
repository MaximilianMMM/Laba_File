#include <string.h>
#include "input.c"

void calculate(int num_books, int *oldest_i, int *youngest_i, int *longest_title_i, books *arr){

    for (int i = 1; i < num_books; i++) {
        if (arr[i].year < arr[*oldest_i].year) {
            *oldest_i = i;
        }
        if (arr[i].year > arr[*youngest_i].year) {
            *youngest_i = i;
        }
        if (strlen(&arr[i].title) > strlen(&arr[*longest_title_i].title)) {
            *longest_title_i = i;
        }
    }
}
