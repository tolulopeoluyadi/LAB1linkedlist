#include <stdio.h>
#include "list.h"

int main() {
    list_t *mylist = list_alloc();

    printf("Adding elements to the front:\n");
    list_add_to_front(mylist, 10);
    list_add_to_front(mylist, 20);
    list_add_to_front(mylist, 30);
    list_print(mylist);

    printf("Adding elements to the back:\n");
    list_add_to_back(mylist, 40);
    list_add_to_back(mylist, 50);
    list_add_to_back(mylist, 60);
    list_print(mylist);

    printf("Length of list: %d\n", list_length(mylist));

    printf("Removing from front:\n");
    list_remove_from_front(mylist);
    list_print(mylist);

    printf("Removing from back:\n");
    list_remove_from_back(mylist);
    list_print(mylist);

    printf("Adding element at index 1:\n");
    list_add_at_index(mylist, 25, 1);
    list_print(mylist);

    printf("Removing element at index 2:\n");
    list_remove_at_index(mylist, 2);
    list_print(mylist);

    printf("Is 25 in the list? %d\n", list_is_in(mylist, 25));

    printf("Value at index 1: %d\n", list_get_elem_at(mylist, 1));

    list_free(mylist);

    return 0;
}
