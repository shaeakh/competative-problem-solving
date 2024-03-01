/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;


void bubbleSort(int a[],int b[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (b[j] > b[j + 1]) {
                swap(a[j], a[j + 1]);
                swap(b[j], b[j + 1]);
                swapped = true;
            }
        }
  
        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
}


void solve() {
    int t;
    cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int a[n],b[n];
        int j=0,min_r=0,min_q=0;
        for (int i = 0; i < n; i++){
            cin>>a[i]>>b[i];
            if(a[i]<=10 && min_q<b[i] ){
                j = i;
                min_q = b[i];
            }
        } 
        cout<<j+1<<endl;
    }
    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */