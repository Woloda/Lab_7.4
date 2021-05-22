#pragma once
#include <map>		//Стандартна бібліотека шаблонів --- "map"(відображення)
#include <string>
#include <iostream>

struct Goods {	//дані про товар(у вигляді нового структурного типу даних)
	std::string name;	//назва товару
	int cost;			//вартість товару в гривнях
	int kilkist;		//кількість товару
	double mass;		//одиниця вимірювання --- наприклад в кг(кілограмах)			
};