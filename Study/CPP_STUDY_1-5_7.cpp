#include <iostream>

int val = 100;		// 전역변수

int SimpleFunc(void)
{
	int val = 20;	// 지역변수
	val += 3;		// 지역변수 val의 값 3 증가
	::val += 7;		// 전역변수 val의 값 7 증가

	return val;
}

int main()
{
	int val = SimpleFunc();

	std::cout << val << ' ' << ::val << std::endl;

	return 0;
}

// 범위지정 연산자는 지역변수가 아닌 전역변수의 접근에도 사용이 가능하다.
// ex) ::val