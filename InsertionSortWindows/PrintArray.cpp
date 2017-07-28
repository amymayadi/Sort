#include "stdafx.h"
#include "PrintArray.h"
int PrintArray::printArray(int *A, int ct)
{
	std::cout<< "Array items are: ";
    for(int i =0; i < ct; i++)
	{   
 	    cout<< A[i] <<" ";
	}

    return 0;
}
