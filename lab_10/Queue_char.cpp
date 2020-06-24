#include <iostream>
#include <string>
#include "Queue_char.h"
using namespace std;

Queue_char::Queue_char():LinkedList_char() { } // does nothing

Queue_char::~Queue_char(){ } // does nothing

void Queue_char::enqueue(char value) {
	//inserts a new element value at the back of the Queue, by calling the apprprite LinkedList function	

	insertAtBack(value);

}

char Queue_char::dequeue() {

	//removes the first element of the Queue, by calling the appropriate LinkedList function. 

	char val_to_remove = first->val;

	// handle exception

	if( isEmpty() ) {
		throw 0;
	}

	// Call LinkedList function
	removeFromFront();
	
	//Returns the value of the element that has been dequeued
	return val_to_remove;
}

char& Queue_char::front() {
	//returns a reference to the front elemnt of the Queue

	return first->val;

	//handle exception

	if ( isEmpty() ) {
		throw -1;
	}

	//call Linkedlist function
	LinkedList_char();
}


