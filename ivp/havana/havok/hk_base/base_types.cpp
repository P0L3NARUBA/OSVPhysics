#include <hk_base/base.h>


void hk_assert(bool test, const char* cond, int line, const char* file)
{
	if (test==false)
	{
		ivp_message("%s:%i: assertion failed : '%s'\n", file, line, cond);
		HK_BREAK;
	}
}

void hk_check(bool test, const char* cond, int line, const char* file)
{
	if (test==false)
	{
		ivp_message("%s(%i): check failed : '%s'\n", file, line, cond);
	}
}

