#include<bits/stdc++.h>
using namespace std;

int getValueOfOct(string oct){
    int sum = 0;
    int size = oct.size();

    // 245
    for(int i=0;i<size;i++){
        int temp = oct[i] - '0';
        sum = sum + pow(10,size-i-1) * temp;
    }
    return sum;
}

bool is_Valid_Ip(string ip){
    
    string s; 
    vector<string>oct;
    for(char c : ip){
        if(c!= '.'){
            s.push_back(c);
        }
        else {
            oct.push_back(s);
            s = "";
        }
    }

    oct.push_back(s);
    s = "";

    for(string x : oct){
        if(getValueOfOct(x)>255) return false;
    }
    return true;
}

int getIndex(string ip){
    string s ;
    int i=0; 
    while(ip[i]!='.') {s.push_back(ip[i]); i++;}
    cout<<s<<"\n";
    int value = getValueOfOct(s);
    if(value>=0 && value<=127) return 0;
    else if(value>=128 && value<192 ) return 1;
    else if(value>= 192 && value<224) return 2;
    else if(value>= 224 && value<=255) return 3;
    else return -1;
}

void solve(){
    int t; cin>>t;
    vector<string>ip;
    vector<int>index;
    string s; 
    while (t--)
    {
        cin>>s;
        ip.push_back(s);
    }

    for(string ip_ad : ip){
        if(is_Valid_Ip(ip_ad)){
            index.push_back( getIndex(ip_ad) );
        }
    }

    for(int x : index) cout<<x<<" ";
}

int main()
{
    solve();
    
    return 0;
}