#include "Goods.h"
#include "Create.h"


void Add(std::map<int, Goods>& obj) {	//функція для створення і добавлення колекції(контейнера)
	int pos = obj.size(), value1(0);
	double value2(0);
	Goods tmp;

	std::cout << "\n\nProduct name: ";
	std::cin >> tmp.name;

	do {
		std::cout << "The cost of the goods: ";
		std::cin >> value1;
	} while (value1 < 0);		//перевірка на коректність введених значень
	tmp.cost = value1;

	do {
		std::cout << "Quantity of goods: ";
		std::cin >> value1;
	} while (value1 < 0);		//перевірка на коректність введених значень
	tmp.kilkist = value1;

	do {
		std::cout << "Unit of measurement of goods: ";
		std::cin >> value2;
	} while (value2 < 0.0);		//перевірка на коректність введених значень
	tmp.mass = value2;

	obj.insert({ pos, tmp });	//втановлює в задану позицію "pos" колекції(контейнера) --- елемент "tmp"
}