#include <stdio.h>

/*Functions Prototype*/
void arrRead(void);
void diffMaxInArr(void);
void printArr(void);
/*Global Variables*/
int arrValues[20];
int userArrSize;

int main(void)
{
	arrRead();	
	diffMaxInArr();
	return 0;
}

void arrRead(void)
{
	int loopCounter=0;
	printf("Please,Enter array size: \n");
	scanf("%d",&userArrSize);
	printf("Please, Enter array Elements: \n");
	for(loopCounter=0;loopCounter<userArrSize;loopCounter++)
	{
		scanf("%d",&arrValues[loopCounter]);
	}	
}

void diffMaxInArr(void)
{
	int i,j,temp1,temp2;
	int max=0;
	for(i=0;i<userArrSize;i++)
	{
		for(j=0;j<userArrSize;j++)
		{
			if ( i == j) continue;
			if(max<arrValues[i]-arrValues[j])
			{
				max=arrValues[i]-arrValues[j];
					temp1=i;
					temp2=j;
			}
		}
	}
	printf("Difference between %d and %d is %d and it's the max difference in the array\n",arrValues[temp1],arrValues[temp2],arrValues[temp1]-arrValues[temp2]);
}

void printArr(void)
{
	int i;
	printf("Array Elements are: \n");
	for(i=0;i<userArrSize;i++)
	{
		printf("%d \t",arrValues[i]);
	}
}
