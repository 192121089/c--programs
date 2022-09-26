#include <iostream>  
using namespace std;  
int main()  
{  
  int n,r,sum=0;
  cout<<"enter the number ::";
  cin>>n;
  if(isdigit(n))
  {
  	while(n!=0)
  	{
  		r=n%10;sum=sum+r;
  		n=n/10;
  	}
  	cout<<"the sum of the number is "<<sum<<"...\n";
  	if(n%sum==0){
  		cout<<"it is a harshad number.";
	  }
	  else{
	  	cout<<"not harshad number";
	  }
	  }
	  else{
	  	cout<<"invalid number...enter postive integer";
	  }
	  return 0;
  }