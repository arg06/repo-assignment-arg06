#include<iostream> 
using namespace std;

int main()
{
double temperatuur; 
cout <<"Uw temepartuur in graden Celcius"<< '\n';
cin >>temperatuur;
cout <<"Uw temperatuur is " <<temperatuur <<" graden Celsius."<< '\n';

double y = temperatuur * 9/5;
double z = y + 32; 

cout << "Uw temperatuur is " <<z <<" Fahrenheit"<< '\n';

return 0;
}