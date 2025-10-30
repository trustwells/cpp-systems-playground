#include <iostream>

class MyClass {
	int val;
	int copy_number;
public:
	//Normal constructor
	MyClass(int i) {
		val = i;
		copy_number = 0;
		std::cout << "Inside normal constructor\n";
	}

	//Copy constructor
	MyClass(const MyClass &o) {
		val = o.val;
		copy_number = o.copy_number + 1;
		std:: cout << "Inside copy constructor.\n";
	}

	~MyClass() {
		if (copy_number == 0)
			std::cout << "Destructing original\n";
		else
			std::cout << "Destructing copy " << copy_number << "\n";
	}

	int getval() { return val; }
};

void display(MyClass obj) {
	std::cout << obj.getval() << "\n";
}

int main() {

	MyClass a(10);
	display(a);

	return 0;

}
