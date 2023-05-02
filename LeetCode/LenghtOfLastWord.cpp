#pragma once
#include <string>
#include <iostream>
using namespace std;

class LenghtOfLastWord
{
private:
	string input = "Hello World";

public:
	void Solution() {
		int i = 0;
		int n = input.size();
		int count = 0;

		while (i < n) {
			if (input[i] != ' ') {
				i++;
				count++;
			}
			else {
				while (input[i] == ' ') i++;

				if (i == n) {
					std::cout << count << '\n';
				}
				else {
					count = 0;
				}
			}
		}
		std::cout << count << '\n';
	}


};

