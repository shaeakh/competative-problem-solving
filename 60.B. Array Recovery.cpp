/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        bool flag = false;
        int d[n]={0};
        int a[n]={0};
        int m_in,ma_x;
        for(int i=0;i<n;i++) cin>>d[i];

        a[0]=d[0];

        for(int i=1;i<n;i++){
            m_in= a[i-1] - d[i];
            ma_x= a[i-1] + d[i];

            //printf("Min = %lld max = %lld\n",m_in,ma_x);

            if(m_in*ma_x >=0 && m_in != ma_x ){
                    cout<<"-1"<<endl;
                    flag = true;
                    break;
            }
            else{a[i]=ma_x;}
        }
        if(flag == true){ continue; }
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
/* problem link: https://codeforces.com/problemset/problem/1739/B */
