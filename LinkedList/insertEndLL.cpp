#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* next;

  Node(int new_data){
    data = new_data;
    next = nullptr;
  }
};

// function to insert a new node at the end and return the head 
Node* insertAtEnd(Node* head, int new_data){

  // Create a new node
  Node* new_node = new Node(new_data);

  //If the Linked List is empty. make the new node as the head and return
  if(head==nullptr){
    return new_node;
  }

  //Store the head reference in a temporary variable 
  Node* last = head;

  // Traverse till the last node
  while(last->next!= nullptr){
    last = last -> next;
  }

  //Change the next pointer of the lst node to point to the new node
  last->next = new_node;

  //return the head of the list
  return head;

}

void printList(Node* node){
  while (node!=nullptr){
    cout<<node->data<<" ";
    node = node->next;
  }
}

int main(){

  //Create the linked list 2->3->4->5->6
  Node* head=new Node(2);
  head->next = new Node(3);
  head->next->next = new Node(4);
  head->next->next->next = new Node(5);
  head->next->next->next->next = new Node(6);

  //Example of appending a node at the end
  head = insertAtEnd(head,1);
  printList(head);

  return 0;
}
