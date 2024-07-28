#include <bits/stdc++.h>
using namespace std;

int main()
{
    //address of 2d array elements 
    int a[3][2] = { {1,2},{3,4},{5,6} };
    
    //a[0][0] = 100
    //a[0][1] = 100 + 4 = 104
    //a[1][0] = ?????????

    cout<<endl<<endl<<&a[0][0]<<" "<<&a[0][1]<<endl<<endl;
    
}
