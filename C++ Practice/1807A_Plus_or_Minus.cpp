#include <bits/stdc++.h>
using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solution() {
	//Solve Here
    int a,b,c;
    cin>>a>>b>>c;

    if ((a+b)==c)
    {
        cout<<"+"<<endl;
    }
    else
    {
        cout<<"-"<<endl;
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}