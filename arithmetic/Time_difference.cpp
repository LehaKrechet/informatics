// Даны значения двух моментов времени, принадлежащих одним и тем же суткам: часы, минуты и секунды для каждого из моментов времени. Известно, что второй момент времени наступил не раньше первого. Определите, сколько секунд прошло между двумя моментами времени.

// Входные данные
// Программа на вход получает три целых числа — часы, минуты, секунды, задающие первый момент времени и три целых числа, задающих второй момент времени.

// Выходные данные
// Выведите число секунд между этими моментами времени.

#include <iostream>
#include <iomanip>
int main()
{
	int hour_one, hour_two, minutes_one, minutes_two, second_one, second_two, second, results;
	std::cin >> hour_one;
	std::cin >> minutes_one;
	std::cin >> second_one;
	std::cin >> hour_two;
	std::cin >> minutes_two;
	std::cin >> second_two;
	results = (hour_two*3600 + minutes_two*60 + second_two) - (hour_one * 3600 + minutes_one * 60 + second_one);
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