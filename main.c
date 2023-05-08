#include "output.c"

//void create(int num_books, books **arr);
//void input(int num_books, books *arr);
//void calculate(int num_books, int *oldest_i, int *youngest_i, int *longest_title_i, books *arr);
//void output(int *oldest_i, int *youngest_i, int *longest_title_i, books *arr);

int main() {
    int num_books;
    printf("\tВідомості про книги - це прізвище автора, назва, рік видання. Є вектор,\nелементи якого - відомості про книги. Встановити, яка книга найстаріша\nі яка наймолодша. Знайти книгу з самою довгою назвою.\n");
    printf("\nВведіть к-сть книг: ");
    scanf("%d", &num_books);

    books *arr;

    create(num_books, &arr);

    input(num_books, arr);

    int oldest_i = 0, youngest_i = 0, longest_title_i = 0;
    calculate(num_books, &oldest_i, &youngest_i, &longest_title_i, arr);

    output(&oldest_i, &youngest_i, &longest_title_i, arr);

    free(arr);

    return 0;
}
