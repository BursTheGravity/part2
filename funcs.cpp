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


string removeLeadingSpaces(string line) {		//Removes white space in the beginning
	
	string ans = "";				//Rename variable to something more specific
	
	for (int i = 0; i < line.size(); i++ ) {	//Nice for loop
		if (!isspace(line[i])) {		//If the value at the index is not a space then add it to the new string
			ans += line.substr(i);
			return ans;
		}
	}
	
}

int countChar(string line, char c) {			//Counts the occurences of char c
	
	int ans = 0;					//Rename variable to something more specific like counter
	
	for (int i = 0; i < line.size(); i++ ) {	
		char curr = (char) line[i];		//Use of type conversion
		if (curr == c) {			//If the value at the index of the string is the same as char c, then add one to the count
			ans += 1;
		}
	}
	return ans;
}
