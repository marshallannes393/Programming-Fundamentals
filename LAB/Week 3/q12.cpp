#include<iostream>
using namespace std;
int main()
{
    //question 12
    int current;
    int rate;
    int sum;
    cout<<"enter the current world population";
    cin>>current;
    cout<<"enter the monthly birth rate";
    cin>>rate;
    rate=30*12*rate;
    sum=rate+current;
    cout<<"this is the total world population in 3 decades:"<<sum;
    

    return 0;
}
