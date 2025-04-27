#include<iostream>
#include"MyString.h"
using namespace std;

MyString::MyString(char* arr) {
	int size = 0;
	while (arr[size] != '\0') {
		size++;
	}
	str = new char[size+1];
	int i;
	for (i = 0; arr[i] != '\0'; i++) {
		str[i] = arr[i];
	}
	str[i] = '\0';
}
MyString::~MyString() {
	delete[] str;
}
int MyString::length()const {
	int count = 0;
	while (str[count] != '\0') {
		count++;
	}
	return count;
}
void MyString::display()const{
	cout << "Your current string is: ";
	for (int i = 0; str[i] != '\0'; i++) {
		cout << str[i];
	}
	cout << endl;
}
void MyString::copy(const char* arr) {
	int lenArr = 0;
	while (arr[lenArr] != '\0') lenArr++;
	delete[] str; 
	str = new char[lenArr + 1];
	int i;
	for (i = 0; arr[i] != '\0'; i++) {
		str[i] = arr[i];
	}
	str[i] = '\0';
	cout << "(After copy) ";
	display();
}
void MyString::concatenate(const char* p) {
	int lenStr = length();
	int lenP = 0;
	while (p[lenP] != '\0') lenP++;
	char* newStr = new char[lenStr + lenP + 1];
	for (int i = 0; i < lenStr; i++) {
		newStr[i] = str[i];
	}
	delete[] str; 
	str = newStr;
	int i = lenStr;
	int j = 0;
	while (p[j] != '\0') {
		str[i++] = p[j++];
	}
	str[i] = '\0'; 
	cout << "(After concatenate) ";
	display();
}
void MyString::reverse() {
	int len = length();
	for (int i = 0; i < len / 2; i++) {
		char temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
	cout << "(After reverse) ";
	display();
}
bool MyString::contain(char ch)const {
	int len = length();
	for (int i = 0; i < len; i++) {
		if (str[i] == ch)
			return true;
	}
	return false;
}
bool MyString::contains(const char* arr)const {
	int lenStr = length();
	int lenArr = 0;
	while (arr[lenArr] != '\0') lenArr++;
	for (int i = 0; i <= lenStr - lenArr; i++) {
		int j;
		for (j = 0; j < lenArr; j++) {
			if (str[i + j] != arr[j])
				break;
		}
		if (j == lenArr)
			return true;
	}
	return false;
}
void MyString::remove(char ch) {
	int i = 0, j = 0;
	while (str[i] != '\0') {
		if (str[i] != ch) {
			str[j++] = str[i];
		}
		i++;
	}
	str[j] = '\0';
	cout << "(After remove '" << ch << "') ";
	display();
}
int MyString::findPosition(char ch) const {
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ch) { 
			return i;   
		}
	}
	return -1;
}

