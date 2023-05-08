#include <stdio.h>
#include "create.c"

void input(int num_books, books *arr){
    for (int i = 0; i < num_books; i++) {
        printf("Введіть назву книжки №%d: ", i+1);
        scanf("%s", arr[i].title);
        printf("Введіть прізвище та імʼя автора книжки №%d: ", i+1);
        scanf("%s", arr[i].author.surname);
        scanf("%s", arr[i].author.name);
        printf("Введіть рік в якому була опублікована книжка №%d: ", i+1);
        scanf("%d", &arr[i].year);
    }
}
