#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};
void insertEnd (node** head, int ndata) {
    node* newnode = new node();
    newnode->data=ndata;
    newnode->next=nullptr;
    if(*head==nullptr) {
        *head=newnode;
    } else {
        node* temp = *head;
        while(temp->next!=nullptr) {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void display (node* head) {
    while(head!=nullptr) {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main() {
    node* head = nullptr;
    insertEnd(&head,5);
    insertEnd(&head,6);
    insertEnd(&head,7);
    display(head);
    return 0;
}