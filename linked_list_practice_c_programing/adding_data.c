#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void print(struct node *head){
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

struct node *insertion(struct node *head,int data){
    // i need to allocate the memory dynamically
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    struct node *last=head;
    temp->data=data;
    temp->next=NULL;
    // now i need to fill the pointer to them
    if(head==NULL){
        head=temp;
        return head;
    }

    while(last->next!=NULL){
        last=last->next;
    }
    last->next=temp;
    return head;
}

int main(){
    struct node *head=NULL;
    // taking the input of how much digit you need to store
    int n,j,i;
    printf("Enter the no of data :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&j);
        head=insertion(head,j);
    }
    print(head);
    return 0;
}