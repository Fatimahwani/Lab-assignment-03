//string_name.length() gives length of string
#include<iostream>
#include<string>
using namespace std;

bool palindrome(string,int start,int end);


int main()
{
    int len;
    
    string str;
    cout<<"Enter the string"<<endl;
    cin>>str;
    len=str.length();
    int ans=palindrome(str,0,len-1);
    
    if(ans==0)
    {
        cout<<"NOT PALINDROME"<<endl;
    }

    else if(ans==1)
    {
        cout<<"PALINDROME"<<endl;
    }

    return 0;
}


bool palindrome(string str,int start,int end)
{
    
    if(start>=end)
    {
        return true;
    }

    else
    {
        return((str[start]==str[end])&&(palindrome(str,start+1,end-1)));
    }
       



}