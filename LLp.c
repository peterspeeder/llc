#include "swag.h"

typedef struct Node{
    int value;
    struct Node *nextList;
}Node;

Node* head;
Node* tail;

void link(int value){
    Node *new_node = malloc(sizeof(Node));
    new_node->value = value;
    new_node->nextList = NULL;

    if(head == NULL){
        head = new_node;
        tail = new_node;
    }
    else{   /*If head is not empty then point to the next Node*/
        tail->nextList = new_node;
        tail = new_node;
    }

    return;
}

void print_link(){
    Node *track = head;
  
    while(track != NULL){
        printf("\n%d", track->value);
        track = track->nextList;
    }       
}

void free_links(){
    Node *track = head;
    Node *temp;

    while(track != NULL){
        temp = track;
        track = track->nextList;
        free(temp);
    }
    return;
}

int main(){




    print_link();
    free_links();
    return 0;
}
