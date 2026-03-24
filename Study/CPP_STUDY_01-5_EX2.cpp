#include <iostream>

// 이름공간 BestComImpl에 위치하는 함수
namespace BestComImpl
{
	void SimpleFunc(void); // SimpleFunc의 선언과 정의의 분리
}

// 이름공간 ProgComImpl에 위치하는 함수
namespace ProgComImpl
{
	void SimpleFunc(void); // SimpleFunc의 선언과 정의의 분리
}

int main(void)
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc(void)
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}