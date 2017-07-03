#include <stdio.h>
enum dataType {INT,FLOAT,DOUBLE };
void add(void* val1 , void* val2 ,void*result,enum dataType type){
	switch(type)
	{
		case INT:
			*(int*)result = *(int*)val1+*(int*)val2;
			break;
		case FLOAT:
			*(float*)result = *(float*)val1+*(float*)val2;
			break;
		case DOUBLE:
			*(double*)result = *(double*)val1+*(double*)val2;
			break;
	}

}

int main(){
	// INT data type
	int a =50;
	int b =500;
	int result;
	void*pa=&a;
	void*pb=&b;
	void*presult=&result;
	add(pa,pb,presult,INT);
	printf("Result is : %d \n",result);
	//FLOAT data Type
	float fa =50.5;
	float fb =500.66;
	float fresult;
	void*fpa=&fa;
	void*fpb=&fb;
	void*fpresult=&fresult;
	add(fpa,fpb,fpresult,FLOAT);
	printf("Result is : %f \n",fresult);


	//Double Data Type
	double da =50.663;
	double db =500.3368;
	double dresult;
	void*dpa=&da;
	void*dpb=&db;
	void*dpresult=&dresult;
	add(dpa,dpb,dpresult,DOUBLE);
	printf("Result is : %lf \n",dresult);
	return 0;
}
