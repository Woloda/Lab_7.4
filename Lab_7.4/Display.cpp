#include "Goods.h"
#include "Display.h"

void Display(std::map<int, Goods> obj) { 	//функція перегляду колекції(контейнера)
	for (int i = 0; i < obj.size(); i++) {
		std::cout << "\n\nInformation about the "<< i + 1 <<" product: ";

		std::cout << "\n\nProduct name: "				<< obj[i].name;
		std::cout << "\nThe cost of the goods: "		<< obj[i].cost;
		std::cout << "\nQuantity of goods: "			<< obj[i].kilkist;
		std::cout << "\nUnit of measurement of goods: " << obj[i].mass;
	}
}

//функція здійснює вивід на екран інформації про товар, назва якого введена з клавіатури
void Display(std::map<int, Goods> obj, std::string name_g) {
	for (int i = 0; i < obj.size(); i++)
		if (obj[i].name == name_g) {
			std::cout << "\n\nInformation about the " << i + 1 << " product: ";

			std::cout << "\n\nProduct name: " << obj[i].name;
			std::cout << "\nThe cost of the goods: " << obj[i].cost;
			std::cout << "\nQuantity of goods: " << obj[i].kilkist;
			std::cout << "\nUnit of measurement of goods: " << obj[i].mass;
			return;
		}
}

//функція здійснює вивід на екран інформації про товари із заданого з клавіатури діапазону вартості
void Display(std::map<int, Goods> obj, int cost_start, int cost_finish) {
	for (int i = 0; i < obj.size(); i++) {
		if ((obj[i].cost >= cost_start) && (obj[i].cost <= cost_finish)) {
			std::cout << "\n\nInformation about the " << i + 1 << " product: ";

			std::cout << "\n\nProduct name: " << obj[i].name;
			std::cout << "\nThe cost of the goods: " << obj[i].cost;
			std::cout << "\nQuantity of goods: " << obj[i].kilkist;
			std::cout << "\nUnit of measurement of goods: " << obj[i].mass;
		}

		if (obj[i].cost > cost_finish)
			break;
	}
}