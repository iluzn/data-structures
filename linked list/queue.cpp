#include<stdlib.h>
#include<stdio.h>
struct Node{
  int data;
  struct Node *next;
} *head=NULL;
void push(int data){
  Node *temp=head;
  Node *node=(Node*)malloc(sizeof(Node));
  node->next=NULL;
  node->data=data;
  if(head == NULL)  
        {  
            head = node;  
            return;   
        }  
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=node;
}
void pop(){
  Node *temp=head;
  head=temp->next;
}
void print(){
  Node *temp=head;
  while(temp!=NULL){
    if(temp->next==NULL){
       printf("%d ",temp->data);
    }
    else{
       printf("%d->",temp->data);
    }
    temp=temp->next;
  }
}
int main(){
  push(113);
  push(12);
  push(1111);
  push(1111);
  push(111);
  push(11);
  pop();
  pop();

  print();

  return 0;
}
