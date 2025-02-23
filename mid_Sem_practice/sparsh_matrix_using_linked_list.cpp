#include<iostream>
using namespace std;
class Node{
public:
    int row;
    int col;
    int data;
    Node *next;
Node(int row,int col,int data){
    this->data=data;
    this->row=row;
    this->col=col;
    this->next = nullptr;
}
};
void create_new_node(Node* &first,int row_indx,int col_indx,int data){
    Node *newNode = new Node(row_indx, col_indx, data);
    newNode->next = nullptr;
    if(first == NULL){
        first = newNode;
    } 
    else {
        Node *temp = first;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}


void printList(Node *start)
{
    Node *ptr = start;
    cout << "row_position:";
    while (ptr != NULL)
    {
        cout << ptr->row << " ";
        ptr = ptr->next;
    }
    cout << endl;
    cout << "column_position:";
 
    ptr = start;
    while (ptr != NULL)
    {
        cout << ptr->col << " ";
        ptr = ptr->next;
    }
    cout << endl;
    cout << "Value:";
    ptr = start;
     
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}


int main(){
    int sparseMatrix[4][5] = { { 0 , 0 , 3 , 0 , 4 },
                               { 0 , 0 , 5 , 7 , 0 },
                               { 0 , 0 , 0 , 0 , 0 },
                               { 0 , 2 , 6 , 0 , 0 } 
    };
    Node *first=NULL;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if(sparseMatrix[i][j]!=0){
                create_new_node(first,i,j,sparseMatrix[i][j]);
            }
        }
    }
    printList(first);
    

    return 0;
}