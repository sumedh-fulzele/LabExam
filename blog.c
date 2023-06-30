#include <stdio.h>
#include <stdlib.h>
#include "blog.h"

void accept_blog(blog_t *b){
    printf("\nAdding blog....\n");
    printf("\nEnter the Title of the Blog : ");
    scanf("%[^\n]", b->title);
    getchar();
    printf("\nEnter the Blog category : ");
    scanf("%[^\n]", b->category);
    getchar();
    printf("\nEnter the Blog content : ");
    scanf("%[^\n]", b->content);
    getchar();
}

void print_blog(blog_t *b){
    printf("\nBlog ID : %d",b->id);
    printf("\tTitle : %s", b->title);
    printf("\nCategory : %s", b->category);
    printf("\nBlog : %s\n", b->content);
}


void add_blog(blog_t *array , int size){
    for (int i = 0; i < size; i++)
    {
        accept_blog(&array[i]);
        array[i].id = i + 1;
    }
    printf("\nBlogs are added..!!\n");

}

void print_all(blog_t *array, int size){

    for (int i = 0; i < size; i++){
        printf("\n-----------------------------------------------------");
        print_blog(&array[i]);
    }
    printf("\n-----------------------------------------------------");

}

void free_blog(blog_t *array){
    free(array);
}