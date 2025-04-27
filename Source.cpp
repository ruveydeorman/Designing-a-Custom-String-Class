#include"MyString.h"
#include<iostream>
using namespace std;
int main() {
	char input[100];
	cout << "Enter a string: ";
	cin.getline(input, 100);
	MyString str(input);
	str
.display();
	cout << "lenght of string:" << str.length() << endl;
	char s[] = "ruveydee";
	str.copy(s);
	str.remove('e');
	const char a[] = "orman";
	str.concatenate(a);
	str.reverse();
	cout << "check charachter your entered:";
	if (str.contain('i'))
		cout << "this character is exist" << endl;
	else
		cout << "it is not exist!" << endl;
	char c[] = "vey";
	cout << "check character array:";
	if (str.contains(c))
		cout << "character array is exist" << endl;
	else
		cout << "character array is not exist!" << endl;
	int position = str.findPosition('r');
	if (position != -1) {
		cout << "Character '" << "' is at position: " << position << endl;
	}
	else {
		cout << "Character '" << "' is not found in the string." << endl;
	}
	return 0;
}