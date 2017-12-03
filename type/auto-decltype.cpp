#include<iostream>
int main()
{
	int a{10};
	auto b = a;
	decltype(b) c;
	c = 20;
	std::cout << b << ' ' << c << std::endl;

	auto &d = a;
	d = 20;
	decltype((a)) e = b;
	e = 30;
	std::cout << a << ' ' << b << std::endl;

	const int i = 10;
	auto j = i;
	j = 20;
	decltype(i) k(30);
	k = 40;
	
	return 0;
}
