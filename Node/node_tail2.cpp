#include <iostream>
using namespace std;
class Node {
    public:
        int val;
        Node* next;
        Node(int val) {
            this->val=val;
            this->next=NULL;
        } 
};
void insert_at_tail(Node*& head, int v) {
    Node *newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    if (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;

}
void print_linked_list(Node* head){
    Node* tmp = head;
    while (tmp != NULL) {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int main() {
    Node *head = NULL;
   while(true) {
    cout<<"Option 1: Insert at tail: "<<endl;
    cout<<"Option 2: Print linked list: "<<endl;
    cout<<"Option 3: Terminate: "<<endl;
    int op;
    cin>>op;
    if(op == 1) {
        cout<<"Please enter a value: ";
        int v;
        cin >> v;
        insert_at_tail(head, v);
    }
    else if (op == 2) {
        print_linked_list(head);
    } else if (op == 3) {
        break;
    }
   } 
    return 0;
}