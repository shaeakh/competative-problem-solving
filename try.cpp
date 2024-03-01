//بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
#define fr(v,p,q) for(int v=p;p<=q?v<=q:v>=q;p<=q?v+=1:v-=1)
#define shwp(p) for(auto &v:p){cout<<v.first<<" "<<v.second<<"\n";}
#define shw(v) for(auto &v1:v){cout<<v1<<" ";}nl;
#define UNIQUE(a) (a).erase(unique(all(a)),(a).end())
#define sci(x) scanf("%d", &x)
#define linf (1ll << 62)
#define inf (1 << 30)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << "\n"
#define all(p) (p).begin(),(p).end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define ll long long
#define vpii vector<pair<int,int> >
#define vpll vector<pair<ll,ll> >
#define vpic vector<pair<int,char> >

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        ll l = 0, r = n, llc = 1;
        ll a[n], b[n + 1], pro = 1, ans[n];
        b[0] = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            llc = lcm(llc, a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            pro *= a[i] % llc;
            b[i + 1] = pro;
        }
        // cout << llc << endl;
        string s;
        cin >> s;
        // ans[0] = b[r] % m;
        for (int i = 0; i < n; i++)
        {
            ans[i] = (b[r] / b[l]) % m;
            // cout << l << "lr" << r << " s" << s[i] << " ";
            if (s[i] == 'L') {
                l++;
            }
            else if (s[i] == 'R') {
                // cout << "sas" << endl;
                r--;
            }
        }
        // nl;
        // for (int i = 0; i < n + 1; i++)
        // {
        //     cout << b[i] << " ";
        // }
        // nl;
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        nl;

    }
}