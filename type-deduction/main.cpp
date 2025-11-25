#include <iostream>


template<typename T>
void f(T& param);


int main() {


	const char name[] = "Trust Wells";

	// T is deduced to char[] instead of char* (not decayed per the array to pointer decay rule that usually happens
	//
	// This is because the parameter type of f() is T& (reference) and is a unique property
	//
	f(name);
	
	

	return 0;


}



