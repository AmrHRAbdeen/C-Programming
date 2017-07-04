/*
Author : Amr Abdeen
About :One function to add various data types using structures.
**Pros and Cons of this Method:
-->Pros:
	- Functionality:The best one;as it depends on passing by reference so the code size is smaller than the other two methods and 
			the process is fast.
-->Cons:
	-Not Found.
*/
#include <stdio.h>
enum dataType {INT,FLOAT,DOUBLE };
void add(void* val1 , void* val2 ,void*result,enum dataType type);
int main(){
	// INT data type
	int a =50;
	int b =500;
	int result;
	void* PTR_a= &a;
	void* PTR_b= &b;
	void* PTR_presult= &result;
	add(PTR_a,PTR_b,PTR_result,INT);
	printf("Result is : %d \n",result);
	//FLOAT data Type
	float float_a =50.5;
	float float_b =500.66;
	float float_result;
	void* FPTR_a= &float_a;
	void* FPTR_b= &float_b;
	void* FPTR_result= &float_result;
	add(FPTR_a,FPTR_b,FPTR_result,FLOAT);
	printf("Result is : %f \n",float_result);
	//Double Data Type
	double double_a =50.663;
	double double_b =500.3368;
	double double_result;
	void* DPTR_a=&double_a;
	void* DPTR_b=&double_b;
	void* DPTR_result=&double_result;
	add(DPTR_a,DPTR_b,DPTR_result,DOUBLE);
	printf("Result is : %lf \n",dresult);
	return 0;
}
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
