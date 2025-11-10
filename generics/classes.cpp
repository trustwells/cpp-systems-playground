#include <iostream>


template <class T> class Queue {
	T* arr;
	int capacity;
	int front;
	int rear;
	int count;
public:
	Queue(int size) {
		capacity = size;
		front = 0;
		rear = -1;
		count = 0;
			
		arr = new T[capacity];
	}

	~Queue() {
		delete[] arr;
	}

	bool isFull() {
		return count == capacity;
	}

	bool isEmpty() {
		return count == 0;
	}

	void enqueue(T value) {
		if (isFull()) {
			std::cout << "Queue is full, error inserting: " << value << '\n';
		}

		rear = (rear + 1) % capacity;
		arr[rear] = value;
		count++;
	
	}


	T dequeue() {
		if (isEmpty()) {
			std::cout << "Queue is empty, error dequeue" << '\n';
			return T();
		}
		T value = arr[front];
		front = (front + 1) % capacity;
		count--;
	}

	T peek_front() {
		if (isEmpty()) {
			std::cout << "Queue is empty" << '\n';
			return T();
		}

		return arr[front];
	}
};

int main() {

	Queue<int> q(5);
	Queue<char> q2(3);

	q.enqueue(1);
	q.enqueue(2);
	std::cout << q.peek_front() << '\n';

	q2.enqueue('a');
	std::cout << q2.peek_front() << '\n';
	return 0;
}
