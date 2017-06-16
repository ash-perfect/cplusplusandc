/*
 * stack.h
 *
 *  Created on: Jun 16, 2017
 *      Author: lexi
 */

#ifndef STACK_H_
#define STACK_H_
#include "iostream"
using namespace std;
template<class T>
class stack {
private:
	struct node{
		T data;
		node * link;
	}*top;
public:
	stack();
	virtual ~stack();
	virtual T pop();
	virtual void push(T a);
};
template <class T>
stack<T>::stack() {
	// TODO Auto-generated constructor stub
top=NULL;
}

template <class T>
stack<T>::~stack() {
	// TODO Auto-generated destructor stub
	node* temp;
	cout<<"Stack destroyed!\nIt had this data while going down\n"<<endl;
	temp=top;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->link;
	}
}

template <class T>
void stack<T>::push(T a){
	node* temp=new node;
	if(top==NULL){
		temp->data=a;
		temp->link=NULL;
		top=temp;
	}
	else{
		temp->data=a;
		temp->link=top;
		top=temp;
	}
}
template <class T>
T stack<T>::pop(){
	node* temp=new node;
	if(temp==NULL){
		cout<<"Nothing to pop"<<endl;
		delete temp;
	}
	else{
		top=temp->link;
		return temp->data;
	}
}
#endif /* STACK_H_ */
