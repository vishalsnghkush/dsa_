#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node* delete_At_kth_index(struct node* head,int index){
    struct node *temp = head;
    int i=0;
    while(i<index-1){
        temp=temp->next;
        i++;
    }
    struct node *next = temp->next->next; // temp me next ka next haii
    free(temp->next);
    temp->next=next;
    return head;
}
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
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &f);
        head = insert(head, f);
    }
    // insertion at the kth index
    // print(head);
    printf("\n");
    head=delete_At_kth_index(head,2);
    print(head);
    return 0;
}
