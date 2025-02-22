#include<iostream>
using namespace std;

// Define the Node structure 
struct Node{
  int data;
  Node* next;
  Node* prev;

  // Constructor to initialize Node with data 
  Node(int data) : data(data), next(nullptr),
  prev(nullptr){}
  };

  // Function to traverse the doubly linked list 
  // in forward direction 
  void forwardTraversal(Node* head){

    // Start traversal from the head of the list 
    Node* curr = head;

    // Continue until current node is not null
    // (end of list)
    while(curr!=nullptr){

      // Output data of the current node
      cout<<curr-> data <<" ";

      // Move to the next node
      curr = curr->next;

    }

    // Print newline after traversal 
    cout<<endl;
  }

  // Funtion to traversal the doubly linked list 
  // in backward direction 
  void backwardTraversal(Node*tail){

    // Start traversal from the tail of the list
    Node* curr = tail;

    // Continue until current node is not null
    // (end of list)

    while(curr!=nullptr){

      // Output data of the current node is not null 
      cout<<curr->data <<" ";

      // Move to the previous node
      curr = curr->prev;
    }

    // Print newline after traversal
    cout<<endl;
  }

  int main(){

    // Samplea usage pf the doubly linked list and traversal functions
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    cout<<" Forward Traversal : "<<endl;
    forwardTraversal(head);

    cout<<" Backward Traversal : "<< endl;
    backwardTraversal(third);
    
    return 0;
  }