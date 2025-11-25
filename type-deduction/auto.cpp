#include <iostream>





int main() {


	auto x1 = 27;
	auto x2(27);
	auto x3 = { 27 };
	auto x4{ 27 };

	// x1 and x2 are deduced to be ints
	// 
	// but x3 and x4 are deduced to be std::initializer_list because of curly brace initialization
	


	return 0;



}
