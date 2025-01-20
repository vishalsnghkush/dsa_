#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void print(struct node* head) {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

struct node* insert(struct node* head, int data) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    struct node *last=head;
    temp->data=data;
    temp->next=NULL;
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
int main() {
    struct node *head = NULL;
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
