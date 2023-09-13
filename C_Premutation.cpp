/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

void sort1(vector<int> vect, int &n,int ara2[]){ // this is for vector. for an arry
int i,j,temp;                      //just pass this (int arr[], int n)
for(i=0;i<n;i++){
    bool flag = true;
    for(j=0;j<n-1;j++){
        if(ara[j]>ara[j+1]){
            temp=ara[j];
            ara[j]=ara[j+1];
            ara[j+1]=temp;
            temp=ara2[j];
            ara2[j]=ara2[j+1];
            ara2[j+1]=temp;
            flag = false;
        }
    }
    if(flag){
        break;
    }

}
for (int i = 0; i < n; i++) cout<<ara2[i]<<" ";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        int ara[n] ={0} ;
        int ara2[n];
        for (int i = 0; i < n; i++) ara2[i] = i+1;
        


        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                cin>>x;
                ara[x-1]=ara[x-1]+(j+1);
            }
        }
        sort1(ara,n,ara2);
        cout<<endl;
    }
    return 0;
}

