#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *insertion_at_end(struct node* head, int data){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    temp->prev=NULL;
    struct node *last=head;
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=temp;
    return head;
}
void print(struct node *head){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
struct node* insert(struct node* head, int data) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL){
        return temp;
    }
    struct node* last=head;
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=temp;
    temp->prev=last;
    
    return head;
}

int main(){
    struct node *head=NULL;
    int n,f;
    printf("Enter no of elemrnts :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&f);
        head=insert(head,f);
    }

    //insertion_at_first_position
    head=insertion_at_end(head,14);
    // printing
    print(head);

    return 0;
}