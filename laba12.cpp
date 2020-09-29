// laba12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <stdio.h>

int main()
{
	std::string s;
	int n = 0;
	bool t = false;
	getline(std::cin, s);
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ' && t) {
			n++;
			t = false;
		}
		if (s[i] != ' ' && !t)
			t = true;
		
		if (i == s.length() - 1 && s[i] != ' ')
			n++;		
	}
	printf("%d\n", n);
}
