#include "output.c"

int main() {
    int num_books;

    books *arr;

    input(num_books, arr);

    int oldest_i = 0, youngest_i = 0, longest_title_i = 0;
    calculate(num_books, &oldest_i, &youngest_i, &longest_title_i, arr);

    output_f(&oldest_i, &youngest_i, &longest_title_i, arr);
    output_CMD();

    free(arr);

    return 0;
}
