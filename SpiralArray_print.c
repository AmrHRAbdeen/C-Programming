int main(void)
{
  int arr[3][3]={1,2,3,4,5,6,7,8,9};
	int i=0,k=0,dir=0;
	printf("Hey");
	while(i<3)
	{
		if(dir==0 && i<3) /*Moving from R to L*/
		{
			for(k=0;k<3;k++)
			{
				printf("%d",arr[i][k]);
			}
			dir=1; i++;
			if(dir==1 && i<3) /*Moving from L to R*/
			{
			 for(k=2;k>=0;k--)
			 {
				 printf("%d",arr[i][k]);
			 }
			 dir=0; i++;			 
			}
		}
	
	}
}
