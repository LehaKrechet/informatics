// Ввод и вывод данных производятся через стандартные потоки ввода-вывода.
// Входные данные
// Даны два целых числа, каждое число записано в отдельной строке.

// Выходные данные
// Выведите наибольшее из данных чисел.

#include <iostream>
#include <iomanip>
int main()
{
	int number_a, number_b, result;
	std::cin >> number_a;
	std::cin >> number_b;
	if (number_a >= number_b) {
		result = number_a;
	}else{
		result = number_b;
	}
	std::cout << result;


}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", Leha_Krechet чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл