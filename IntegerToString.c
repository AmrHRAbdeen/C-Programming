/***************************************************************************/
/* @Author: Amr Abdeen
/* @Description: A function to convert number to String
/***************************************************************************/

void intToStr(int num , char * str)
{
	int strLength=0;
	int i=0;
	while(num>0)
	{
		*str='0'+(num%10);
		str++;
		num/=10;
	}
	*(str)='\0';
}

/*the resulting String is stored in a reversed way so we use this function to make it represented like when it was a number*/

void revStr(char*str)
{
	int strLen=0;
	int i=0;
	int temp;
	for(;*(str+i) != '\0';i++)
	{
		strLen++;
	}
	printf("Str len = %d \n",strLen);
	
	for(i=0;*(str+i) != '\0' && (i <( strLen/2));i++)
	{
		temp=*(str+i);
		*(str+i)=*(str+(strLen-(1+i)));
		*(str+(strLen-(1+i)))=temp;
	}
}

/*Main Function*/
void main(void)
{
	char str[10];
	intToStr(1234,str);
	printf("String is %s \n",str);
}
