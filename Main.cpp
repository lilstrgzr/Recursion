#include<iostream>


unsigned long long factorial(int num) {
	if (num < 0)
		return 0;
	if (num == 0)
		return 1;
	return factorial(num - 1) * num;
}


int fibonacci(int num) {
	if (num <= 0)
		return 0;
	if (num == 1)
		return 1;
	return fibonacci(num - 1) + fibonacci(num - 2);

}

//Рекурсия-это прием в программировании при котором функция вызывает саму себя, либо непосредственно 
int main() {
	setlocale(LC_ALL, "russian");
	int n;

	//Задание "Факториал"
	
	std::cout << "Введите число -> ";
	std::cin >> n;
	std::cout << n << "!= " << factorial(n) << std::endl;


	//Задача 1. Числа Фибоначи
	std::cout << "Задача 1.\nВведите номер числа фибоначи -> ";
	std::cin >> n;
	std::cout << fibonacci(n) << std::endl;
	for (int i = 0; i < 13; i++)
		std::cout << fibonacci(i) << " ";
	std::cout << std::endl;



	return 0;
}