//string_name.length()  gives length of string
#include<iostream>
using namespace std;
#include<string>

bool is_vowel(char ch)
{
    ch=toupper(ch);
    return(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
}

int count_vowel(string str,int n)
{
    if(n==1)
    {
        return is_vowel(str[n-1]);
    }

    return count_vowel(str,n-1)+is_vowel(str[n-1]);
}

int main()
{
    string str="aimaabid";
    cout<<count_vowel(str,str.length())<<endl;
    return 0;
}
