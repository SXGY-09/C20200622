#include "Int2Roman.h"
#include <iostream>
string Int2Roman::solve(int num)
{
	string one[] = { "I","II","III","IV","V","VI","VII","VIII","IX" };
	string ten[] = { "X","XX","XXX","XL","L","LX","LXX","LXXX","XC" };
	string hundred[] = { "C","CC","CCC","CD","D","DC","DCC","DCCC","CM" };
	string thousand[] = { "M","MM","MMM" };
	string roman = "";
	if (num >= 1000) {
		roman += thousand[num / 1000 - 1]; 
		num = num % 1000;
	}
	if (num >= 100) {
		roman += hundred[num / 100 - 1]; 
		num = num % 100; 
	}
	if (num >= 10) { 
		roman += ten[num / 10 - 1];
		num = num % 10; 
	}
	if (num >= 1) {
		roman += one[num % 10 - 1];
	}
	return roman;
}

void Int2Roman::test()
{
	int num = 3059;
	string roman = solve(num);
	cout << roman << endl;
}
