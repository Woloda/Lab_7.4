#pragma once

//прототип функціїї "Display" --- функція перегляду колекції(контейнера)
void Display(std::map<int, Goods> obj);

/*перевантаження функціїї "Display"
функція здійснює вивід на екран інформації про товар, назва якого введена з клавіатури*/
void Display(std::map<int, Goods> obj, std::string name_g);

/*перевантаження функціїї "Display"
функція здійснює вивід на екран інформації про товари із заданого з клавіатури діапазону вартості*/
void Display(std::map<int, Goods> obj, int cost_start, int cost_finish);