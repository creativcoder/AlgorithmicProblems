#include <stdio.h>
#include "linked_list.h"

int main() {
	LinkedList HEAD = make_list_data(23);
	printf("%d",HEAD.HEAD->data);
	return 0;
}