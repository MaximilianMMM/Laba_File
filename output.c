#include "solve.c"

void output_f(int *oldest_i, int *youngest_i, int *longest_title_i, books *arr){

    FILE *f_out = fopen("output.txt", "w");
    fprintf(f_out, "Найстаріша книжка - \"%s\", її автор - %s %s, опублікована в %d р.\n", arr[*oldest_i].title, arr[*oldest_i].author.surname, arr[*oldest_i].author.name, arr[*oldest_i].year);
    fprintf(f_out, "Наймолодша книжка - \"%s\", її автор - %s %s, опублікована в %d р.\n", arr[*youngest_i].title, arr[*youngest_i].author.surname, arr[*youngest_i].author.name, arr[*youngest_i].year);
    fprintf(f_out, "Книжка з найдовшою назвою - \"%s\", її автор - %s %s, опублікована в %d р.\n", arr[*longest_title_i].title, arr[*longest_title_i].author.surname, arr[*longest_title_i].author.name, arr[*longest_title_i].year);

    fclose(f_out);
}

void output_CMD(){
    char str[10000];
    FILE *f_out = fopen("output.txt", "r");
    if(f_out){
        while(fgets(str, 10000, f_out) != NULL) {
            printf("%s", str);
        }
        fclose(f_out);
    }
    else printf("Помилка в виведенні на консоль");
}
