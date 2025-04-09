#include<bits/stdc++.h>
using namespace std;
class Queue{
	int front,rear;
	int * queue;
	int capacity;
public:
	Queue(int size){
		capacity=size;
		front=0;
		rear=-1;
        queue=int new[capacity];
	}
	// Destructor to free memory
    ~Queue() {
        delete[] queue;
    }

	bool isFull(){
		return (rear + 1) % capacity == front;
	}
	bool isEmpty(){
		return front == (rear + 1) % capacity;
	}
	//function to add an element to the queue
	void enqueue(int val){
		if(isFull()){
			cout<<"Queue is full.Cannot enqueue"<<endl;
			return;
		}
		rear = (rear + 1)%capacity;
		queue[rear]=val;
		cout<<"Enqueued: " <<val<<endl;
	}
	//function to remove an element from the queue
	int dequeue(){
		if(isEmpty()){
			cout<<"Queue is empty.Cannot dequeue."<<endl;
			return -1;
		}
		int val = queue[front];
		front=(front + 1) % capacity;
		cout<<"Dequeued: " << val <<endl;
		return val;
	}
	//function to get the front element of the queue
	int peek(){
		if(isEmpty()){
			cout<<"queue is empty. No front element."<<endl;
			return -1;
		}
	return queue[front];
    }
    //function to display the queue elements
    void display(){
    	if(isEmpty()){
    		cout<<"queue is empty." <<endl;
    		return;
    	}
    	cout<<"Queue elements: ";
    	for(int i=0;i<capacity;i++){
    		if((front + i)%capacity==(rear + 1)%capacity){
    			break;
    		}
    		cout<<queue[(front + i)%capacity] << " ";
    	}
    	cout<<endl;
    }
};
int main(){
     Queue q(5);
     q.enqueue(10);
     q.enqueue(20);
     q.enqueue(30);
     q.display();
}
