#include <iostream>

int main(void)
{
	int val1;
	std::cout << "첫 번째 숫자입력: ";
	std::cin >> val1;
	int val2;
	std::cout << "두 번째 숫자입력: ";
	std::cin >> val2;
	int result = val1 + val2;
	std::cout << "덧셈결과: " << result << std::endl;
	return 0;
}

// 입력의 기본구성	std::cin >> '변수'
// 변수의 선언위치	함수의 중간 부분에서도 변수의 선언이 가능하다.
//
// 출력에서와 마찬가지로 입력에서도 별도의 서식 지정이 불필요하다.