#include <stdio.h>
#include <stdlib.h>
// i have to  make an node and link and linked list data ;

struct node {
    int data;
    struct node *next;
};
int main() {
    struct node *head=NULL;
    struct node *first=(struct node*)malloc(sizeof(struct node));
    struct node *second=(struct node*)malloc(sizeof(struct node));
    struct node *third=(struct node*)malloc(sizeof(struct node));
    struct node *fourth=(struct node*)malloc(sizeof(struct node));
    // now i need to link them by their pointer / adddress;
    head=first;
    first->data=19;
    first->next=second;
    second->data=12;
    second->next=third;
    third->data=18;
    third->next=fourth;
    fourth->data=190;
    fourth->next=NULL;
    // for iterating the elemnet i need to apply an while loop and store the address of the pointer to the unknown variable;
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d \n",temp->data);
        temp=temp->next;
    }
}
