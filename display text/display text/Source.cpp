/*
Marcus Basta 9 - 21 - 17 Period 4\
Display Text
Introduction to C++ Visual Studios
Printing out statements to Console from Code
*/

//Lirbraries
#include <iostream> // cout, cin, end1, <<, >>
#include <conio.h> // pause() fun access to _getch() and _kbhit()
// Namespaces
using namespace std;

// Functions
void pause() {
	    cout << "Press any key to continue . . .";
		while (!_kbhit());
	    _getch();
	    cout << '\n';
}
// MAIN
void main() {
	char H = 'H';
	char e = 'e';
	char l = 'l';
	char o = 'o';
	char W = 'W';
	char r = 'r';
	char d = 'd';
	char noel = 'l';
		// Display Text "Hello World"
		cout << "He" << noel << noel << "o wor" << noel << "d!" << endl;
	cout << H << e << l << l << o << " " << W << o << r << l << d << "!" << endl;
	pause();// pause() so we can see the text
	return; // ends program
}