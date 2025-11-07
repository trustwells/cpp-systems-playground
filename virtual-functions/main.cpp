#include <iostream>

class B {

public:
	virtual void who() {
		std::cout << "Base class\n";
	}
};

class D : public B {
public:
	void who() {
		std::cout << "First derived class override\n";
	}
};


int main() {

	B b_obj;
	D d_obj;

	std::cout << "B object who() = \n";
	b_obj.who();
	std::cout << "D object who() = \n";
	d_obj.who();

	return 0;

}
