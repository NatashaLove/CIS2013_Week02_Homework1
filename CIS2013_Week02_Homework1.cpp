//Purpose of the program is to use math expressions, do while loop and nested if/else.

#include <iostream>
using namespace std;

int main () {
	double num_1, num_2, num_3;
	char question = 'y';
	char operat;
	do
	{
		cout << "Give me two numbers \n";
		cin >> num_1;
		cin >> num_2;
		cout << "What calculations do you want to make?\n";
		cout << "Enter one of the operators: '+', '-', '*', '/' \n";
		cin >> operat;
		if(operat == '+') {
		cout << " If you add them you get " << num_1 + num_2 << endl;	
	
	} else {
		if(operat == '-') {
		cout << " If you subtract them you get " << num_1 - num_2 << endl;	
	
	} else {
		if(operat == '*') {
		cout << " If you multiply them you get " << num_1 * num_2 << endl;
	
	} else {
		if(operat == '/'){
		cout << " If you divide them you get " << num_1 / num_2 << endl;
	}
		
	}
	}
	}
	cout << "Do you want to make another calculation? ('y'/'n')" << endl;
		cin >> question;
	}
	while (question == 'y');

	cout << "Good bye..";
	
	
	
	
	
	
return 0;

}