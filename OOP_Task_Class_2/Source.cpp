#include<iostream>
#include<cstring>
class MyClass
{
	std::string str[4]{ "ak","bm","cd","db" };
public:
	// 1 �������� ������������ �� ���������
	MyClass() {
		std::cout << "creating a constructor" << '\n';
	}
	// 2 �������� ������������
	~MyClass() {
		std::cout << "\ndelete constructor" << '\n';
	}
	// ���������� ���������[]
	std::string& operator[](int index) {
		return str[index];
	}
	const std::string& getStr() const {
		return str[3];
	}

};



int main() {
	MyClass a;
	std::cout << a[1];

	return 0;
}