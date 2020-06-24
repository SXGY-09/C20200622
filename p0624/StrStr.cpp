#include "StrStr.h"
#include <iostream>
using namespace std;
char* StrStr::solve(char* haystack, char* needle)
{
	if (!haystack || !needle) {
		return nullptr;
	}
	if (*needle == '\0') {
		return haystack;
	}
	while (*haystack != '\0') {
		if (*haystack == *needle) {
			char* p1 = haystack + 1;
			char* p2 = needle + 1;
			while (*p1 == *p2 && *p1 != '\0' && *p2 != '\0') {
				p1++;
				p2++;
			}
			if (*p2 == '\0') {
				return haystack;
			}
		}
		haystack++;
	}
	return nullptr;
}

void StrStr::test()
{
	char x[] = "abcdefgh";
	char y[] = "cde";
	char* z = solve(x, y);
	while (z && *z!='\0') {
		cout << *z;
		z++;
	}
	cout << endl;
}
