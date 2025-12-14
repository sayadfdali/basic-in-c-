#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    // if(a<b)
    // {
    //     cout << a << endl;
    // }
    // else
    // {
    //     cout << b << endl;
    // }
    // cout << min({3,5,6,23,452,35}) << endl;
    // cout << max({455,23543,45,23,4}) << endl;
    // int temp =a;
    // a = b;
    // b = temp;
    swap(a,b);
    cout << a << " " << b << endl;
    return 0;
}