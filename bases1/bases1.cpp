#include <iostream>

#include <cmath>

#include <stdlib.h>

#include <cstdlib>

#include <cstring>

#include <string>

#include <sstream>

#include <conio.h>

#include <math.h>

constexpr auto PI = 3.14159265;

int main()
{
	int rr{ 1 };
	long int c{}, b{}, n{}, o{}, size{}, m{}, nn;
	std::string p{ };
	std::string pp{};
	std::string k{};
	std::string nnn{};
	rr = 1;
	do {


		std::cout << "enter number, the new base and the old base\n";
		std::cin >> n;
		std::cin >> b;
		std::cin >> o;
		nn = n;

		if (o != 10) {

			std::cout << "this converter only works from base 10 to others";
		}

		if (o == 10) {
			do {
				c = n % b;
				n = n / b;
				std::stringstream ss;
				ss << c;
				ss >> pp;
				if (c == 10) {
					pp = "a";
				}
				if (c == 11) {
					pp = "b";
				}
				if (c == 12) {
					pp = "c";
				}
				if (c == 13) {
					pp = "d";
				}
				if (c == 14) {
					pp = "e";
				}
				if (c == 15) {
					pp = "f";
				}
				if (c == 16) {
					pp = "g";
				}
				if (c == 17) {
					pp = "h";
				}
				if (c == 18) {
					pp = "i";
				}
				if (c == 19) {
					pp = "j";
				}
				p = p + pp;
			} while (n >= 1);

			size = sizeof(p);

			char str[sizeof(p) + 1];
			strcpy_s(str, p.c_str());
			_strrev(str);
			std::cout << "\n" << nn << " base " << o << ",  is " << str << " base " << b;
		}
		std::cout << "\n\n";

		system("pause");

		system("cls");
	} while (rr == 1);

}