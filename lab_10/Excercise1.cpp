#include <iostream>
#include "Queue.h"
using namespace std;

int main(){

Queue queue;

try {
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    cout << "size() = " << queue.size() << endl;
    cout << "front() = " << queue.front() << endl;
    cout << "dequeue() = " << queue.dequeue() << endl;
    queue.print();

    cout << endl;

    queue.enqueue(4);
    queue.enqueue(5);
    queue.enqueue(6);
    cout << "size() = " << queue.size() << endl;
    cout << "front() = " << queue.front() << endl;
    cout << "dequeue() = " << queue.dequeue() << endl;
    queue.print();

    cout << endl;


    queue.enqueue(7);
    queue.enqueue(8);
    queue.enqueue(9);
    queue.enqueue(10);
    cout << "size() = " << queue.size() << endl;
    cout << "front() = " << queue.front() << endl;
    cout << "dequeue() = " << queue.dequeue() << endl;
    queue.print();

    cout << endl;

    return 0;
}

catch(int error) {
	if( error == 0 ) {
		// catch exception from dequeue()
	} else if( error == -1 ) {
		// catch exception from front()
	}
}
}
