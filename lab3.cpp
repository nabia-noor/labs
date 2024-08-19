#include<iostream>
using namespace std;
int main(){
	char operation;
	float num1,num2;
	cout<<"enter any operation:+,_,*,\,sin,cos,tan:"<<endl;
	cin>>operation;
	cout<<"enter two operand:"<<endl;
	cin>>num1>>num2;
	switch (operation)
	{
		case '+':
		cout<<num1<<"+"<<num2<<"="<<num1+num2;
		break;
			case '-':
		cout<<num1<<"-"<<num2<<"="<<num1-num2;
		break;
			case '*':
		cout<<num1<<"*"<<num2<<"="<<num1*num2;
		break;
			case '/':
		cout<<num1<<"/"<<num2<<"="<<num1/num2;
		break;
		default:
			cout<<"Error!operator is not correct:"<<endl;
}
return 0;
}