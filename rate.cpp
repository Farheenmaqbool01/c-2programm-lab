#include<iostream>
using namespace std;
int main()
{
	int pol_num;
	float reading ,rate;
	cout<<"1 carbon dioxide"<<endl;
	cout<<"2 hydrogen"<<endl;
	cout<<" 3 nitrogen oxide"<<endl;
	cout<<"4 nonemethane hydroxide"<<endl;
	cout<<"enter pollutant number";
	cin>>pol_num;
	cout<<"enter number of grams emitted per mile";
	cin>>rate;
	cout<<"enter the odometer reading";
	cin>>reading;
	switch(pol_num)
	{
		 case 1: 
		if (reading<=50000)
		{
			if(rate<=3.4)
			{
				cout<<"emmision are within permitted levels"<<endl;
			}
			else
			{
				cout<<"emmision exceed  the permitted levels of 3.4 grams per miles"<<endl;
			}
				
}
		
		  else
          {
              if(rate<=4.2)
              {
                  cout<<"emissions are wihin permitted levels"<<endl;
              }

              else
              {
                  cout<<"emmisions exceed the permitted level of 4.2 grams/miles"<<endl;
              }


          }
          break;


        case 2:
          if(reading<=50000)
          {
              if(rate<=0.31)
              {
                  cout<<"emissions are within permitted levels"<<endl;
              }

              else
              {
                  cout<<"emissions exceed the permitted level of 0.31 grams per miles"<<endl;
              }
          }

          else
          {
              if(rate<=0.39)
              {
                  cout<<"emissions are wihin permitted levels"<<endl;
              }

              else
              {
                  cout<<"emmisions exceed the permitted level of 0.39 grams/miles"<<endl;
              }




          }
          break;



        case 3:
          if(reading<=50000)
          {
              if(rate<=0.4)
              {
                  cout<<"emissions are within permitted levels"<<endl;
              }

              else
              {
                  cout<<"emissions exceed the permitted level of 0.4 grams per miles"<<endl;
              }
          }

          else
          {
              if(rate<=0.5)
              {
                  cout<<"emissions are wihin permitted levels"<<endl;
              }

              else
              {
                  cout<<"emmisions exceed the permitted level of 0.5 grams/miles"<<endl;
              }

}
          break;




        case 4:
          if(reading<=50000)
          {
              if(rate<=0.25)
              {
                  cout<<"emissions are within permitted levels"<<endl;
              }

              else
              {
                  cout<<"emissions exceed the permitted level of 0.25 grams per miles"<<endl;
              }
          }

          else
          {
              if(rate<=0.31)
              {
                  cout<<"emissions are wihin permitted levels"<<endl;
              }

              else
              {
                  cout<<"emmisions exceed the permitted level of 0.31 grams/miles"<<endl;
              }


          }
          break;   


    }     
    return 0;
}



		
	
	
	
	
