#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};struct Node*head;

void insert(int x){
	struct Node* temp1=new Node();
	temp1->data=x;
	temp1->next=NULL;
	if(head!=NULL) temp1->next=head;
	head=temp1;
}

void print(Node*temp){
	if(temp==NULL){
		return ;
	}
	cout<<temp->data<<" ";
	temp=temp->next;
	print(temp);
}
void reverse(Node*temp){
	if(temp==NULL){
		return ;
	}
	reverse(temp->next);
	cout<<temp->data<<" ";
}
int main(){
	head=NULL;
	insert(3);
	insert(1);
	insert(6);
	insert(4);
	insert(8);
	insert(9);
	cout<<"List before reversing: \n";
	print(head);
	cout<<"\nList after reversing: \n";
	reverse(head);
	return 0;
}
