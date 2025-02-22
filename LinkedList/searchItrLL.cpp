// Iterative C++ program to search
// an element in linked list

#include <iostream>
using namespace std;

// A linked list node
class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize a new node with data
    Node(int new_data)
    {
        data = new_data;
        next = nullptr;
    }
};

// Checks whether key is present in linked list
bool searchKey(Node* head, int key) {

    // Initialize curr with the head of linked list
    Node* curr = head;

    // Iterate over all the nodes
    while (curr != NULL) {

        // If the current node's value is equal to key,
        // return true
        if (curr->data == key)
            return true;

        // Move to the next node
        curr = curr->next;
    }

    // If there is no node with value as key, return false
    return false;
}

// Driver code
int main() {

    // Create a hard-coded linked list:
    // 14 -> 21 -> 13 -> 30 -> 10
    Node* head = new Node(14);
    head->next = new Node(21);
    head->next->next = new Node(13);
    head->next->next->next = new Node(30);
    head->next->next->next->next = new Node(10);

      // Key to search in the linked list
      int key = 14;
  
    if (searchKey(head, key))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
























// // iterative method for searching an element in a linked List
// #include<iostream>
// using namespace std;

// // A linked list node
// class Node{
//   public:
//   int data;
//   Node* next;

//   // Conctructor to initialize a new node with data
//   Node(int new_data)
//   {
//     data = new_data;
//     next = nullptr;
//   }
// };

// // Check whether key is present in Linked List
// bool searchKey(Node* head, int key){

//   // Initialize curr with the head of linked list
//   Node* curr = head;

//   // Iterate over all the nodes
//   while(curr!=NULL){
//     //If the current node's value is equal to key,
//     // return true
//     if(curr->data == key)
//     return true;

//     // Move to the next node
//     curr = curr->next;
//   }

//   //If there is no node with value as key , return false
//   return false;
// }

// // driver code
// int main(){
//   //Create a hard-coded linked list:
//   // 14->21->13->30->10
//   Node* head = new Node(14);
//   head->next->next=new Node(13);
//   head->next->next->next=new Node(30);
//   head->next->next->next->next=new Node(10);

//   // Key to search in the linked list
//   int key = 14;

//   if(searchKey(head, key))
//       cout<<" YES";
//   else
//       cout<<"NO";

//   return 0;
// }