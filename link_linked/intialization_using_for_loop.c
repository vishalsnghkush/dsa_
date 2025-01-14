#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node* insert(struct node* head, int n) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = n;
    temp->next = head;
    return temp;
}

void print(struct node* head) {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
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
    print(head);
    return 0;
}
