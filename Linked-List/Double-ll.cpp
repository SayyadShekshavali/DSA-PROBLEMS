

#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};
void Traversal(struct Node* head){
while(head!=NULL){
    printf("ELement :%d\n",head->data);
    head=head->next;
    }
};

//! To FIND LENGTH OF LL//
// void length(struct Node* head){
//     int len=0;
// while(head!=NULL){
//     head=head->next;
//     len++;
//     }
//     printf("Length of node:%d",len);
// };

//! TO FIND MIDDLE ELEMENT IN LL//

// int findtheMiddle(struct Node* head) {
//     int len = 0;
//     struct Node* temp = head;
//     while (temp != NULL) {
//         temp = temp->next;
//         len++;
//     }
//     temp = head;
//     int middle = len / 2;
//     for (int i = 0; i < middle; i++) {
//         temp = temp->next;
//     }

//     return temp->data;
// }

int main(){
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *four;
    head=(struct Node*)malloc(sizeof(struct Node*));
    first=(struct Node*)malloc(sizeof(struct Node*));
    third=(struct Node*)malloc(sizeof(struct Node*));
    four=(struct Node*)malloc(sizeof(struct Node*));
    second=(struct Node*)malloc(sizeof(struct Node*));
    
    head->prev=NULL;
    head->data=11;
    head->next=first;

    first->prev=head;
      first->data=21;
    first->next=second;

    second->prev=first;
      second->data=33;
    second->next=third;

third->prev=second;
      third->data=43;
    third->next=four;

four->prev=third;
      four->data=53;
    four->next=NULL;
    
Traversal(head);
// length(head);

// printf("The middle element is: %d\n",findtheMiddle(head);

free(head);
 free(first);
    free(second);
    free(third);
     free(four);
};