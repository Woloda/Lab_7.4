#include "Goods.h"
#include "Create.h"
#include "Display.h"
#include "Sort.h"


int main() {
	std::map<int, Goods> list;		//колекція --- що містить список товарів
	int tmp(0), cost_start(0), cost_finish(0);
	std::string name_g("");

	do {
		std::cout << "\n\n[1] Create or add to a collection";
		std::cout << "\n[2] View collection";
		std::cout << "\n[3] View information about the product by its name";
		std::cout << "\n[4] View product information by value range";
		std::cout << "\n\n[0] Exit";
		do
		{
			if (0 > tmp || tmp > 4)
				std::cout << "\n\nIncorrectly entered data";

			std::cout << "\n\nEnter the: ";
			std::cin >> tmp;
		} while (0 > tmp || tmp > 4);

		switch (tmp)
		{
		case 1:
			Add(list);
			Sort(list);
			break;
		case 2:
			Display(list);
			break;
		case 3:
			std::cout << "\n\nEnter a product name: ";
			std::cin >> name_g;

			Display(list, name_g);
			break;
		case 4:
			std::cout << "\n\nEnter the initial cost of the product: ";
			std::cin >> cost_start;
			std::cout << "\nEnter the final cost of the product: ";
			std::cin >> cost_finish;

			Display(list, cost_start, cost_finish);
		default:
			break;
		}
	} while (tmp != 0);

	return 0;
}