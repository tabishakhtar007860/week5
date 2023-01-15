#include <iostream>
using namespace std;
float taxCalculator(char type,float price);
char kind,type;
float price;
main()
{
    float result,vechilePrice;
   
    cout<<"enter vechile price befoe tax:";
    cin>>vechilePrice;
    result=taxCalculator(type,price);
    if(result == 1)
    {
        cout<<"final price of vechile of type "<<kind<<" after adding the tax"<<"is:"<<(vechilePrice-(vechilePrice*6/100));

    }
    if(result == 2)
    {
        
        cout<<"final price of vechile of type "<<kind<<" after adding the tax"<<"is:"<<(vechilePrice-(vechilePrice*8/100));
    }
    if(result == 3)
    {
        
        cout<<"final price of vechile of type "<<kind<<" after adding the tax"<<"is:"<<(vechilePrice-(vechilePrice*10/100));
    }
    if(result == 4)
    {
        
        cout<<"final price of vechile of type "<<kind<<" after adding the tax"<<"is:"<<(vechilePrice-(vechilePrice*12/100));
    }
        if(result == 5)
        {
            
        cout<<"final price of vechile of type "<<kind<<" after adding the tax"<<"is:"<<(vechilePrice-(vechilePrice*15/100));
        }



}
float taxCalculator(char type,float price)
{

   cout<< "enter vechile type in character (M for motorcycle)(E for electic)(S for sedan)(V for van)(T for truck):";
    cin>>kind;
cout<<"enter type of vechile by character";
if(kind == 'M')
{
    return 1;
}
if(kind == 'E')
{
    return 2;
}
if(kind == 'S')
{
    return 3;
}
if(kind == 'V')
{
    return 4;
}
if(kind == 'T')
{
    return 5;
}
}