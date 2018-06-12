#include "stdafx.h"
#include <iostream>

using namespace std;

void frint(const char *str);


int main()
{
	frint("String for Probe");
	////getchar();
    return 0;
}

void frint(const char *str) {
	while (*str)
	{
		if (*str == ' ') printf("%c", '-');
		else printf("%c", *str);
		str++;

	}

}
