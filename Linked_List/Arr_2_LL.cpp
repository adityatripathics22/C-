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

int lengthOfAll(Node* head){
    int cnt = 0 ;
    Node* temp = head;
    while (temp)
    {
        temp = temp -> next;
        cnt++;
    }
    return cnt;
    
    
}

int checkIfPresent(Node* head ,int val){
    Node* temp = head;
    while(temp){
        if(temp -> data == val){
            return 1;
        }temp = temp->next;
    }return 0;
}

void print(Node* temp){
    while(temp){
        cout << temp -> data << " " ;
        temp = temp -> next;
    }
    cout << endl;
}

Node* removeshead(Node* head){
    if(head == NULL){
        return head;
    }
    Node* temp = head;
    head = head-> next;
    delete temp;
    return head;
}

Node* removestail(Node* head){
    if(head == NULL || head->next == NULL ){
        // If list is empty or has only one node, return head (or could delete head if needed)
        return head;
    }
    Node* temp = head;
    // Traverse to the second last node
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    // temp now points to second last node
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node* removeK(Node* head , int  k){
    if(head == NULL){
        return head;
    }
    if(k == 1){
        Node*temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int cnt = 1; //0
    Node* temp = head->next; //head
    Node* prev = head; //NULL 
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }prev = temp;
        temp = temp->next;
    }
    return head;
}

Node* removeele(Node* head , int  ele){
    if(head == NULL){
        return head;
    }
    if(head->data ==ele){
        Node*temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node* temp = head->next; //head
    Node* prev = head; //NULL 
    while(temp != NULL){
        if(temp->data == ele){
            prev->next = prev->next->next;
            delete temp;
            break;
        }prev = temp;
        temp = temp->next;
    }
    return head;
}

Node* inserthead(Node* head ,int val){
    Node* temp = new Node(val , head);
    return temp;

}

Node* inserttail(Node* head , int val){
    if(head == NULL){
        return new Node(val);
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;

    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}

Node* insertPosition(Node* head , int el , int k){
    if(head == NULL){
        if(k == 1){
            return new Node(el);
        }else{
            return head;    //NOT POSSIBLE
        }
    }
    if(k==1){
        return new Node(el , head);
    }
    int cnt =1;
    Node* temp = head->next;
    while(temp->next != NULL){
        if(cnt == (k-1)){
            Node* x = new Node(el, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;

    }return head; 
}


int main(){
    vector<int> arr = {20,40 , 60 ,80};
    Node* head = Arr2LL(arr);
    //cout << head->data;
    // Node* temp = head;
     
    // cout << endl << lengthOfAll(head) << endl;

    // cout << checkIfPresent(head , 6);

    // head = removeshead(head);
    // head = removestail(head);

    // head = removeK(head , 2);

    //head = removeele(head , 40);


    print(head);


}

// 🔹 Why we usually use new for linked lists

// Linked lists need nodes that live beyond the function call (persistent in memory).

// If you create them on the stack (without new), they disappear when the function ends.

// With new, they stay in heap memory until you delete them.