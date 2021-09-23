//============================================================================
// Name        : Hello.cpp
// Author      : Justin Dejesus
// Description : Hello World but printed multiple times.
//============================================================================

#include <iostream>
using namespace std;
int main()
{

	cout << "Please input the number of times you would like to repeat" ;
	 int x;
	   char chars = '*';
	   cin >> x;

	for ( int i = 0; i < x; ++i )
	cout << "Hello World\n" ;
	return 0;
}
