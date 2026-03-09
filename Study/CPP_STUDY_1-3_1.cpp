#include <iostream>
int Adder(int num1 = 1, int num2 = 2);
// 함수의 선언을 별도로 둘 때에는 디폴트 값의 선언을 함수의 선언부에 위치시켜야 한다.
// 그 이유는 컴파일러의 컴파일 특성에서 찾을 수 있다.
// 컴파일러는 함수의 디폴트 값의 지정여부를 알아야 함수의 호출 문장을 적절히 컴파일 할 수 있다.

int main(void)
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;
	return 0;
}

int Adder(int num1, int num2)
{
	return num1 + num2;
}

// int YourFunc(int num1, int num2 = 5, int num3 = 7) { . . . }
// YourFunc(10);	// YourFunc(10, 5, 7);
// YourFunc(10, 20);	// YourFunc(10, 20, 7);
// 매개변수의 일부에만 디폴트 값을 지정하고, 채워지지 않은 매개변수에만 인자를 전달하는 것이 가능하다.
// 
// int YourFunc(int num1, int num2, int num3 = 30) { . . . } (o)
// int YourFunc(int num1, int num2 = 20, int num3 = 30) { . . . } (o)
// int YourFunc(int num1 = 10, int num2 = 20, int num3 = 30) { . . . } (o)
// 전달되는 인자가 왼쪽에서 부터 채워지므로, 디폴트 값은 오른쪽에서부터 채워져야 한다.
// 
// int WrongFunc(int num1 = 10, int num2, int num3) { . . . } (x)
// int WrongFunc(int num1 = 10, int num2 = 20, int num3) { . . . } (x)
// 전달되는 인자가 왼쪽에서부터 채워지므로, 오른쪽이 빈 상태로 왼쪽의 매개변수에만 일부 채워진 디폴트 값은 의미를 갖지 못한다.
// 따라서 컴파일 에러를 일으킨다.
