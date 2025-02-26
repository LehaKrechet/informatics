// За день машина проезжает n километров. Сколько дней нужно, чтобы проехать маршрут длиной m километров?

// При решении этой задачи нельзя пользоваться условной инструкцией if и циклами.

// Входные данные
// Программа получает на вход натуральные числа n и m, не превосходящие 10000.

// Выходные данные
// Выведите ответ на задачу.

#include <iostream>
#include <iomanip>
int main()
{
	int results, kilometers_car, kilometers;
	std::cin >> kilometers_car;
	std::cin >> kilometers;
	results = (kilometers - 1) / kilometers_car +1;
	std::cout << results;


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