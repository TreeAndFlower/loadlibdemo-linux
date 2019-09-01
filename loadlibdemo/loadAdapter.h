#include <dlfcn.h>
#include <unistd.h>
#include "realfun.h"

typedef short (*PFUN_APIOne)(const string&);

typedef short (*PFUN_APITwo)(const int&);

typedef short (*PFUN_APIThree)(const string&);

typedef short (*PFUN_APIFour)(const string&);

typedef bool  (*PFUN_APIFive)();

typedef bool  (*PFUN_APISix)();

class loadLibDemo
{
public:

	void* libHandle;

	PFUN_APIOne pOne;
	PFUN_APITwo pTwo;
	PFUN_APIThree pThree;
	PFUN_APIFour pFour;
	PFUN_APIFive pFive;
	PFUN_APISix pSix;

public:
	loadLibDemo();
	~loadLibDemo();
	void display();
	short realLoadLib(const string& libPath);
};
