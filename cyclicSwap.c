#include <stdio.h>

/*Functions Prototype*/
void arrRead(void);
void cyclicSwap(void);
void printArr(void);
/*Global Variables*/
int arrValues[20];
int userArrSize;

int main(void)
{
	arrRead();	
	cyclicSwap();
	printArr();
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

void cyclicSwap(void)
{
	int temp;
	temp=arrValues[1];
	arrValues[1]=arrValues[0];
	arrValues[0]=arrValues[2];
	arrValues[2]=temp;
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
