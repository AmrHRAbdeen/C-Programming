/*
Author : Amr Abdeen
About :One function to add various data types using structures.   
*/
#include <stdio.h>
//Uncomment if you're using VS
//#include <conio.h> 
enum dataType { INT, FLOAT, DOUBLE };
struct value
{
	int u_intValue;
	float u_floatValue;
	double u_doubleValue;
};
struct value add(struct value val1, struct value val2, enum dataType type)
{
	struct value result;
	switch (type) {
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
	struct value S1, S2, Result;
	// INT data type
	S1.u_intValue = 5000;
	S2.u_intValue = 8000;
	Result = add(S1, S2, INT);
	printf("Integer Addition result is : %d \n", Result.u_intValue);
	//FLOAT data type
	S1.u_floatValue = 50.2f;
	S2.u_floatValue = 67.5f;
	Result = add(S1, S2, FLOAT);
	printf("Float Addition result is : %f \n", Result.u_floatValue);
	//DOUBLE data Type
	S1.u_doubleValue = 300.22;
	S2.u_doubleValue = 805.12;
	Result = add(S1, S2, DOUBLE);
	printf("Double Addition result is : %lf \n", Result.u_doubleValue);
	// Uncomment if you're using VS
	//getchar();
	return 0;
}

