#pragma once
#include <iostream>

using namespace std;

/**
* \brief Класс function для представления объекта многочлен 3 степени
*/
class function { 
private:
	float a;
	float b;
	float c;
public:
	/**
	* \brief установление значения коэффициента a
        */
	void set_a(const float a);
	
	/**
	* \brief установление значения коэффициента b
        */
	void set_b(const float b);
	
	/**
	* \brief установление значения коэффициента c
        */
	void set_c(const float c);
	
	/**
	* \brief получение коэффициента a
        */
	float get_a() const;
	
	/**
	* \brief получение коэффициента b
        */
	float get_b() const;
	
	/**
	* \brief получение коэффициента c
        */
	float get_c() const;

	/**
	* \brief конструктор функции-многочлена
        */
	function(const float a = 1, const float b = 1, const float c = 1);
	
	/**
	* \brief получение производной функции
        */
	function derivative();
};

/**
* \brief перегруженный оператор вывода для функции
*/
ostream& operator<<(ostream& out, const function& function);

/**
* \brief Класс function для представления объекта "парабола"
*/
class parabola : public function { //класс парабола
public:
	parabola(const float a = 1, const float b = 0, const float c = 0);
};

/**
* \brief Класс function для представления объекта "линейная функция"
*/
class linear_function : public function { 
public:
	/**
	* \brief конструктор линейной функции
        */
	linear_function(const float a = 1, const float b = 0); 
};

/**
* \brief Класс function для представления объекта "константа"
*/
class constant : public function { 
public:
	/**
	* \brief конструктор константы
        */
	constant(const float a = 1);
};
