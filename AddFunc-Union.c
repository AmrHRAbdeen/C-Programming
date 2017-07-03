/*
Author : Amr Abdeen
About :One function to add various data types using Unions.   
*/
#include <stdio.h>
#include <conio.h>
enum dataType { INT, FLOAT, DOUBLE };
union value
{
	int u_intValue;
	float u_floatValue;
	double u_doubleValue;
};
union value add(union value val1, union value val2, enum dataType type)
{
	union value result;
	switch (type) 
	{
		case INT:
		{
			result.u_intValue = val1.u_intValue + val2.u_intValue;
		}
		break;
		case FLOAT:
		{
			result.u_floatValue = val1.u_floatValue + val2.u_floatValue;
		}
		break;
		case DOUBLE:
		{
			result.u_doubleValue = val1.u_doubleValue + val2.u_doubleValue;
		}
		break;
	}
	return result;
}
int main() {
	union value U1, U2, Result;
	// INT data type
	U1.u_intValue = 5000;
	U2.u_intValue = 8000;
	Result = add(U1, U2, INT);
	printf("Integer Addition result is : %d \n", Result.u_intValue);
	//FLOAT data type
	U1.u_floatValue = 50.2f; // or (float)50.2
	U2.u_floatValue = 67.5f; // or (float)67.5
	Result = add(U1, U2, FLOAT);
	printf("Float Addition result is : %f \n", Result.u_floatValue);
	//DOUBLE data Type
	U1.u_doubleValue = 300.22;
	U2.u_doubleValue = 805.12;
	Result = add(U1, U2, DOUBLE);
	printf("Double Addition result is : %lf \n", Result.u_doubleValue);
	// Uncomment if you're using VS
	//getchar();
	return 0;
}

