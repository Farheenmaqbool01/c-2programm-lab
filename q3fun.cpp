#include<iostream>
using namespace std;
void zero_smaller(int &,int&);
int main()
{
	int x,y,result;
	cout<<"enter the first number";
	cin>>x;
	cout<<"enter the second number";
	cin>>y;
	zero_smaller(x,y);
	cout<<"the first number :"<<x<<endl;
	cout<<"second number:"<<y<<endl;
}
 void zero_smaller(int &a,int &b)
 {
 	if(a>b)
 	a=0;
 	else
 	b=0;
 }
