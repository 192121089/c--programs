#include<iostream>
using namespace std;
int main ()
{
	int salary,gross,hra,da;
	cout<<"enter the basic salary of the employee."<<endl;
	cin>>salary;
	if(salary<= 10000)
	{
		da=salary*20/100;
		hra=salary*80/100;
		gross=salary+da+hra;
	cout<<"the gross salary of the employee is"<<endl<<gross;
	}
if(salary<= 20000)
	{
		da=salary*25/100;
		hra=salary*90/100;
		gross=salary+da+hra;
	cout<<"the gross salary of employee is"<<endl<<gross;
	}
	else if(salary>20000)
	{
		da=salary*30/100;
		hra=salary*95/100;
		gross=salary+da+hra;
	cout<<"the gross salary of employee is"<<endl<<gross;
	}
	else
	{
		cout<<"you have no salary"<<endl;
	}
}