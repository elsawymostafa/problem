# include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//typedef long long ll;
//const int N=1e5+7;

int main() {
   fast
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        bool f = true;
        int count=n%k;
        for (int i=0;i<m;i++)
        {
            int ai;
            cin>>ai;
            int div=n/k+1;
            if (ai>div)
                f= false;
            else if(ai==div)
                count--;
        }
    if (f&&count>=0)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    }
    return 0;
}
