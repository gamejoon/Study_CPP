#include <iostream>

int main(void)
{
	int num = 20;
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	return 0;
}

// 헤더파일의 선언	#include <iostream>
// 출력의 기본구성	std::cout << '출력대상1' << '출력대상2' << '출력대상3';
// 개행의 진행		std::endl을 출력하면 개행이 이뤄진다.
//
// C언어에서는 출력의 대상에 따라 서식지정을 달리했지만, C++에서는 그러한 과정이 불필요하다.