

    /*bismillahir~rahmanir~rahim*/
    #include <bits/stdc++.h>
    using namespace std;
    void sort1(int ara[],int ara2[], int n);
    int main(){
        int s,n;
        cin>>s>>n;
        int x[n],y[n];
        for(int i=0;i<n;i++)cin>>x[i]>>y[i];
        sort1(x,y,n);

        for(int i=0;i<n;i++){
           // cout<<s<<" "<<x[i]<<" "<<endl;
            if(s>x[i]){
                s=s+y[i];
                //cout<<y[i];
        }
            else{
                cout<<"NO"<<endl;
                return 0;
            }
        }

        cout<<"YES"<<endl;
        return 0;
    }
    /* problem link: */
    void sort1(int ara[],int ara2[], int n){
    int i,j,temp;
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
    }
