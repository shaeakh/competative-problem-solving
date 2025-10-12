#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt0=0,cnt1=0;
    string s;

    cin>> n>> s;

    for(int i=0; i<s.length(); i++){

        if(s[i]=='0') cnt0++;

        else cnt1++;
    }

    cout<<abs(cnt0-cnt1)<<endl;

    return 0;
}