#include <iostream>
using namespace std;
float function(float num1);
float result,length,width,height,volume ,num1;
main(){
	cout<<"enter length:";
	cin>>length;
	cout<<"enter width:";
	cin>>width;
	cout<<"enter height:";
	cin>>height;
  volume=((length*height*width)/3);
  result=function(num1);
	if(result == 1 )
 {
   cout<<"from centimeter to cubic centimeter:"<<volume*1000000;
 }
 	if(result == 2 )
 {
   cout<<"from kilometer to cubic kilometer:"<<volume/1000000000;

  }
   	if(result == 3 )
  {
   cout<<"from millimeter to cubic millimeter:"<<volume*1000000000;
  }
}
float function(float num1)
{
	float number1;
	cout<<"enter number:";
	cin>>number1;
	if(number1 == 1)
  {
	return 1;
  }
	if(number1 == 2)
  {
	return 2;
  }
	if(number1 == 3 )
  {
	return 3;
   }
 }