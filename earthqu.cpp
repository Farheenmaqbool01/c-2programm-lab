#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the richter number";
	cin>>n;
	if (n<5.0)
	{
		cout<<"earthquake information is damage";
	}
	else if (n>=5.0 && n<5.5)
	{
		cout<<"earthquake information is 5 some damage";
	}
	else if (n>=5.5 && n<6.5)
	{
		cout<<"earthquake information is serious damage wall may fall or crack";
	}
	else if (n>=5.6 && n<7.5)
	{
		cout<<"earthquake information is disaster:houses and buildings may collapse";
	}
	else if (n>7.5)
	{
		cout<<"earthquake information is most building destroy ";
	}
	else
	{
		cout<<"not working";
	}
}
