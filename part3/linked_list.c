#include <stdlib.h>
#include <stdio.h>

#include "linked_list.h"

void free_list(struct node* current) {
    if(current == NULL) {
        free(current);
    } else {
        free_list(current->next);
        free(current);
    }
}

struct node* insert_at_end(struct node* head, int data) {
    struct node* new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;

    if (head == NULL) {
        head = new_node;
        return head;
    }

    struct node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = new_node;
    return head;
}

void print_list(struct node* head) {
    struct node* current = head;
    if (current == NULL) {
        printf("Empty list.\n");
    } else {
        while(current) {
            printf("|%d|%p| -> ", current->data, current->next);
            current = current->next;
        }
        printf("\n");
    }
}


