#include<iostream>
int main()
{
	int a = 1;
	int &refer = a;
	std::cout << "a: " << refer << std::endl;
	a = 2;
	std::cout << "reference of a: " << refer << std::endl;
	int b = 10;
	//&refer = b; wrong.
	int * ptr = &b;
	int * &refer_to_ptr = ptr;
	std::cout << "b: " << b << std::endl
		  << "ptr to b and refer to ptr: "
		  << *ptr << ' ' << *refer_to_ptr << std::endl;
	refer = 1;
	std::cout << refer << std::endl;
	refer = b;
	std::cout << "a = " << a << " b = " << b << std::endl;
	return 0;
}
