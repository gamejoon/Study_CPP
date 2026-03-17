#include <iostream>
#include <string>

typedef struct _account {
	int id;
	std::string name;
	int money;
} Account;

void ShowMenu();
void MakeAccount(Account[], int);
void Deposit(Account[], int);
void Withdrawal(Account[], int);
void ShowAllAccounts(Account[], int);
void BreakProgram(int*);
void ShowError();

int main()
{
	Account accounts[100];
	int menu, running{ 1 }, cnt{ 0 };

	while (running)
	{
		ShowMenu();
		std::cin >> menu;

		switch (menu)
		{
		case 1:
			MakeAccount(accounts, cnt++);
			break;
		
		case 2:
			Deposit(accounts, cnt);
			break;

		case 3:
			Withdrawal(accounts, cnt);
			break;
		
		case 4:
			ShowAllAccounts(accounts, cnt);
			break;

		case 5:
			BreakProgram(&running);
			break;

		default:
			ShowError();
		}
	}

	return 0;
}

void ShowMenu()
{
	std::cout << "-----Menu------" << std::endl;
	std::cout << "1. 계좌개설" << std::endl;
	std::cout << "2. 입 금" << std::endl;
	std::cout << "3. 출 금" << std::endl;
	std::cout << "4. 계좌정보 전체 출력" << std::endl;
	std::cout << "5. 프로그램 종료" << std::endl;
	std::cout << "선택: ";
}

void MakeAccount(Account accounts[], int cnt)
{
	std::cout << std::endl;
	std::cout << "[계좌개설]" << std::endl;
	std::cout << "계좌ID: ";
	std::cin >> accounts[cnt].id;
	std::cout << "이 름: ";
	std::cin >> accounts[cnt].name;
	std::cout << "입금액: ";
	std::cin >> accounts[cnt].money;
	std::cout << std::endl;
}

void Deposit(Account accounts[], int cnt)
{
	int id, money;

	std::cout << std::endl;
	std::cout << "[입   금]" << std::endl;
	std::cout << "계좌ID: ";
	std::cin >> id;
	std::cout << "입금액: ";
	std::cin >> money;
	for (int i = 0; i < cnt; i++) {
		if (accounts[i].id == id) {
			accounts[i].money += money;
			std::cout << "입금완료" << std::endl;
			break;
		}
	}
}

void Withdrawal(Account accounts[], int cnt)
{
	int id, money;

	std::cout << std::endl;
	std::cout << "[출   금]" << std::endl;
	std::cout << "계좌ID: ";
	std::cin >> id;
	std::cout << "출금액: ";
	std::cin >> money;
	for (int i = 0; i < cnt; i++) {
		if (accounts[i].id == id) {
			accounts[i].money -= money;
			std::cout << "출금완료" << std::endl;
			break;
		}
	}
}

void ShowAllAccounts(Account accounts[], int cnt)
{
	std::cout << std::endl;
	for (int i = 0; i < cnt; i++)
	{
		std::cout << "계좌ID: " << accounts[i].id << std::endl;
		std::cout << "이 름: " << accounts[i].name << std::endl;
		std::cout << "잔 액: " << accounts[i].money << std::endl;
		std::cout << std::endl;
	}
}

void BreakProgram(int* running)
{
	*running = 0;
}

void ShowError()
{
	std::cout << "다시 입력하세요." << std::endl;
	std::cout << std::endl;
}