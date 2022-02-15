#include<iostream>
using namespace std;
#include<math.h>
long hms_to_secs (int, int, int);
int main()
{
  int hr,min,sec;
  char ch;
  long totalsec;
  cout<<"enter the time in the format of(12:59:59)";
  cin>>hr>>ch>>min>>ch>>sec;
  totalsec = hms_to_secs(hr,min,sec);
  cout<<"total second:"<<totalsec;
   return 0;
}
    long hms_to_secs( int h ,int m , int s ) //function defination     
{
long ans; 
ans=(h*3600)+(m*60)+s;
return ans;
}
