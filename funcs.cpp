/*
Author: Leo Au-Yeung
Course: CSCI-136
Instructor: Mr. Zamansky
Assignment: Lab 8

In this lab, we will develop a small utility program that can fix indentation in C or C++ source code files. 
It will have some limitations, but it will be able to cover a significant subset of valid C++ programs.
*/

#include <iostream>
#include <cctype>
using std::string;
using std::cout;
using std::endl;


string removeLeadingSpaces(string line) {
	
	string ans = "";
	
	for (int i = 0; i < line.size(); i++ ) {
		if (!isspace(line[i])) {
			ans += line.substr(i);
			return ans;
		}
	}
	
}

int countChar(string line, char c) {
	
	int ans = 0;
	
	for (int i = 0; i < line.size(); i++ ) {
		char curr = (char) line[i];
		if (curr == c) {
			ans += 1;
		}
	}
	return ans;
}
