// #include<iostream>
// using namespace std;
// class Node{
// public:    
//     Node *next;
//     Node *pre;
//     string Name;
//     Node(string Name){
//         this->pre=pre;
//         this->next=next;
//         this->Name= Name;
//     }
// };

// class Spotify{
// public:    
//     Node *head;
//     Node *tail;
//     Node *current;
//     int no_of_song;
//     Spotify(){
//         head=tail=current=NULL;
//         no_of_song=0;
//     }
// void add_song(string Name){
//     Node *temp=new Node(Name);
//     if(no_of_song==0){
//         head=tail=current=temp;
//         head->next = head;
//         head->pre = head;
//     }
//     else{
//         temp->next=head;
//         temp->pre=tail;
//         head->pre=temp;
//         tail->next=temp;
//         head=temp;
//     }
//     no_of_song++;
// } 

// void remove_song(int k){
//     Node *temp=head;
//     for (int i = 0; i < k; i++) {
//         temp = temp->next;
//         if (temp == head) {
//             cout << "Invalid index." << endl;
//             return;
//         }
//     }
//     temp->pre->next = temp->next;
//     temp->next->pre = temp->pre;
//     no_of_song--;
// }

// void previous_song() {
//     if (current) {
//         current = current->pre;
//     }
//     display_current_song();
// }

// void next_song() {
//     if (current) {
//         current = current->next;
//     }
//     display_current_song();
// }


// void display_current_song() {
//     if (current) {
//         cout << "Current song: " << current->Name << endl;
//     } else {
//         cout << "No current song." << endl;
//     }
// }


// void display_songs() {
//     if (no_of_song == 0) {
//         cout << "No songs in the list." << endl;
//         return;
//     }
//     Node* temp = head;
//     do {
//         cout << temp->Name << endl;
//         temp = temp->next;
//     } while (temp != head);
// }

// };
// int main(){
//     Spotify Song;
//     Song.add_song("sajan sajan ");
//     Song.add_song("barish jara tham ke baras ");
//     Song.add_song("rab kare tujhko  sajan ");
//     Song.add_song("sajan soni soni ");
//     Song.add_song("daiya daiya daiya re ");
//     Song.add_song("sona kitna sona hai ");
//     Song.add_song("aaye ho meri zindagi mein tum bahar banke");
//     Song.display_songs();
//     // Song.next_song();
//     Song.previous_song();
//     Song.next_song();
//     cout<<Song.no_of_song<<endl;
//     Song.remove_song(3);
//     Song.display_songs();
//     cout<<endl;
    
//     return 0;
// }



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    struct Node* next;
    struct Node* pre;
    char Name[50];
} Node;

typedef struct Spotify {
    Node* head;
    Node* tail;
    Node* current;
    int no_of_song;
} Spotify;

Node* createNode(char* Name) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->Name, Name);
    newNode->next = NULL;
    newNode->pre = NULL;
    return newNode;
}

void initSpotify(Spotify* s) {
    s->head = NULL;
    s->tail = NULL;
    s->current = NULL;
    s->no_of_song = 0;
}

void add_song(Spotify* s, char* Name) {
    Node* temp = createNode(Name);
    if (s->no_of_song == 0) {
        s->head = s->tail = s->current = temp;
        s->head->next = s->head;
        s->head->pre = s->head;
    } else {
        temp->next = s->head;
        temp->pre = s->tail;
        s->head->pre = temp;
        s->tail->next = temp;
        s->head = temp;
    }
    s->no_of_song++;
}

void remove_song(Spotify* s, int k) {
    if (s->no_of_song == 0) {
        printf("No songs to remove.\n");
        return;
    }
    Node* temp = s->head;
    for (int i = 0; i < k; i++) {
        temp = temp->next;
        if (temp == s->head) {
            printf("Invalid index.\n");
            return;
        }
    }
    temp->pre->next = temp->next;
    temp->next->pre = temp->pre;
    if (temp == s->head) {
        s->head = temp->next;
    }
    if (temp == s->tail) {
        s->tail = temp->pre;
    }
    free(temp);
    s->no_of_song--;
}

void previous_song(Spotify* s) {
    if (s->current) {
        s->current = s->current->pre;
    }
    display_current_song(s);
}

void next_song(Spotify* s) {
    if (s->current) {
        s->current = s->current->next;
    }
    display_current_song(s);
}

void display_current_song(Spotify* s) {
    if (s->current) {
        printf("Current song: %s\n", s->current->Name);
    } else {
        printf("No current song.\n");
    }
}

void display_songs(Spotify* s) {
    if (s->no_of_song == 0) {
        printf("No songs in the list.\n");
        return;
    }
    Node* temp = s->head;
    do {
        printf("%s\n", temp->Name);
        temp = temp->next;
    } while (temp != s->head);
}

int main() {
    Spotify s;
    initSpotify(&s);

    add_song(&s, "sajan sajan ");
    add_song(&s, "barish jara tham ke baras ");
    add_song(&s, "rab kare tujhko sajan ");
    add_song(&s, "sajan soni soni ");
    add_song(&s, "daiya daiya daiya re ");
    add_song(&s, "sona kitna sona hai ");
    add_song(&s, "aaye ho meri zindagi mein tum bahar banke");

    display_songs(&s);
    
    previous_song(&s);
    next_song(&s);
    
    printf("%d\n", s.no_of_song);
    
    remove_song(&s, 3);
    
    display_songs(&s);
    
    return 0;
}
