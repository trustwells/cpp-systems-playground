#include <iostream>


void someFunc(int, double);

template<typename T>
void f1(T param);

template<typename T>
void f2(T& param);




int main() {


	f1(someFunc); //param deduced as ptr-to-func; 
		      //type is void (*)(int, double)
	

	f2(someFunc); //param deduced as ref-to-func;
		      //type is void (&)(int, double)
	return 0;


}
