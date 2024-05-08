#include <stdlib.h>
#include <stdio.h>

#include "linked_list.h"

#define LEN 5

int main() {
    struct node* head = NULL;

    for (int i = 1; i <= LEN; i++) {
        head = insert_at_end(head, i);
    }

    print_list(head);

    free_list(head);

    return 0;
}
