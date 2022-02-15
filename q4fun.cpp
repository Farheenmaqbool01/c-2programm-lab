#include<iostream>
using namespace std;
int larger(int ,int);
int main()
{
	int d1,d2;
	int result;
	cout<<"enter the distance";
	cin>>d1;
	cout<<"enter the distance";
	cin>>d2;
	result=larger(d1,d2);
	cout<<"\n the greater distance:"<<result<<endl;
}
 int larger(int d1,int d2)
 {
 	int g;
 	if(d1>d2)
 	return d1;
 	else
 	return d2;
 }
