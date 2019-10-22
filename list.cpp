#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
node* head = NULL;
node* getNode(int data){
    node* newnode = new node;
    newnode -> data = data;
    newnode -> next = NULL;
    return newnode;
}

node* prinList(node* head2){
    while(head2 != NULL){
        cout << head2->data << " ";
        head2 = head2->next;
    }
}

int main(){
    int size;
    cin >> size;
    int element;
    for(auto i = 0; i < size; i++){
        cin >> element;
        if(head == NULL){
            head = getNode(element);
        }
        else{
            node* newnode = getNode(element);
            newnode ->next = head;
            head = newnode;
        }
    }
    prinList(head);
    return EXIT_SUCCESS;
}

