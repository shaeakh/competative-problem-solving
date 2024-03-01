/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

priority_queue< pair<int,int>, vector<pair<int,int>>>pq;

void solve() {
    int n,W;
    cin>>n>>W; 
    int x,y;
    long long int sum = 0;
    for(int i=0;i<W;i++)
    {
        cin>>x>>y;
        pq.push({y,x});
    }
    
    

    pair <int,int> p;
    while (W>=0 && !pq.empty())
    {
        p = pq.top();
        pq.pop();
        if(W < p.second ) continue;
        else{
            sum = sum + p.first;
            W = W - p.second;
        }
        
    }
    cout<<sum<<endl;

}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */