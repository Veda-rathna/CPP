//Palindrome
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[1000];
    int i,len, flag=0;
    cin>>str;
    flag=0;
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]!=str[len-i-1]){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout<<"No";
    }
    else{
        cout<<"Yes";
    }
}