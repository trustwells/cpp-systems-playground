#include <iostream>

class MyClass {
	int val;
public:
	MyClass(int i) {
		val = i;
	}

	int getval() { return val; }
	void setval(int i) { val = i; }
};

void display(MyClass obj) {
	std::cout << obj.getval() << '\n';
}

void change(MyClass& obj) {
	obj.setval(1000);

	std::cout << "Value of obj inside change(reference): ";
	display(obj);
	std::cout << '\n';
}

int main() {

	MyClass a(5);

	std::cout << "Value of a before calling change(): ";
	display(a);
	std::cout << '\n';

	change(a);

	std::cout << "Value of a after calling change(): ";
	display(a);
	std::cout << '\n';
	return 0;

}
