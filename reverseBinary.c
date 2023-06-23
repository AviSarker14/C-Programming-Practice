#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct node {
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *next = NULL;
void printList() {
    struct node *ptr = head;
    while(ptr != NULL) {
        printf("Data = %d \n", ptr->data);
        ptr = ptr->next;
    }
}
void insert(int data) {
    struct node *link = (struct node*) malloc(sizeof(struct node));
    link->data =data;
    link->next = head;
    head=link;
}
void reverse(struct node** head_ref ) {
    struct node *prev = NULL;
    struct node *current= *head_ref;
    struct node *next;
    while(current != NULL) {
        next= current ->next;
        current->next = prev;
        prev=current;
        current=next;
    }
    *head_ref = prev;
}
int main() {
    int count=1;
    int a;
    while(1) {
        printf("Input data for node %d: ", count);
        if(scanf("%d",&a)== EOF) {
            break;
        }
        else {
            insert(a);
            count++;
        }
    }
    printf("\n");
    printf("Data entered in the list are: \n");
    reverse(&head);
    printList();
    printf("\n");
    printf("The list in reverse are: \n");
    reverse(&head);
    printList();
}
