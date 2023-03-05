#include<iostream>
using namespace std;
int main() {
    char ch;
    cout<<"Enter Alphabet";
    cin>>ch;
    if(ch=='a'||ch=='i'||ch=='e'||ch=='o'|ch=='u')
    {
       cout<<"Vowel";
    }
 
    else if (ch=='A'||ch=='I'||ch=='O'|ch=='E'|ch=='U')
    {
       cout<<"Vowel";
    }
    else
    {
        cout<<"consonent";
    }

}