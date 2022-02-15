#include<iostream>
using namespace std;
int greater(int ,int);
int main()
{
	int d1,d2;
	int max;
	cout<<"enter the distance";
	cin>>d1;
	cout<<"enter the distance";
	cin>>d2;
	max = greater(d1,d2);
	cout<<"the greater distance:"<<ans<<endl;
}
 int greater(int d1,int d2)
 {
 	int g;
 	if(d1>d2)
 	g=d1;
 	else
 	g=d2;
 	return g;
 }
