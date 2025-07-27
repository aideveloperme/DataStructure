#include<iostream>
#include<vector>
using namespace std;

// Define a Node of linked list
struct Node{
    int data;       // data part
    Node* next;     // pointer to next node
    Node(int val) : data(val), next(NULL) {} // constructor
};

// Global head pointer, initially NULL
Node* head = NULL;

// Insert node at beginning
void insertAtBegin(int data){       // pass data to insert
    Node* newNode = new Node(data); // create new node with given data
    newNode->next = head;           // new node points to old head
    head = newNode;                 // move head to new node
}

// Print linked list
void printList(){
    Node* temp = head;             // temp points to head
    while(temp != NULL){           // traverse till end
        cout << temp->data << " "; // print data
        temp = temp->next;         // move to next node
    }
    cout << endl;
}

// Insert node at end
Node* insertEnd(Node* head, int X){
    Node* newNode = new Node(X);       // create new node
    if(head == NULL) return newNode;   // if list empty, new node is the list
    Node* curr = head;                 // start from head
    while(curr->next != NULL){         // move to last node
        curr = curr->next;
    }
    curr->next = newNode;              // link new node at end
    return head;                       // return unchanged head
}

// Delete head node
Node* deleteHead(Node* head){
    if(head == NULL) return NULL;   // empty list
    Node* temp = head->next;        // save next node
    delete head;                    // free memory of old head
    return temp;                    // return new head
}

// Delete last node
Node* deleteLast(Node* head){
    if(head == NULL) return NULL;          // empty list
    if(head->next == NULL){                // only one node
        delete head;
        return NULL;
    }
    Node* curr = head;                     // start from head
    while(curr->next->next != NULL){       // move to second last node
        curr = curr->next;
    }
    delete curr->next;                     // delete last node
    curr->next = NULL;                     // second last becomes last
    return head;
}

// Insert at position (1-based)
Node* insertAtPosition(Node* head, int X, int pos){
    Node* newNode = new Node(X);           // create new node
    if(pos == 1){                          // insert at head
        newNode->next = head;
        return newNode;
    }
    Node* temp = head;
    for(int i=1; i<pos-1; i++){            // move to (pos-1)-th node
        if(temp == NULL){
            cout << "Position out of range" << endl;
            return head;
        }
        temp = temp->next;
    }
    if(temp == NULL){
        cout << "Position out of range" << endl;
        return head;
    }
    newNode->next = temp->next;            // link new node
    temp->next = newNode;
    return head;
}

// Iterative search: return position or -1
int search(Node* head, int X){
    int pos = 1;
    Node* curr = head;
    while(curr != NULL){
        if(curr->data == X)
            return pos;
        curr = curr->next;
        pos++;
    }
    return -1;
}

// Recursive search: return position or -1
int recursiveSearch(Node* head, int X){
    if(head == NULL) return -1;                // not found
    if(head->data == X) return 1;              // found at first node
    int res = recursiveSearch(head->next, X);  // search in rest
    if(res == -1) return -1;                    // not found in rest
    else return res + 1;                        // add 1 to position
}

// Print middle using count (two traversals)
void printMiddle(Node* head){
    if(head == NULL) return;
    int count = 0;
    Node* curr = head;
    while(curr != NULL){               // count nodes
        count++;
        curr = curr->next;
    }
    curr = head;
    for(int i=0; i<count/2; i++)       // go to middle
        curr = curr->next;
    cout << "Middle element: " << curr->data << endl;
}

// Print middle using slow & fast pointers (one traversal)
void printMiddleEfficient(Node* head){
    if(head == NULL) return;
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << "Middle element: " << slow->data << endl;
}

// Print nth node from end (two traversals)
void printNthFromEnd(Node* head, int n){
    int len=0;
    Node* curr=head;
    while(curr!=NULL){         // count length
        len++;
        curr=curr->next;
    }
    if(len<n){
        cout << "Position out of range" << endl;
        return;
    }
    curr = head;
    for(int i=1;i<len-n+1;i++) // move to (len-n+1)-th node
        curr=curr->next;
    cout << n << "th node from end: " << curr->data << endl;
}

// Print nth node from end (one traversal)
void printNth(Node* head, int n){
    Node* first=head;
    Node* second=head;
    for(int i=0;i<n;i++){
        if(first==NULL){
            cout << "Position out of range" << endl;
            return;
        }
        first=first->next;
    }
    while(first!=NULL){
        first=first->next;
        second=second->next;
    }
    cout << n << "th node from end: " << second->data << endl;
}

// Reverse list (naive: data changes)
Node* revList(Node* head){
    vector<int> arr;
    for(Node* curr=head; curr!=NULL; curr=curr->next)
        arr.push_back(curr->data);
    for(Node* curr=head; curr!=NULL; curr=curr->next){
        curr->data=arr.back();
        arr.pop_back();
    }
    return head;
}

// Reverse list (efficient: pointer changes)
Node* reverse(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    while(curr!=NULL){
        Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

// Recursive reverse
Node* recursiveReverse(Node* head){
    if(head==NULL || head->next==NULL)
        return head;
    Node* rest=recursiveReverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return rest;
}

int main(){
    insertAtBegin(1);           // insert 1 at beginning
    insertAtBegin(2);           // insert 2 at beginning
    insertAtBegin(3);           // insert 3 at beginning
    printList();                // list: 3 2 1

    head = insertEnd(head, 10); // insert 10 at end
    printList();                // list: 3 2 1 10

    head = deleteHead(head);    // delete first node
    printList();                // list: 2 1 10

    head = deleteLast(head);    // delete last node
    printList();                // list: 2 1

    head = insertAtPosition(head, 5, 2); // insert 5 at position 2
    printList();                        // list: 2 5 1

    cout << "Search 5: " << search(head, 5) << endl; // find position

    printMiddle(head);                  // print middle
    printMiddleEfficient(head);         // print middle (efficient)

    printNthFromEnd(head, 2);           // nth from end
    printNth(head, 2);                  // nth from end (one pass)

    head = reverse(head);               // reverse list
    printList();

    head = recursiveReverse(head);      // reverse again (recursive)
    printList();

    return 0;
}
