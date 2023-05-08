#include "output.c"

void main() {
    int num_books;
    int oldest_i = 0, youngest_i = 0, longest_title_i = 0;
    books *arr;

    num_books = find_n();
    create(&num_books, &arr);
    input(num_books, arr);
    calculate(num_books, &oldest_i, &youngest_i, &longest_title_i, arr);
    output_f(&oldest_i, &youngest_i, &longest_title_i, arr);
    output_CMD();

    free(arr);
}
