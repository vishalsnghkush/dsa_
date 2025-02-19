#include<stdio.h>
#include<stdlib.h>
struct Node{
    int val;
    struct Node *next;
};
struct Node *insert(struct Node *head,int val){
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    
}
void print(struct Node *head){
    struct Node *temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->val);
        temp=temp->next;
    }
    
}
int main(){
    struct Node *head=NULL;
    int n, f;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &f);
        head = insert(head, f);
    }
    print(head);
    return 0;
}