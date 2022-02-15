#include<iostream>
#include<math.h>
using namespace std;
float circarea(float);
int main()
{
	float r,ans;
	cout<<"enter the radius of circle";
	cin>>r;
	ans=circarea(r);
	cout<<"the area of circle:"<<ans<<endl;
	return 0;
}
 float circarea (float rads)
 {
 	float area;
 	area= 3.14*rads*rads;
 	return area;
 }
 
