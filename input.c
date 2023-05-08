#include "create.c"

void input(int num_books, books *arr){

    FILE *f_in_txt = fopen("input.txt", "w");
    if(f_in_txt){
        fscanf(f_in_txt, "%d", &num_books);
        create(num_books, &arr);

        for (int i = 0; i < num_books; i++){
            fscanf(f_in_txt, "%s %s %s %d", arr[i].title, arr[i].author.surname, arr[i].author.name, &arr[i].year);
        }
        fclose(f_in_txt);
    } else printf("Помилка при вводі тесту в файлі");

}
