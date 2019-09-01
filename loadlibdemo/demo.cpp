#include <iostream>
#include "loadAdapter.h"

using namespace std;

loadLibDemo *m_loadlib;
int main()
{
	//test load demolib1
	m_loadlib = new loadLibDemo();

	cout <<"\nnow to load libdemolibone.so \n\n";
	m_loadlib->realLoadLib("libdemolibone.so");

	string str_1 = "hello libdemolibone.so";
	(m_loadlib->pOne)(str_1);

	(m_loadlib->pTwo)(2);

	(m_loadlib->pThree)("hello world ~~~");

	(m_loadlib->pFour)("!!!");

	(m_loadlib->pFive)();

	(m_loadlib->pSix)();

	delete m_loadlib;
	
	m_loadlib = new loadLibDemo();
	cout <<"\nnow to load libdemolibtwo.so \n\n";

	//test load demolib2
	m_loadlib->realLoadLib("libdemolibtwo.so");

	str_1 = "hello libdemolibtwo.so";
	(m_loadlib->pOne)(str_1);

	(m_loadlib->pTwo)(2);

	(m_loadlib->pThree)("HELLO WORLD ~~~");

	(m_loadlib->pFour)("~~~");

	(m_loadlib->pFive)();

	(m_loadlib->pSix)();

	delete m_loadlib;

	return 0;

}
