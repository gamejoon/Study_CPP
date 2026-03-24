#include <iostream>
using namespace std;

int main(void)
{
	int num1 = 1020;
	int& num2 = num1; // num1에 대한 참조자 num2를 선언하였다. 따라서 이후로는 num1과 num2가 동일한 메모리 공간을 참조하게 된다.

	num2 = 3047;
	cout << "VAL: " << num1 << endl; // 동일한 값이 출력되면, num1과 num2가 동일한 메모리 공간을 참조함을 증명하는 셈이다.
	cout << "REF: " << num2 << endl;

	cout << "VAL: " << &num1 << endl; // num1과 num2의 주소값을 출력하게 하였다. 특히 이 출력결과에 주목하기 바란다.
	cout << "REF: " << &num2 << endl;

	//int& num3 = num2;
	//int& num4 = num3;
	//cout << "num3 = " << num3 << " addr = : " << &num3 << endl;
	//cout << "num3 = " << num4 << " addr = : " << &num4 << endl;
	return 0;
}