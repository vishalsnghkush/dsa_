#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node* insert(struct node* head,int n){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=n;
    temp->next=head;
    return temp;
}
void print(struct node* head){
    struct node *temp=head;
    while (temp!=NULL)
    {
    printf("%d ",temp->data);
    temp=temp->next;
    }
}
struct node* insert_at_start(struct node* head,int n){
    // sabse pahele mere paas hai 2 4 5 6 8 9 11
    // i need to link 6
    // so to do so i need to remove the link of head   6   2 4 5 6 8 9 11
    
}
int main() {
    struct node* head = NULL;
    printf("Enter the number of elements: ");
    int v, n;
    scanf("%d", &v);
    for (int i = 0; i < v; i++) {
        printf("Enter value: ");
        scanf("%d", &n);
        head = insert(head, n);
    }
    head=insert_at_start(head,6);
    print(head);
    return 0;
}
