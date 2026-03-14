inline int SQUARE(int x)
{
	return x * x;
}
// 키워드 inline 선언은 컴파일러에 의해서 처리된다.
// 컴파일러가 함수의 인라인화를 결정한다.
//
// inline 선언이 되어도 인라인처리 되지 않을 수 있고, inline 선언이 없어도 인라인처리 될 수 있다.


#include <iostream>

int main(void)
{
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;
	return 0;
}