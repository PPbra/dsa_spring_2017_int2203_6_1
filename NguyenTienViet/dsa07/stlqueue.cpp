#include<iostream>
#include<queue>

using namespace std;

int main(){

    queue<int> myQueue;

    myQueue.push(10);
    myQueue.push(5);
    cout << "enQueue(10)" << endl << "enQueue(5)" << endl;

    cout << "front(): " << myQueue.front() << endl << endl;

    cout << "dequeue()" << endl;
    myQueue.pop();
    cout << "size() = " << myQueue.size() << endl << endl;

    cout << "dequeue()"  << endl;
    myQueue.pop();
    cout << "size() = " << myQueue.size() << endl << endl;

    if(!myQueue.empty()){
        cout << "front(): " << myQueue.front() << endl << endl;
    }
    else{
        cout << "front(): loi, hang doi rong" << endl << endl;
    }

    if(!myQueue.empty()){
        cout << "dequeue()"  << endl;
        myQueue.pop();
        cout << "size() = " << myQueue.size() << endl << endl;
    }
    else{
        cout << "dequeue(): loi, hang doi rong" << endl << endl;
    }

    cout << "enQueue(8)" << endl;
    myQueue.push(8);
    cout << "front(): " << myQueue.front() << endl << endl;
    return 0;
}
