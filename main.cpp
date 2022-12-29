#include <iostream>
#include <set>
#include <vector>
#include <list>

void printHeader();

template <class С>
void print_container(const С& cont, const std::string& str)
{
	std::cout << str << ": ";
	// не много парился, т.к. пытался "it < cont.cend();"
	// но "<" оказался не определен в set и list ))
	for (auto it = cont.cbegin(); it != cont.cend(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

}

int main()
{
	printHeader();

	std::set<std::string> test_set = { "one", "two", "three", "four" };
	print_container(test_set, "test_set"); // four one three two. помните почему такой порядок? :)
	// потому что "set" - это ассоциативный, сортированный (красно-чёрное дерево) контейнер

	std::list<std::string> test_list = { "one", "two", "three", "four" };
	print_container(test_list, "test_list"); // one, two, three, four

	std::vector<std::string> test_vector = { "one", "two", "three", "four" };
	print_container(test_vector, "test_vector"); // one, two, three, four


	return 0;
}

// функции
// заголовок 
void printHeader()
{
	using namespace std;
	setlocale(LC_ALL, "Russian");   // задаём русский текст
	system("chcp 1251");            // настраиваем кодировку консоли
	std::system("cls");
	cout << "Задача 2. Печать контейнера\n"
		 << "---------------------------\n" << endl;
}