//#pragma comment(linker,"/STACK:1024000000,1024000000")
//#pragma GCC optimize(2)
//#pragma GCC target ("sse4")
#include "bits/stdc++.h"
//typedef long long ll;
#define ull         unsigned long long
//#define int       __int128
#define int         long long
#define F           first
#define S           second
#define endl        "\n"//<<flush
#define eps         1e-6
#define base        131
#define lowbit(x)   (x&(-x))
#define db          double
#define PI          acos(-1.0)
#define inf         0x3f3f3f3f
#define MAXN        0x7fffffff
#define INF         0x3f3f3f3f3f3f3f3f
#define _for(i, x, y) for (int i = x; i <= y; i++)
#define for_(i, x, y) for (int i = x; i >= y; i--)
#define ferma(a,b)  pow(a%b,b-2)
#define mod(x)      (x%mod+mod)%mod
#define pb          push_back
#define decimal(x)  cout << fixed << setprecision(x);
#define all(x)      x.begin(),x.end()
#define rall(x)      x.rbegin(),x.rend()
#define memset(a,b) memset(a,b,sizeof(a));
#define IOS         ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
template<typename T> inline T fetch(){T ret;cin >> ret;return ret;}
template<typename T> inline vector<T> fetch_vec(int sz){vector<T> ret(sz);for(auto& it: ret)cin >> it;return ret;}
template<typename T> inline void makeUnique(vector<T>& v){sort(v.begin(), v.end());v.erase(unique(v.begin(), v.end()), v.end());}
template<typename T> inline T max_(T a,T b){if(a>b)return a;return b;}
template<typename T> inline T min_(T a,T b){if(a<b)return a;return b;}
int getVectorMax(vector<int> &vec){return *max_element(all(vec));}
int getVectorMin(vector<int> &vec){return *min_element(all(vec));}
void initVectorSame(vector<int> &vec,int num){for(auto &it:vec)it=num;}
void initVectorIncrement(vector<int> &vec,int num){for(auto &it:vec)it=num++;}
void file()
{
#ifdef ONLINE_JUDGE
#else
    freopen("/Users/cboy.yang/CLionProjects/codeforces/data/in.txt","r",stdin);
   // freopen("/Users/cboy.yang/CLionProjects/codeforces/data/out.txt","w",stdout);
#endif
}

signed main() {
    IOS;
    file();


    return 0;
}