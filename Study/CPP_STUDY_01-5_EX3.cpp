#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void);
}

namespace BestComImpl
{
	void PrettyFunc(void);
}
// 선언된 이름공간의 이름이 동일하다면, 이 둘은 동일한 이름공간으로 간주한다.
// 즉, SimpleFunc와 PrettyFunc는 동일한 이름공간안에 존재하는 상황이다.

namespace ProgComImpl
{
	void SimpleFunc(void);
}

int main()
{
	BestComImpl::SimpleFunc();

	return 0;
}

void BestComImpl::SimpleFunc(void)
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
	PrettyFunc();
	// 이름공간을 명시하지 않고 함수를 호출하면, 함수의 호출문이 존재하는 함수와 동일한 이름공간에서 호출할 함수를 찾게 된다.
	// 따라서 SimpleFunc 함수 내에서는 이름공간을 명시하지 않은 상태에서 PrettyFunc 함수를 직접호출 할 수 있다.
	ProgComImpl::SimpleFunc();
}

void BestComImpl::PrettyFunc(void)
{
	std::cout << "So Pretty!!" << std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}