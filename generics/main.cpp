#include <iostream>


template <class T> void swapargs(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}




int main() {

	int i=10, j=20;
	float x=10.1, y=23.3;
	char a='x', b='z';

	std::cout << "Original i, j: " << i << ' ' << j << '\n';
	std::cout << "Original x, y: " << x << ' ' << y << '\n';
	std::cout << "Original a, b: " << a << ' ' << b << '\n';

	swapargs(i, j);
	swapargs(x, y);
	swapargs(a, b);

	
	std::cout << "Original i, j: " << i << ' ' << j << '\n';
	std::cout << "Original x, y: " << x << ' ' << y << '\n';
	std::cout << "Original a, b: " << a << ' ' << b << '\n';

	return 0;
}
