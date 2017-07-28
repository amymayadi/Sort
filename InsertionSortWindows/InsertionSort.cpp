#include "stdafx.h"
#include "InsertionSort.h"
#include "PrintArray.h"
#include "CopyArray.h"
//added by myd ��̬��������������������
int InsertionSort::insSort(int *Arr, int ct)
{
   PrintArray pa;
   int n = pa.printArray((int *)Arr, ct);

   int *B = new int[ct];
   for(int i=0; i<ct; i++){
       int key = *Arr++;
   
	   if (i>0){
		   int j = i - 1;
		   int tmp = B[j];
		   while (j >= 0 && key < B[j]){
			   B[j + 1] = B[j];
			   j--;
		   }

		   B[j+1] = key;
	   }
	   else if (i == 0)
		   B[0] = key;
   }
   
   CopyArray ca;
   n = ca.cpArray((int *)B, (int *)Arr, ct);
   n = pa.printArray((int *)Arr, ct);

   delete []B;
   B = NULL;
   return 0; 
}
//added by E-Friend, ��ʱ������Ų������ݣ��ҵ����봦�����ݺ��ƣ�ԭ����������
void InsertSort(int a[], int n)
{
	int i, t, m;
	for (i = 1; i < n; i++)
	{
		t = a[i];
		for (m = i; m>0; m--)
		{
			if (t < a[m - 1])
				a[m] = a[m - 1];
			else
				break;
		}
		a[m] = t;
	}
}

int _tmain(int argc, _TCHAR* argv[]){
   int A[]={31, 41, 59, 26, 41, 58};
   int ct=sizeof(A)/sizeof(int);

   InsertionSort is;
   int n = is.insSort((int *)A, ct);
   //InsertSort(A, 6);

   system("pause");
   return 0;
}

