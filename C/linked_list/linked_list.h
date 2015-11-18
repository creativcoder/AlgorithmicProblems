
// A node in List
typedef struct node {
    int data;
    struct node *next;
}node;


typedef struct LinkedList {
    node *HEAD;
    int length;

}LinkedList;

LinkedList make_list_data(int);
LinkedList make_list_empty();
void insert(LinkedList*,int,int);