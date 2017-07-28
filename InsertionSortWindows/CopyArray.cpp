#include <iostream>

#include "stdafx.h"
#include "CopyArray.h"

int CopyArray::cpArray(int *from , int *to, int ct)
{
	for(int i =0 ; i < ct ; i++)
	{
		*to++ = *from++;
	}
	return 0;
}
