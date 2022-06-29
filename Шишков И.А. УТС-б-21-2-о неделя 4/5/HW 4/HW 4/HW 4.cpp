#include <iostream>
#include <cmath>

int main()
{
	int S, N;

	std::cout << "Введите число : ";
	std::cin >> N;

	std::cout << "Введите степень : ";
	std::cin >> S;

	std::cout << pow(N, S) << std::endl;

	return 0;
}