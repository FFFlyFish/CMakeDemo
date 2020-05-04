#include "func.h"
#include "addlib/addfunc.h"
#include "subdll/subfunc.h"

bool func1(int a, int b, int type, int& result)
{
   if(type == 1)
   {
   	result = add(a, b);
   	return true;
   }
   else if (type == 2)
   {
   	result = sub(a, b);
   	return true;
   }
   else if (type == 3)
   {
   	//result = mul(a, b);
   	return false;
   }
   else if (type == 4)
   {
   	//result = dev(a, b);
   	return false;
   }
   else 
   	return false;
}
