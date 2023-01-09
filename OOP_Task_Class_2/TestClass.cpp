#include "TestClass.h"

TestClass::TestClass() {
	_data = new int[_index];
}

TestClass::~TestClass() {
	delete[] _data;
}

