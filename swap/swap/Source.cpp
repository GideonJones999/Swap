#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	string Jedi = "Luke", Sith = "Vader", space = "     ", temp;

	cout << "Enter a Jedi!" << endl;
	getline(cin, Jedi);

	cout << "Enter a Sith!" << endl;
	getline(cin, Sith);

	cout << "The Jedi is " << Jedi << space << "The Sith is " << Sith << endl << endl;
	cout << "Now they Switch!" << endl << endl;
	Jedi.swap(Sith);
	//temp = Jedi;
	//Jedi = Sith;
	//Sith = temp;
	cout << "The Jedi is " << Jedi << space << "The Sith is " << Sith << endl;


	system("PAUSE");
	return 0;
}

