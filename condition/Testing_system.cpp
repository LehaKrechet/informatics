// В условии одной из задач на этом сайте написано: “Если данное четырехзначное число является симметричным, выведите 1, иначе выведите любое другое целое число”. Для проверки задачи используются заранее подготовленные примеры и правильные ответ на них

// Школьнику кажется, что он решил эту задачу, но тестирующая система почему-то не принимает его решение. Школьник думает, что это происходит оттого, что он выводит не то любое другое число, которое записано в правильных ответах.

// Напишите программу, которая по ответу, записанному в тестирующей системе и по ответу школьника определяет, верно ли школьник решил задачу.

// Входные данные
// Программа получает на вход два числа: ответ, записанный в тестирующей системе и ответ школьника.

// Выходные данные
// Программа должна вывести YES, если школьник дал верный ответ и NO в противном случае.

#include <iostream>
#include <iomanip>
int main()
{
	int children_answer, correct_answer;
	std::cin >> children_answer;
	std::cin >> correct_answer;
	if ((children_answer != 1 and correct_answer != 1) or (children_answer == 1 and correct_answer == 1)) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}


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