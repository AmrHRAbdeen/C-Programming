/*********************************************************/
/* @Author: Amr Abdeen
   @Description: C program to reverse array elements
   
/**********************************************************/
#include <stdio.h>

void reverseArray(char*name);

int main(void)
{

	char name[]="Amr";
	reverseArray(name);
	printf("Name is reversed: %s \n",name);
	
	return 0;
}

void reverseArray(char *arr)
{
	int len=0;
	int i=0;
	char*ptr1=arr;
	char*ptr2;
	char temp;
	
	printf("Calculate Length ...\n");
	while(arr[i] != '\0')
	{
		len++;
		i++;
	}
	ptr2=(ptr1+(len-1));
	printf("Length is Done and = %d !\n",len);
	
	for(i=0;i<(len/2);i++)
	{
		temp=*ptr1;
		*ptr1=*ptr2;
		*ptr2=temp;
		ptr1++;
		ptr2--;	
	}
	
}
