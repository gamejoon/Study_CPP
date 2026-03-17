#include <iostream>
#include <string>

int main()
{
	std::string name, phone_number;

	std::cout << "이름을 입력하세요: ";
	std::cin >> name;

	std::cout << "전화번호를 입력하세요: ";
	std::cin >> phone_number;

	std::cout << "이름: " << name << " 전화번호: " << phone_number << std::endl;

	return 0;
}