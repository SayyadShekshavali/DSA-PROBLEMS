#include<stdio.h>
#include <cstdlib> 
struct Node{
    int data;
    struct Node* next;
    
};
void Traversal(struct Node* ptr){
while(ptr!=NULL){
    printf("ELement :%d\n",ptr->data);
    ptr=ptr->next;
    }
};
//DELETE AT BEGING //
struct Node* deleteatfirst(struct Node*first){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node*));
    struct Node*p=first;
    ptr=first->next;
    return first;
}
// INSERTIGN AT THE BEGING//
// struct Node* insertbeg(struct Node* first ,int data)
// {
//  struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
 
//  ptr->next=first;
//  ptr->data=data;
//  return ptr;
//  };
  
  // INSERTIGN AT THE END//
//   struct Node* insertend(struct Node* first ,int data)
//  {
//   struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
//   struct Node* p=first;
//   while(p->next!=NULL){
//       p=p->next;
//   }
//   ptr->data=data;
//   p->next=ptr;
//   ptr->next=NULL;
//  return first;
//  };

//INSERTING AT THE INDEX //

//  struct Node* insertindex(struct Node* first ,int data,int index)
// {
//  struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
//  struct Node*p=first;
//  int i=0;
//  while(i!=index-1){
//      p=p->next;
//      i++;
//  }
//  ptr->data=data;
//  ptr->next=p->next;
//  p->next=ptr;
//  return first;
//  };
 
 // INSERT AT AFTER A NODE//
 
//   struct Node* insertafternode(struct Node* first ,struct Node* prevnode ,int data)
// {
//  struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
//  ptr->data=data;
//  ptr->next=prevnode->next;
//  prevnode->next=ptr;
 
//  return ptr;
//  };
int main(){
   struct Node* first;
    struct Node* head;
     struct Node* second;
      struct Node* third;
//* Allocated memory for nodes in the linked list in Heap //
    first=(struct Node*) malloc(sizeof(struct Node));
head = (struct Node*) malloc(sizeof(struct Node));
  second=(struct Node*) malloc(sizeof(struct Node));
  third=(struct Node*) malloc(sizeof(struct Node));

first->data=10;
  first->next=head;

  head->data=20;
  head->next=second;

    second->data=30;
  second->next=third;

    third->data=40;
  third->next=NULL;
//  first=insertbeg(first,56);
// first=insertindex(first,34,2);
//   first=insertend(first,30);
//  insertafternode(first,first, 21);
//  deleteatfirst(first,first, 21);
   Traversal(first);
   
   struct Node* temp;
   while(first!=NULL){
       temp=first;
       first=first->next;
       free(temp);
   }
return 0;
}