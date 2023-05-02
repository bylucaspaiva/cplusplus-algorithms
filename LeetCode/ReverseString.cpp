#pragma once
#include <string>
#include <stack>
#include <iostream>
class ReverseString
{
private:
	std::string input = "Hello Darkness My Old Friend";

public:
	void execute() {
		std::stack<char> st;
		for (int i = 0; i < input.size(); i++) {
			st.push(input[i]);
		}
		for (int i = 0; i < input.size(); i++) {
			input[i] = st.top();
			st.pop();
		}
		for (char c : input) {
			std::cout << c;
		}
		std::cout << '\n';
	}
};

