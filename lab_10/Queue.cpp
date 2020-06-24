#include <iostream>
#include <string>
#include "Queue.h"
using namespace std;

Queue::Queue():LinkedList() { } // does nothing

Queue::~Queue(){ } // does nothing

void Queue::enqueue(int value) {
	//inserts a new element value at the back of the Queue, by calling the apprprite LinkedList function	

	insertAtBack(value);

}

int Queue::dequeue() {

	//removes the first element of the Queue, by calling the appropriate LinkedList function. 

	int val_to_remove = first->val;

	// handle exception

	if( isEmpty() ) {
		throw 0;
	}

	// Call LinkedList function
	removeFromFront();
	
	//Returns the value of the element that has been dequeued
	return val_to_remove;
}

int& Queue::front() {
	//handle exception
	if ( isEmpty() ) {
		throw -1;
	}

	//call Linkedlist function
	LinkedList();

	//returns a reference to the front elemnt of the Queue
	return first->val;
}

