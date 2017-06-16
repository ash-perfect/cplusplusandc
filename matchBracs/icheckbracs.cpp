/*
 * icheckbracs.cpp
 *
 *  Created on: Jun 16, 2017
 *      Author: lexi
 */


#include "iostream"
#include "stack.h"
#include "bstack.h"
using namespace std;

class matchBrac{
private:
	bstack<char> obs;
	int primaryCount, secCount, maxCount;
public:
	matchBrac();
	void acceptBracs(char *a,int s);
	void printIt();
};
matchBrac::matchBrac(){
	primaryCount=secCount=maxCount=0;
}
void matchBrac::acceptBracs(char *a,int s){
	for(int i=0;i<s;i++){
		if(obs.isempty()){
			primaryCount+=secCount;
			secCount=0;
			if(a[i]=='('){
				obs.push(a[i]);
			}
			else if(a[i]==')'){
				if(primaryCount>=maxCount){
					maxCount=primaryCount;
					primaryCount=secCount=0;
				}
			}
			else
				break;
		}
		else{
			if(a[i]=='('){
				obs.push(a[i]);
			}
			else if(a[i]==')'){
				char t=obs.pop();
				if(t=='(')
					secCount++;
			}
			else
				break;
		}

	}
	if(primaryCount||secCount){
		primaryCount+=secCount;
		if(primaryCount>=maxCount){
			maxCount=primaryCount;
		}
	}
}
void matchBrac::printIt(){
	cout<<"Max is "<<maxCount<<endl;
}
int main(){
	char a[]="(()()))((((((((((())))))))";
	matchBrac mB;
	mB.acceptBracs(a,50);
	mB.printIt();
	return 0;
}
