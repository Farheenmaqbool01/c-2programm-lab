// calculate the BMI value.
# include<iostream>
using namespace std;
int main()
{
     float BMI,wt_lb,hl_in;
     int normal,overweight,obsese,underweight;
    cout<<"enter the weight in pounds";
    cin>> wt_lb;
    cout<<"enter the height in inches";
    cin>> hl_in;
    BMI= (700*wt_lb)/(hl_in*hl_in);
    cout<<"value of BMI is"<<BMI<<endl;
    if (BMI<18.5)
    {
    	cout<<"under weight"<<endl;
    }
	else if (BMI>18.5 && BMI<24.9)
	{
		cout<<"normal weight"<<endl;
	}
	else if(BMI>25.0 && BMI<29.9)
	{
		cout<<"over weight"<<endl;
	}
	else if(BMI>30.0)
	{
		cout<<"obsese weight"<<endl;
	}
	else
	{
		cout<<" wrong entry";
	}
	return 0;
}
    
