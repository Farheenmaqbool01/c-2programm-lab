
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<" enter the value of x";
    cin>> x;
    cout<<"enter the value of y";
    cin>> y;
	if (x>0 && y>0)
	{
		cout<<"the point line in ist quadrant"<< endl;
	}
	else if (x<0 && y>0)
	{
		cout<<"the point lie in II quadrant"<<endl;
	}
	else if(x<0 && y<0)
	{
		cout<<" the point lie in III quadrant"<<endl;
	}
	else if (x>0 && y<0)
	{
		cout<<" the point lie in IV quadrant"<<endl;
	}
	return 0;
}
