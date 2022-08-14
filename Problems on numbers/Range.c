/* Accept range from user and display all numbers in between that range.
Input : 23 35
Output : 23 24 25 26 27 28 29 30 31 32 33 34 35
Input : 10 18
Output : 10 11 12 13 14 15 16 17 18
Input : 10 10
Output : 10
Input : -10 2
Output : -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2
Input : 90 18
Output : Invalid range
*/

#include<stdio.h>

void RangeDisplay(int iStart , int iEnd)
{
 	int iCnt=0;
 	if(iEnd<iStart)
 	{
 		printf("Invalid range\n");
 		return;
 	}
 	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
 	{
 		printf("%d ",iCnt);
 	}
}

int main()
{
 	int iValue1 = 0, iValue2 = 0;
 	printf("Enter starting point\n");
 	scanf("%d",&iValue1);
 	printf("Enter ending point\n");
 	scanf("%d",&iValue2);
 	RangeDisplay(iValue1, iValue2);
 	return 0;
} 