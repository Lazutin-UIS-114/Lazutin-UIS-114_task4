#include "function.h"
#include <iostream>

function::function(const float a, const float b, const float c) { //конструктор
	this->a = a;
	this->b = b;
	this->c = c;
}

void function::set_a(const float a) {
	this->a = a;
}

void function::set_b(const float b) {
	this->b = b;
}

void function::set_c(const float c) {
	this->c = c;
}

float function::get_a() const {
	return a;
}

float function::get_b() const {
	return b;
}

float function::get_c() const {
	return c;
}

function function::derivative() {
	return function(0, 2 * a, b);
}

std::ostream& operator<<(std::ostream& out, const function& function) {
	if (function.get_a() != 0)
		out << function.get_a() << "x^2 ";
	if (function.get_b() != 0)
		out << "+ " << function.get_b() << "x ";
	out << "+ " << function.get_c() << std::endl;
	return out;
}

parabola::parabola(const float a, const float b, const float c)
	:function(a, b, c) {}


linear_function::linear_function(const float a, const float b)
	: function(0, a, b) {}

constant::constant(const float a)
	: function(0, 0, a) {}

