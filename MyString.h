#pragma once
class MyString {
private:
	char* str;
public:
	MyString(char*);
	~MyString();
	int length()const;
	void display()const;
	void copy(const char*);
	void concatenate(const char*);
	void reverse();
	bool contain(char)const;
	bool contains(const char*)const;
	void remove(char);
	int findPosition(char)const;
};