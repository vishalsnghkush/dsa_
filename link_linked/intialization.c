#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
        struct node *next;
};
int main(){
    struct node *head,*first,*second,*third;
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    head=first;
    first->data=10;
    first->next=second;
    second->data=13;
    second->next=third;
    third->data=14;
    third->next=NULL;
    //printing
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
return 0;
}