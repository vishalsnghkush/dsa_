#include<stdio.h>
#include<stdlib.h>
struct node { 
    int data;
    struct node* next;
};
struct node *insert_at_last(struct node* head,int data){
    struct node* ptr=(struct node*) malloc(sizeof(struct node));
    struct node *p=head;
    ptr->data=data;
    while(ptr->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
struct node *insert_at_index(struct node* head, int data, int index) {
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    
    // Traverse to the node just before the desired index
    while (i < index - 1 && p != NULL) {
        p = p->next;
        i++;
    }
    
    if (p == NULL) {
        printf("Index out of bounds\n");
        return head;
    }
    
    ptr->data = data;
    ptr->next = p->next; // Point new node to current node at index
    p->next = ptr;       // Point previous node to new node

    return head;
}


struct node *insert_at_1st_index(struct node* head,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
} // take an pointer ptr by memory allocation to store the data and the next variable !! 
void print(struct node* head){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
struct node *insert(struct node* head,int n){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=n;
    temp->next=head;
    return temp;
}
int main(){
    struct node* head=NULL;
    int n,i,j,k;
    printf("Enter no of list :");
    scanf("%d",&j);
    for(int i=0;i<j;i++){
        scanf("%d",&n);
        head=insert(head,n);
    }
    //print(head);
    head=insert_at_1st_index(head,13);
    // print(head);
    head=insert_at_index(head,12,2);
    //print(head);
    head=insert_at_last(head,15);
    print(head);
    return 0;
}

