#include <stdio.h>
int main(int argc, char const *argv[])
{
	
	int c,i,nwhite,nother;
	int ndigits[10];
	nwhite = nother=0;
	for(i=0;i<10;++i) ndigits[i]=0;
	//EOF = End of file , you can end a file with CTRL+Z in windows ,followed by ENTER if necessary
	while((c=getchar()) != EOF)
	{
		if(c>= '0' && c <= '9')
			++ndigits[c-'0'];	
		else if (c==' ' || c=='\n' || c=='\t')
			++nwhite;
		else
			++nother;
	}	
	printf("digits= ");	
	for(i=0;i<10;++i)
		printf(" %d",ndigits[i]);
	printf(",white spaces: %d and Other %d \n",nwhite,nother );
	return 0;
}
