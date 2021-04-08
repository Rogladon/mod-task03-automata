#pragma once
#include <string>
#include <vector>

enum class State {
	OFF,
	WAIT,
	ACCEPT,
	CHECK,
	COOK
};

class Automata {
public:
	Automata(std::vector<std::pair<std::string, unsigned int>>& products);
	void on(); // включение автомата;
	void off(); // выключение автомата;
	void coin(unsigned int); // занесение денег на счёт пользователем;
	std::vector<std::pair<std::string, unsigned int>> getMenu(); // считывание меню с напитками и ценами для пользователя;
	State getState(); // считывание текущего состояния для пользователя;
	bool choice(unsigned int); // выбор напитка пользователем;
	bool check(unsigned int); // проверка наличия необходимой суммы;
	unsigned int cancel(); // отмена сеанса обслуживания пользователем;
	void cook(); // имитация процесса приготовления напитка;
	unsigned int finish(); // завершение обслуживания пользователя.
private:
	State state;
	std::vector<std::pair<std::string, unsigned int>> products;
	unsigned int cash;
};