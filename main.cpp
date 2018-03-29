#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "funcs.h"
using std::string;
using std::cin;
using std::cout;
using std::endl;


int main() {
	
	string line, ans, l;
	
	int numOpen, numClosed;
	
	while ( getline(cin,line) ) {
		int numTabs = numOpen - numClosed;
		string tabs = "";
		string cleanLine = removeLeadingSpaces(line);
		if (cleanLine[0] == '}') { numTabs -= 1; }
		
		for (int i = 0; i < numTabs; i++ ) {
			tabs += "\t";
		}
		ans += tabs + cleanLine + "\n";
		
		numOpen += countChar(line, '{');
		numClosed += countChar(line, '}');
	}
	
	cout << ans << endl;
	
	
}