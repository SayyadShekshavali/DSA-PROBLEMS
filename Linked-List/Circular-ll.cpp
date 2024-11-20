#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

void  Traversal(struct Node *head){
    struct Node* ptr = head;
    do{
           printf("Elements are :%d\n",ptr->data);
            ptr=ptr->next;
    }while(ptr!=head);
};
struct Node*  Insertatfirst(struct Node *head,int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
      struct Node* p = head;
        
while(p->next!=head){
  p=p->next;
};
p->next=ptr;
ptr->next=head;
head=ptr;
    return head;
}
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
    
    head->data=23;
    head->next=first;

      first->data=33;
    first->next=second;

      second->data=43;
    second->next=third;

      third->data=53;
    third->next=four;

      four->data=63;
    four->next=head;
 head=Insertatfirst(head,78);
    Traversal(head);
free(head);
 free(first);
    free(second);
    free(third);
     free(four);
};