#include<iostream>
#include"stringclassproject.h"
using namespace std;
int main(){
	char arr[] = "ruveyde";
	MyString str(arr);
	str.display();
	cout << "lenght of string:" << str.length() << endl;
	char s[] = "ruveydee";
	str.copy(s);
	str.remove('e');
	const char a[] = "orman";
	str.concatenate(a);
	str.reverse();
	cout << "check charachter your entered:";
	if (str.contains('i'))
		cout << "this character is exist" << endl;
	else
		cout << "it is not exist!" << endl;
	char c[] = "vey";
	cout << "check character array:";
	if (str.contains(c))
		cout << "character array is exist" << endl;
	else
		cout << "character array is not exist!" << endl;
	
	



	return 0;

}