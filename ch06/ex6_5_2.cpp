#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef NDEBUG
	cerr << "Error: " << __FILE__ << endl;
	cerr << "in func: " << __func__ << endl;
	cerr << "at line: " << __LINE__ << endl;
	cerr << "at : " << __TIME__ << endl;
#endif // !NDEBUG

	return 0;
}