#include <iostream>

int MyFunc(int num)
{
	num++;
	return num;
}

int MyFunc(int a, int b)
{
	return a + b;
}

int main(void)
{
	std::cout << MyFunc(20) << std::endl; // MyFunc(int num) 함수의 호출
	std::cout << MyFunc(30, 40) << std::endl; // MyFunc(int a, int b) 함수의 호출
	return 0;
}

// C++은 함수호출 시 '함수의 이름'과 '전달되는 인자의 정보'를 동시에 참조하여 호출할 함수를 결정한다.
// 따라서 이렇듯 매개변수의 선언이 다르다면 동일한 이름의 함수도 정의 가능하다.
// 그리고 이러한 형태의 함수 정의를 가리켜 '함수 오버로딩(Function Overloading)'이라 한다.
// 
// int MyFunc(char c) { . . . }
// int MyFunc(int n) { . . . }
// 매개변수의 자료형이 다르므로 함수 오버로딩 성립
// 
// int MyFunc(int n) { . . . }
// int MyFunc(int n1, int n2) { . . . }
// 매개변수의 수가 다르므로 함수 오버로딩 성립
// 
// void MyFunc(int n) { . . . }
// int MyFunc(int n) { . . . }
// 반환형의 차이는 함수 오버로딩의 조건을 만족시키지 않는다.
