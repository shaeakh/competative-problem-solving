#include <bits/stdc++.h>
using namespace std;
main() 
{ 
 int *a = new int[100];
 int *p = a;
 int k; 
 for (k = 0; k < 100; k++) 
 { 
 *p = k; 
 p++;
 cout << a[k] << endl; 
 } 
}