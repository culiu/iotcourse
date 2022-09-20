#include<iostream>
using namespace std;
int count(int a)
{   
    int sum=0;
    for(int i=0;i<a;i++)sum+=i;
    return sum;
}

int main()
{
    
    cout << count(10) << endl;
    return 0;
} 