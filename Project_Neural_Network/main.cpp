#include"Layer.h"
#include<iostream>
using namespace std;
int main()
{
	double input[5] = { 1,2,3,4,5 };
	Layer A(20,15,input);
for (int i=0;i<5;i++)
	cout << input[i];
	cout << A;
}