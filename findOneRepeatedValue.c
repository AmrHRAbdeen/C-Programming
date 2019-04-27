#include <stdio.h>

/*Functions Prototype*/
void arrRead(void);
void findOneRepeatedValue(void);
void printArr(void);
/*Global Variables*/
int arrValues[20];
int userArrSize;

int main(void)
{
	arrRead();	
	findOneRepeatedValue();
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

void findOneRepeatedValue(void)
{
	int i,j,numCount=0,valueIndx;
	for(i=0;i<userArrSize;i++)
	{
		for(j=i+1;j<userArrSize;j++)
		{
			if (i==j){
				continue; /*Avoid comparing the number with itself*/
			}  
			if(arrValues[i]==arrValues[j])
			{
				userArrSize--;
				while(j<userArrSize)
				{
					arrValues[j]=arrValues[j+1];
					j++;
				}
				j=0;
				numCount++;
				valueIndx=i;
			}
		}
	}
	printf("The repeated value is %d and repeatition times = %d \n",arrValues[valueIndx],numCount);
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
