#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "funcs.h"
using std::string;
using std::cin;
using std::cout;
using std::endl;


int main() {
	
	string line, ans;			//Had a variable l that was not used. 
	
	int numOpen, numClosed;			//Num of open brackets and num of closed brackets
	
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
