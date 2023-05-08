#include "create.c"

int find_n() {
    char ch[1000];
    int counter = 0;
    FILE *f_in = fopen("input.txt", "r");
    while(fgets(ch, sizeof(ch), f_in) != NULL){
        counter++;
    }
    fclose(f_in);
    return counter;
}

void input(int num_books, books *arr){
    FILE *f_in_txt = fopen("input.txt", "r");
    if(f_in_txt){

        for (int i = 0; i < num_books; i++){
            fscanf(f_in_txt, "%s %s %s %d", arr[i].title, arr[i].author.surname, arr[i].author.name, &arr[i].year);
        }
        fclose(f_in_txt);
    } else printf("Помилка при вводі тесту в файлі");

}
