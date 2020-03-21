#include <string>
#include <iostream>
#include <vector>
using std::begin;
using std::end;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::vector;
int main() {
	int arr[] = { 1,2,3,4 };
	int* e = &arr[4];
	for (int* b = arr; b != e; ++b)
		cout << *b << endl;
	int ia[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* beg = begin(ia);
	int* last = end(ia);
	return 0;
}