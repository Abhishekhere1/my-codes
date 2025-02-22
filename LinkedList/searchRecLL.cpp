// Recursive C++ program to search
// an element in linked list

#include <iostream>
using namespace std;

// A Linked List Node
struct Node {
    int data;
    Node* next;
  
      // Constructor to initialize a new node with data
    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

// Checks whether the key is present in linked list
bool searchKey(struct Node* head, int key) {
  
    // Base case
    if (head == NULL)
        return false;

    // If key is present in current node, return true
    if (head->data == key)
        return true;

    // Recur for remaining list
    return searchKey(head->next, key);
}

// Driver code
int main() {
  
    // Create a hard-coded linked list:
    // 14 -> 21 -> 13 -> 30 -> 10
    struct Node* head = new Node(14);
    head->next = new Node(21);
    head->next->next = new Node(13);
    head->next->next->next = new Node(30);
    head->next->next->next->next = new Node(10);

      // Key to search in the linked list
      int key = 14;
  
    if (searchKey(head, key))
        printf("Yes");
    else
        printf("No");

    return 0;
}


























// #include<iostream>
// using namespace std;

// // A Linked List Node
// struct Node{
//   int data;
//   Node* next;

//   // constructor to initialize a new node with data
//   Node(int new_data){
//     data = new_data;
//     next = nullptr;
//   }
// };

// // Check whether the key is present in Linked List 
// bool searchKey(struct Node* head, int key){

//   // Base case
//   If(head==Null)
//     return false;

//   // If key is present in current node, return true
//   if(head->data == key )
//       return true;

//   // Recur for remaining list
//   return searchKey(head->next, key);
// }

// // Driver code
// int main(){

//   // Create a hard-coded linked list:
//   // 14->21->13->30->10
//   struct Node* head = new Node(14);
//   head->next = new Node(21);
//   head->next->next = new Node(13);
//   head->next->next->next = new Node(30);
//   head->next->next->next->next = new Node(10);

//   // Key to search in the linked list 
//   int key = 14;

//   if(searchKey(head, key))
//     print("YES");
//   else
//     print("No");
//   return 0;

// }