#include <iostream>

void MyFunc(void)
{
	std::cout << "MyFunc(void) called" << std::endl;
}

void MyFunc(char c)
{
	std::cout << "MyFunc(char c) called" << std::endl;
}

void MyFunc(int a, int b)
{
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}

int main(void)
{
	MyFunc(); // 3행의 함수를 호출
	MyFunc('A'); // 8행의 함수를 호출
	MyFunc(12, 13); // 13행의 함수를 호출
	return 0;
}