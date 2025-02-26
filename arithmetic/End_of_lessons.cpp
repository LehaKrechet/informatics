// В некоторой школе занятия начинаются в 9:00. Продолжительность урока — 45 минут, после 1-го, 3-го, 5-го и т.д. уроков перемена 5 минут, а после 2-го, 4-го, 6-го и т.д. — 15 минут. Определите, когда заканчивается указанный урок.

// Входные данные
// Дан номер урока (число от 1 до 10).

// Выходные данные
// Выведите два целых числа: время окончания урока в часах и минутах. При решении этой задачи нельзя пользоваться циклами и условными инструкциями.

#include <iostream>
#include <iomanip>
int main()
{
	int number_lesson, hour, minut, minut_with_start;
	std::cin >> number_lesson;
	minut_with_start = 5 * (number_lesson / 2 ) + 15 * (number_lesson / 2 - (number_lesson+1)%2) + number_lesson * 45;
	hour = 9 + minut_with_start / 60;
	minut = minut_with_start % 60;
	std::cout << hour << " " << minut;


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