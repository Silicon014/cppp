#include<iostream>
constexpr int size(int a)
{
	return a * a;
}
int main()
{
	constexpr int a(10);
	constexpr int b = a * 2;
	constexpr int c{size(a)};
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	constexpr const char * ptr = "hello world";
	std::cout << *ptr << std::endl;
	return 0;
}
