#include <stdio.h>
#include <stdlib.h>
#include "blog.h"
#define  array_size  5
 

int menu();
void menu_switch(blog_t *array);


int main(void){

blog_t *array = (blog_t *)malloc(SIZE_OF_BLOG * array_size);

menu_switch(array);
    

    return 0;
}

int menu(){
    int choice ;
    printf("\n1. Add blogs");
    printf("\n2. Display all");
    printf("\n0. Exit");
    printf("\nEnter your choice : ");
    scanf("%d", &choice);
    getchar();
    return choice;
}

void menu_switch(blog_t *array){
    while(1){
        int choice;
        choice = menu();

        if(choice == 0){
            free_blog(array);
            exit(0);
        }

        switch(choice){
            case 1:
            add_blog(array, array_size);
            break;

            case 2:
            print_all(array, array_size);
            break;

            default:
            printf("Invalid Choice\n");
            exit(1);
            break;
        }
    }
}