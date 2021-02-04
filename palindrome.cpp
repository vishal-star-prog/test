// program to check whether a linked list is palindrome or not

#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
struct Node{
    Node* next;
    int data;
    Node(int x){
        data=x;
        next=NULL;
    }
}
bool palindrome(Node *head){
    Node *temp = head;
    stack<int> s;
    while(temp!=NULL){
        s.push(temp->data);
        temp = temp->next;
    }
    temp = head;
    while(temp!=NULL){
        int x = s.top();
        s.pop();
        if(x!=temp){
            return false;
            break;
        }
    }
    return true;
}
int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(1);
    cout<<palindrome(head)<<endl;
    return 0;
}
