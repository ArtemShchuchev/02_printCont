#include <iostream>
#include <set>
#include <vector>
#include <list>

void printHeader();

template <class �>
void print_container(const �& cont, const std::string& str)
{
	std::cout << str << ": ";
	// �� ����� �������, �.�. ������� "it < cont.cend();"
	// �� "<" �������� �� ��������� � set � list ))
	for (auto it = cont.cbegin(); it != cont.cend(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

}

int main()
{
	printHeader();

	std::set<std::string> test_set = { "one", "two", "three", "four" };
	print_container(test_set, "test_set"); // four one three two. ������� ������ ����� �������? :)
	// ������ ��� "set" - ��� �������������, ������������� (������-������ ������) ���������

	std::list<std::string> test_list = { "one", "two", "three", "four" };
	print_container(test_list, "test_list"); // one, two, three, four

	std::vector<std::string> test_vector = { "one", "two", "three", "four" };
	print_container(test_vector, "test_vector"); // one, two, three, four


	return 0;
}

// �������
// ��������� 
void printHeader()
{
	using namespace std;
	setlocale(LC_ALL, "Russian");   // ����� ������� �����
	system("chcp 1251");            // ����������� ��������� �������
	std::system("cls");
	cout << "������ 2. ������ ����������\n"
		 << "---------------------------\n" << endl;
}