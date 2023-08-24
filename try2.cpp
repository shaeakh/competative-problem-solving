/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    
    priority_queue< pair<ll,ll>, vector<pair<ll,ll>>>pq;
    pq.push({5,6});
    pq.push({6,5});
    pq.push({4,6});
    pq.push({6,6});
    pq.push({5,3});
    pq.push({2,7});

    while (!pq.empty())
    {
        cout<<pq.top().first<<" "<<pq.top().second<<endl;
        pq.pop();
    }
    

}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */