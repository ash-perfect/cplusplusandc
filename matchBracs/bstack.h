/*
 * bstack.h
 *
 *  Created on: Jun 16, 2017
 *      Author: lexi
 */

#ifndef BSTACK_H_
#define BSTACK_H_

template<class T>
class bstack {
private:
	struct node{
		T data;
		node* link;
	}*top;
public:
	bstack();
	virtual ~bstack();
	virtual T pop();
	virtual void push(T a);
	bool isempty();
};

#endif /* BSTACK_H_ */
