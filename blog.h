#ifndef __BLOG_H
#define __BLOG_H

#define SIZE_OF_BLOG sizeof(blog_t)

typedef struct blog{
    int id;
    char title[40];
    char category[20];
    char content[500]; 
}blog_t;


void accept_blog(blog_t *b);
void print_blog(blog_t *b);
void add_blog(blog_t *array, int size);
void print_all(blog_t *array, int size);
void free_blog(blog_t *array);

#endif
