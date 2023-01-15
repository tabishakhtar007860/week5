#include <iostream>
using namespace std;
int para(int number ); 
int number;
main(){
float volume,length,width,height;
    cout<<"enter volume:";
    cin>>volume;
    cout<<"enter length";
    cin>>length;
    cout<<"enter width";
    cin>>width;
    volume=(length*width*height)/3;
    int result;
    result=para(number);
    if(result==1)
    {cout<<"from centi to cubic meter: "<<(volume*1000000);
    }
    if(result==2){
        cout<<"from kilo to cubic kilometer:"<<(volume/100000000);
    }
    if(result==3){
     cout<<"from millimeter to cubic millimeter"<<(volume*1000000000);
         }
}
         int para(int number )
         {
             float numbers;
       
        cout<<"enter 1 for c to cm,2 foe k to km,3 for mm to cubic mm";
        cin>>numbers;
            if(numbers==1){
                
                return numbers;
            }
            if(numbers==2){
                return numbers;
            }
            if(numbers==3){
                return numbers;
            }






         }