#include <iostream>
#include "Queue_char.h"
using namespace std;


int main()
{
    Queue_char queue;
    
    cout << "isEmpty():\t\t\t" << queue.isEmpty() << endl;

    queue.enqueue('A');
    cout << "enqueue(A)  Queue contents:\t";
    queue.print();

    queue.enqueue('Y');
    cout << "enqueue(Y)  Queue contents:\t";
    queue.print();

    cout << "size(): " << queue.size() << " Queue contents:\t";
    queue.print();

    cout << "deuqueue(): " << queue.dequeue() << " Queue contents:\t";
    queue.print();
 
    cout << "isEmpty():\t\t\t" << queue.isEmpty() << endl;

    queue.enqueue('D');
    cout << "enqueue(D)  Queue contents:\t";
    queue.print();

    cout << "front():  " << queue.front();
    cout << " Queue contents:\t";
    queue.print();

    queue.enqueue('T');
    cout << "enqueue(T)  Queue contents:\t";
    queue.print();

    cout << "dequeue(): " << queue.dequeue() << " Queue contents:\t";
    queue.print();

return 0;
}

