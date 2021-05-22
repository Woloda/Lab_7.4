#include "Goods.h"
#include "Sort.h"

void Sort(std::map<int, Goods>& obj) {		//функція сортування колекції(контейнера)
	for (int i = 0; i < obj.size() - 1; i++)
		for (int j = i; j < obj.size(); j++) {
			if (obj[i].cost > obj[j].cost) {
				Goods tmp;
				tmp = obj[i];
				obj.erase(i);				//очищає дані елемента який знаходиться на позиції "i"
				obj.insert({ i, obj[j] });	//втановлює в задану позицію "i" колекції(контейнера) --- елемент "obj[j]"
				obj.erase(j);				//очищає дані елемента на позиції "j"
				obj.insert({ j, tmp });		//втановлює в задану позицію "j" колекції(контейнера) --- елемент "tmp"
			}
		}
}