#include <stdio.h>
#include <math.h>
//#include <iostream>
//using namespace std:

int main(){
//	cout >> "Hello World!";
	printf("Hello World \n");
	int Sum;
	Sum = 12;
	printf("Sum = %d \n",Sum);
	int a = 20, b = 30;
	int res = Calc(a, b);
	printf("Result function = %d \n", res);
	printf("--------Build complete------------");
	return 0;
}

int Calc(int FirstCount, int SecondCount){
	int Sum = FirstCount + SecondCount;
	return Sum;
}
