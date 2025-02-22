#include <bits/stdc++.h>  // Or use #include <iostream>
using namespace std;

class Node {  // Changed 'node' to 'Node'
public:
    int data;
    Node *next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

// Function to reverse the linked list
Node *reverseList(Node *head) {
    Node *curr = head, *prev = nullptr, *next = nullptr;

    while (curr != nullptr) {
        next = curr->next;  // Store next node
        curr->next = prev;  // Reverse current node's pointer
        prev = curr;        // Move prev one step forward
        curr = next;        // Move curr one step forward
    }
    return prev; // New head of the reversed list
}

// Function to print the linked list
void printList(Node *node) {
    while (node != nullptr) {
        cout << " " << node->data;
        node = node->next;
    }
    cout << endl;
}

int main() {
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Given linked list: ";
    printList(head);

    // Reverse the linked list
    head = reverseList(head);

    cout << "Reversed linked list: ";
    printList(head);

    return 0;
}



















// #include<bits/stdc++.h>
// using namespace std;

// class node{
//   public: 
//   int data;
//   Node *next;

//   Node(int new_data){
//     data = new_data;
//     next = nullptr;
//   }
// };

// // given the head of a list, reverse the list and return the head of list

// Node *reverseList(Node *head){

//   // Initialize three pointers: curr, prev and next
//   Node *curr = head, *prev = nullptr, *next = nullptr;

//   // Traverse all the nodes of linked List
//   while(curr!=nullptr){

//     // store next node
//     next = curr->next;

//     //reverse current node's next pointer 
//     curr->next = prev;

//     //Move pointers one position ahead
//     prev = curr;
//     curr = next;

//   }

//   //Return the head of reversed linked list
//   return prev;
// }

// void printList(Node *node){
//   while (node != nullptr) {
//     cout<< " "  << node->data;
//     node = node->next;
//   }
//   cout<<endl;
// }

// int main(){

//   // Create a hard coded Linked List:
//   // 1 -> 2 -> 3 -> 4 -> 5
//   Node *head = new Node(1);
//   head->next = new Node(2);
//   head->next->next = new Node(3);
//   head->next->next->next = new Node(4);
//   head->next->next->next->next = new Node(5);

//   cout<<"Give linked list: ";
//   printList(head);

//   head = reverseList(head);

//   cout<<"\n Reversed Linked List: ";
//   printList(head);
//   return 0;
// }