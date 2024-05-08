#ifndef ENTRY_H
#define ENTRY_H

struct node {
    int data;
    struct node* next;
};

void free_list(struct node* current);

struct node* insert_at_end(struct node* head, int data);

void print_list(struct node* head);

#endif
