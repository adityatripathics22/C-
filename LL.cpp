using namespace std;
#include <vector>
#include <iostream>

// int main(){
//     int a = 2;
//     int* y = &a;
//     cout << y << endl;
//     cout << a << endl;
//     cout << *y;
// }
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
int main() {
    vector<int> arr = {2, 5, 8, 7};
    // Create a Node 'y' first so that its address can be used
    Node y(arr[1] , nullptr);
    Node* a = &y;
    // Create a Node 'x' with the first element of the vector and a pointer to 'y'
    Node x(arr[0] , a);
    // Create a pointer 'z' pointing to the Node 'x'
    Node* w = &x;
    // Print the memory address of the Node 'x' using the pointer 'y'
    cout << x.next << '\n';
    cout << w->next << '\n';
    cout << (*w).data << '\n';
    cout << w-> data ;
}