
#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
};
int search(struct node * head,int search_no){
    struct node *temp=head;
    int index=1;
    while(temp!=NULL){
        if(temp->data!=search_no) index++;
        temp=temp->next;
    }
    return index;
}
void print(struct node * head){
    struct node *temp=head; 
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
struct node* input(struct node * head,int n){
    // now i have an address of an head pointer and i will try to intert the input provided by the user
    struct node* temp = (struct node*)malloc(sizeof(struct node)); //temp =null;
    // let's say i want's to insert an 1 2 4 5
    temp->data=n;
    // head=temp;
    temp->next=head;
    return temp;
}
int main(){
    struct node *head=NULL;
    printf("Enter the no of data you want's to insert in the list :\n");
    int k,i,n;
    scanf("%d",&k);
    for(i=0;i<k;i++){
        scanf("%d",&n);
        head=input(head,n);
    }
    // printing the input 
    print(head);
    printf("Enter the elemnt you wants to search ");
    int j;
    scanf("%d",&j);
   int u= search(head,j);
   printf("%d is the index of the element which you searched :",u);
    //print(head);
}
