#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "funcs.h"
using std::string;
using std::cin;
using std::cout;
using std::endl;


int main() {

	cout<<removeLeadingSpaces("   int x=0;")<<endl;

	cout<<countChar("abcd {} }}", '}')<<endl;

	string line, ans;			//Had a variable l that was not used. 

	int numOpen, numClosed;			//Num of open brackets and num of closed brackets
	
	while ( getline(cin,line) ) {			//Read the lines		
		int numTabs = numOpen - numClosed;	//Number of open brackets minus number of closed brackets results in the amount of tabs needed
		string tabs = "";

		string cleanLine = removeLeadingSpaces(line);	//Remove the spaces from each line
		if (cleanLine[0] == '}') { numTabs -= 1; }	//If the first char is a closing bracket then the number of tabs decreases by one
		

		for (int i = 0; i < numTabs; i++ ) {		//Add the number of tabs
			tabs += "\t";
		}

		ans += tabs + cleanLine + "\n";			//Add the tabs 
		
		numOpen += countChar(line, '{');		//Number of open brackets 
		numClosed += countChar(line, '}');		//Number of closed brackets
	}
	
	cout << ans << endl;
	
	
}
