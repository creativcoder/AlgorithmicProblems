#ifndef LINKED_LIST
#define LINKED_LIST
#include "linked_list.h"
#include <stdio.h>
#include <malloc.h>
#endif

LinkedList make_list_data(int data) {
    LinkedList new_list;
    new_list.HEAD = (node*)malloc(sizeof(node));
    new_list.HEAD->data = data;
    new_list.HEAD->next = NULL;
    return new_list;
}

LinkedList make_list_empty() {
    LinkedList new_list;
    new_list.HEAD = NULL;
    return new_list;
}