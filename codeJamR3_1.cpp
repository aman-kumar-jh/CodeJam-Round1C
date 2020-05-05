#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << "::" << x << endl;
#define debug2(x, y) cout << #x << "::" << x << " " << #y << "::" << y << endl;
#define debug3(x, y, z) cout << #x << "::" << x << " " << #y << "::" << y << " " << #z << "::" << z << endl;

#define For(i, a, b) for (int i = a; i < b; i++)

typedef long long ll;
const int mod = 1e9 + 7;
const int nax = 1e5 + 5;
typedef pair<int, int> pii;


void add(int a, int b){
    a  = (a + b)%mod;
    if(mod < 0) a+=mod;
}

void solve(){

    int r,c;
    string path;
    cin>>r>>c>>path;

    if(r == 0 && c == 0) {
        cout<<0<<endl;
        return;
    }

    //int n = path.length();
    int sum = r+c,ans = -1;
    int time = 0;
    for(char ch : path){
        if(ch == 'N') c++;
        if(ch == 'S') c--;
        if(ch == 'E') r++;
        if(ch == 'W') r--;
        time++;
        sum = abs(c) + abs(r);
        if(time >= sum) {
            ans = time;
            break;
        } 
    }

    if(ans == -1) cout<<"IMPOSSIBLE";
    else cout<<ans;
    cout<<endl;


}


int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    For(c,1,t+1){
        cout<<"case #"<<c<<": ";
        solve();

    }
    

    return 0;
}

