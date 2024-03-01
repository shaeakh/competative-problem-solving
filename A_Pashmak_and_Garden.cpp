/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x1,y1,x2,y2;
    int dx,dy;
    cin>>x1>>y1>>x2>>y2;
    if(x1-x2==0){
        dx=abs(y1-y2);
        if(x1+dx > 1000) cout<<"-1\n";
        else cout<<x1+dx<<" "<<y1<<" "<<x2+dx<<" "<<y2<<endl;
    }
    else if(y1-y2==0){
        dy=abs(x1-x2);
        if(y1+dx > 1000) cout<<"-1\n";
        else cout<<x1<<" "<<y1+dy<<" "<<x2<<" "<<y2+dy<<endl;
    }
    else if((y1-y2) == (x1-x2) || (y1-y2) == (-1)*(x1-x2) ){
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
    }
    else cout<<"-1\n";
    return 0;
}
/* problem link: */
