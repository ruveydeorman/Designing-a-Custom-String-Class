#include<iostream>
#include"stringclassproject.h"
using namespace std;
const int SIZE = 50;

MyString::MyString(char* arr) {
    str = new char[SIZE];
    int i = 0;
    for (; arr[i] != '\0' && i < SIZE - 1; i++) {
        str[i] = arr[i];
    }
    str[i] = '\0';
}
MyString::~MyString() {
    delete[] str;
}
int MyString::length() {
    int count = 0;
    while (str[count] != '\0' && count < SIZE) {
        count++;
    }
    return count;
}
void MyString::display() {
    cout << "Your current string is: ";
    for (int i = 0; str[i] != '\0'; i++) {
        cout << str[i];
    }
    cout << endl;
}
void MyString::copy(const char* arr) {
    int i = 0;
    for (; arr[i] != '\0' && i < SIZE - 1; i++) {
        str[i] = arr[i];
    }
    str[i] = '\0';
    cout << "(After copy) ";
    display();
}
void MyString::concatenate(const char* p) {
    int i = length();
    int j = 0;
    while (p[j] != '\0' && i < SIZE - 1) {
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
bool MyString::contains(char ch) {
    for (int i = 0; i < length(); i++) {
        if (str[i] == ch)
            return true;
    }
    return false;
}
bool MyString::contains(const char* arr) {
    int lenStr = length();
    int lenArr = 0;
    while (arr[lenArr] != '\0') lenArr++;

    for (int i = 0; i <= lenStr - lenArr; i++) {
        int j = 0;
        for (; j < lenArr; j++) {
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
