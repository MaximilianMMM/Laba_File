#include "solve.c"

void output(int *oldest_i, int *youngest_i, int *longest_title_i, books *arr){

    printf("Найстаріша книжка - \"%s\", її автор - %s %s, опублікована в %d р.\n",
           arr[*oldest_i].title, arr[*oldest_i].author.surname, arr[*oldest_i].author.name, arr[*oldest_i].year);
    printf("Наймолодша книжка - \"%s\", її автор - %s %s, опублікована в %d р.\n",
           arr[*youngest_i].title, arr[*youngest_i].author.surname, arr[*youngest_i].author.name, arr[*youngest_i].year);
    printf("Книжка з найдовшою назвою - \"%s\", її автор - %s %s, опублікована в %d р.\n",
           arr[*longest_title_i].title, arr[*longest_title_i].author.surname, arr[*longest_title_i].author.name, arr[*longest_title_i].year);

}
