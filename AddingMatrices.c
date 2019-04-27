#include <stdio.h>

/*Functions Prototype*/
void arr1Read(void);
void arr2Read(void);
void addTwoMatries(void);
void printArr(int*);
/*Global Variables*/
int arr1Values[20];
int arr2Values[20];
int arr3Values[20];
int arr1Rows;
int arr1Columns;
int arr2Rows;
int arr2Columns;

int userArr1Size;
int userArr2Size;

int ErrorFlag=0;

int main(void)
{
	arr1Read();	
	arr2Read();	
	addTwoMatries();
	printArr(arr3Values);	
	return 0;
}

void arr1Read(void)
{
	int loopCounter=0;
	printf("Please,Enter Number of Rows: \n");
	scanf("%d",&arr1Rows);
		printf("Please,Enter Number of Columns: \n");
	scanf("%d",&arr1Columns);
	printf("Please, Enter array Elements: \n");
	userArr1Size=arr1Rows*arr1Columns;
	for(loopCounter=0;loopCounter<userArr1Size;loopCounter++)
	{
		scanf("%d",&arr1Values[loopCounter]);
	}	
}
void arr2Read(void)
{
	int loopCounter=0;
	printf("Please,Enter Number of Rows: \n");
	scanf("%d",&arr2Rows);
		printf("Please,Enter Number of Columns: \n");
	scanf("%d",&arr2Columns);
	userArr2Size=arr2Rows*arr2Columns;
	printf("Please, Enter array Elements: \n");
	for(loopCounter=0;loopCounter<userArr2Size;loopCounter++)
	{
		scanf("%d",&arr2Values[loopCounter]);
	}	
}

void addTwoMatries(void)
{
	int i;
	/*Validate Matrices Addition Rules*/
	if((arr1Rows == arr2Rows) && (arr1Columns == arr2Columns))
	{
		for(i=0;i<userArr1Size;i++)
		{
			arr3Values[i]=arr1Values[i]+arr2Values[i];
		}
	}
	else
	{
		ErrorFlag=1;
	}
	
}

void printArr(int * arr)
{
	int i;
	if(ErrorFlag==0)
	{
		printf("Array Elements are: \n");
		for(i=0;i<userArr1Size;i++)
		{
			printf("%d%c",arr[i],(i%3==2)? '\n' : '\t');
		}
	}
	else
	{
		printf("Wrong Dimensions\n");
	}	
}
