#pragma once
class MyString {
private:
	char* str;
public:
	MyString(char*);
	~MyString();
	int length();
	void display();
	void copy(const char*);
	void concatenate(const char*);
	void reverse();
	bool contains(char);
	bool contains(const char*);
	void remove(char);
	
};
