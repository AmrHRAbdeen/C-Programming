#include <stdio.h>

/*Functions Prototype*/
void arrRead(void);
void removeRepeatedValues(void);
void printArr(void);
/*Global Variables*/
int arrValues[20];
int userArrSize;

int main(void)
{
	arrRead();	
	removeRepeatedValues();
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

void removeRepeatedValues(void)
{
	int i , j;
	
	for(i=0;i<userArrSize;i++)
	{
		for(j=0;j<userArrSize;j++)
		{
			if (i==j)
				continue; /*To avoid comparing the number with itself*/
			
			if(arrValues[i]==arrValues[j]) /* If duplicated value is found*/
			{
				userArrSize--; /* Decrememnt array size by one */
				while(j<userArrSize) /*Move all array values*/
				{
					arrValues[j]=arrValues[j+1];
					j++;
				}
				j=0; /*Rescan From the begining*/
			}
			
		}
	}	
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
