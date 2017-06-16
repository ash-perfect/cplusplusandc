/*
 * bstack.cpp
 *
 *  Created on: Jun 16, 2017
 *      Author: lexi
 */

#include "bstack.h"
#include "iostream"
using namespace std;

template<class T>
bstack<T>::bstack() {
	// TODO Auto-generated constructor stub
	top=NULL;

}

template<class T>
bstack<T>::~bstack() {
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
void bstack<T>::push(T a){
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
T bstack<T>::pop(){
	node* temp=top;
	if(top==NULL){
		cout<<"Nothing to pop"<<endl;
	}
	else{
		top=top->link;
		return temp->data;
	}
}

template <class T>
bool bstack<T>::isempty(){
	return ((top==NULL)?1:0);
}
template class bstack<char>;
