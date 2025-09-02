using namespace std;
#include <vector>
#include <iostream>


class Node {
    public:
        int data;         // Data stored in the node
        Node* next;       // Pointer to the next node in the linked list
        // Constructors
        Node(int data1, Node* next1) {
            data = data1;
            next = next1;
        }
        // Constructor
        Node(int data1) {
            data = data1;
            next = nullptr;
        }
};
Node* Arr2LL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1 ; i < arr.size() ; i++){
        Node* temp = new Node(arr[i]);
        (*mover).next = temp;
        //mover->next = temp;
        mover = temp;
    }
    return head;

}
int main(){
    vector<int> arr = {2,4,6,8};
    Node* head = Arr2LL(arr);
    cout << head->data;
    Node* temp = head;
    while(temp){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

// 🔹 Why we usually use new for linked lists

// Linked lists need nodes that live beyond the function call (persistent in memory).

// If you create them on the stack (without new), they disappear when the function ends.

// With new, they stay in heap memory until you delete them.