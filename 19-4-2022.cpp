#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
struct Node* partition(struct Node* head, int x) {
   Node *less=new Node(0);
   Node* ldummy=less;
   Node* equal=new Node(0);
   Node* edummy=equal;
   Node* greater= new Node(0);
   Node* gdummy= greater;
    while(head){
        if(head->data<x){
            less->next=head;
            less=head;
        }
        else if(head->data==x){
            equal->next=head;
            equal=head;
        }
        else{
            greater->next=head;
            greater=head;
        }
        head=head->next;
    }
    greater->next=NULL;
    equal->next=gdummy->next;
    less->next=edummy->next;
    return ldummy->next;

}
