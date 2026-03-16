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

/*
#include <iostream>

int main(void)
{
	char name[50];
	char phoneNumber[50];

	std::cout << "이름: ";
	std::cin >> name;
	std::cout << "전화번호: ";
	std::cin >> phoneNumber;

	std::cout << "당신의 이름 : " << name << std::endl;
	std::cout << "당신의 전화번호: " << phoneNumber << std::endl;
	return 0;
}
*/