#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"enter sides:\n";
    cin>>a>>b>>c;
    if(a==b&&b==c)
    {
        cout<<"Equilateral\n";
    }
    else if(a==b||b==c||a==c) 
    {
        cout<<"Isosceles\n";
    }
    else
    {
        cout<<"Scalene\n";
    }

}