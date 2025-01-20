#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void print(struct node* head){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
}
struct node* intert(struct node* head,int data){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    //temp=headg;
    temp->data=data;
    temp->next=head;
    return temp;

}
int main(){
    // insertion in link list
    // by function 
    // deleting
    // at any position insertion
    // deletion
    // starting,ending....
    // and then do the same for the doubly link list..
    struct node *head=NULL;
    // int n,f;
    // printf("Enter the no :");
    // scanf("%d",&n);
    // for(int i=0;i<n;i++){
    //     scanf("%d",&f);
    //     head=intert(head,f);
    // }
    struct node *first,*second,*third;
    first->data=15;
    head=first;
    first->next=second;
    second->data=13;
    second->next=third;
    third->data=24;
    third->next=NULL;
    print(head);
    return 0;
}