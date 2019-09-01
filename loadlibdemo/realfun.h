#include <string>
#include <iostream>

using namespace std;

extern "C" {
	short one_fun_api(const string&);

	short two_fun_api(const int&);

	short three_fun_api(const string&);

	short four_fun_api(const string&);

	bool  five_fun_api();

	bool  six_fun_api();
}
