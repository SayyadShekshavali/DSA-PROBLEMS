

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
//! DELETE  FIRSTNODE//
struct Node* deleteFirstNode(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return NULL; 
    }

    struct Node* temp = head;
    head = head->next; 

    if (head != NULL) {
        head->prev = NULL; 
    }

    free(temp); 
    return head; 
}
//! DELETE  LASTNODE//
struct Node* deleteLastNode(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return NULL; 
    }

    if (head->next == NULL) {
        free(head);
        return NULL; 
    }


    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->prev->next = NULL; 
    free(temp); 

    return head; 
}

//! DELETE AFTER NODE//
struct Node* afternode(struct Node* head, int key) {
    struct Node* temp = head;

  
    while (temp != NULL) {
        if (temp->data == key) {
            break; 
        }
        temp = temp->next; 
    }


    if (temp == NULL || temp->next == NULL) {
        printf("No node exists after the node with key %d.\n", key);
        return head;
    }


    struct Node* toDelete = temp->next;

    
    temp->next = toDelete->next;
    if (toDelete->next != NULL) {
        toDelete->next->prev = temp;
    }

    
    free(toDelete);

    return head;
}
//! DELETE BEFORE NODE//
struct Node* beforenode(struct Node* head, int key) {
    struct Node* temp = head;

  
    while (temp != NULL) {
        if (temp->data == key) {
            break; 
        }
        temp = temp->next; 
    }
    
      // Node to delete
    struct Node* toDelete = temp->prev;

    // Update pointers to skip the node to delete
    if (toDelete->prev != NULL) {
        toDelete->prev->next = temp;
    } else {
        // If `toDelete` is the first node, update the head
        head = temp;
    }
    temp->prev = toDelete->prev;

    // Free memory of the deleted node
    free(toDelete);


    return head;
}

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
    // head=deleteFirstNode(head);
    //  head=deleteLastNode(head);
    //   head=afternode(head,33);
      head=beforenode(head,43);
Traversal(head);
// length(head);
// printf("The middle element is: %d\n",findtheMiddle(head);
free(head);
 free(first);
    free(second);
    free(third);
     free(four);
};