#include <iostream>
using namespace std;

class String
{
	char* data;
	int size;
	int getStringLength(const char* str);
	char* stringCopy(char* des, const char* src);
	bool isValidIndex(int index) const;
	int numLength(long long int num);
public:
	friend ostream& operator << (ostream& out, const String& s);
	friend istream& operator>>(istream& in, String& s);
	friend String operator +(const char* c, const String& ref);
	friend String operator +(const char c, const String& ref);
	friend String& operator+(const String& s, const int a);
	String();
	//String& operator +(const int a);
	String(const char c);
	String(const char* c);
	String(const String& ref);
	void resize(int newSize);
	int getLength() const;
	void input();
	~String();
    char& at(const int index);
	const char& at(const int index) const;
	bool isEmpty() const;
	int getSize() const;
	void display() const;
	void makeUpper();
	void makeLower();
	void reverse();
	void trimLeft();
	void trimRight();
	void trim();
	int compareString(const String& s2)const;
	void remove(const int index, const  int count = 1);
	String concatenate(const String& s2)const;
	void concatEqual(const String& s2);
	void setNumber(const long long int num);
	float convertTofloat() const;
	String left(const int count);
	String right(const int count);
	long long int convertToInteger()const;
	int find(String* subStr, int start = 0);
	String operator+(const String& ref);
	void operator+=(const String& ref);
	String operator =(const String& s2);
	int operator==(const String& s2)const;
	bool operator !=(const String& s2)const;
	bool operator!();
	String& operator++();
	String operator++(int);
	operator int();
	bool operator>(const String& s2)const;
	char& operator[](const int index);
};
