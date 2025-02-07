#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};


void pair(struct node *head){
    // if the intered linked list is 3 4 6 8 
    // sol will be                   4 3 8 6

    // Base case: if the list is empty or has
    // only one node, no swap
    if (head == NULL) {
        return;
    }
       // Swap the data of the current node with the next node
    int temp = head->data;
    head->data = head->next->data;
    head->next->data = temp;

    // Recursion for the next pair
    pair(head->next->next);
}

struct node *insertion(struct node *head,int data){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    struct node *last=head;
    temp->data=data;
    temp->next = NULL;
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
void print(struct node *head){
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main(){
    struct node *head=NULL;
    int n,j,i;
    printf("Enter the no of data :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&j);
        head=insertion(head,j);
    }
    print(head);
    // now doing the pair wise

    pair(head);
    print(head);
    return 0;
    
}