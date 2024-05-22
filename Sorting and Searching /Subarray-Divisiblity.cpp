/*One and only one Lord Shiva is the Supreme*/
/*Jai bholenath*/
/*Shiva is with me.*/
/* Write Clean Code */
/* Skill Issue */
#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <cmath>
#define gc getchar_unlocked
#define minf INT_MIN
#define ff first
#define ss second
#define mpp make_pair
#define nl "\n"
#define pb push_back
#define sz(x) ((int)(x).size())
#define len(x) ((int)(x).length())
#define all(x) x.begin(), x.end()
#define orderedpair_set tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
#define msb(x) (31 - __builtin_clz(x))
#define msbll(x) (63 - __builtin_clzll(x)) 
#define NoSetbitsll(x) __builtin_popcountll(x)
#define setminus(x) memset(x, -1, sizeof(x))
#define setzero(x) memset(x, 0, sizeof(x))
#define mk(arr,n,type)  type *arr=new type[n];
// #define f(i, n) for (ll i = 0; i < n; i++)
#define fe(i,n) for (ll i = 1; i <=n; i++)
#define fos(i, s, n, k) for (i = s; i < n; i = i + k)
#define fom(i, s, n, k) for (i = s; i < n; i = i * k)
#define uniq(x) (x).erase(unique(all(x)), (x).end())
#define getunique(v) {sort(all(v)); v.erase(unique(all(v)), v.end());} // for Vector v
#define printPrecision(p, Value) cout << fixed << setprecision(p) << Value
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
typedef long long ll;
using uint = unsigned;
using ull = uint64_t;
typedef long double lld;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef vector<vpi> vvpi;
typedef vector<vpl> vvpl;
typedef vector<bool> vb;
void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }

//------------> TEMPLATES <-----------------//
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
// 1st


template <class T, class V> void _print(pair <T, V> p) { cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}"; }
template <class T> void _print(vector <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(set <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(deque <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(multiset <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T, class V> void _print(map <T, V> v) { cerr << "[ "; for (auto i : v) { _print(i); cerr << " "; } cerr << "]"; }
// int dx[]={1,0,0,-1,1,-1,1,-1}; 
// int dy[]={0,-1,1,0,1,-1,-1,1};  
// Sept - 2023
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll gcd(ll a, ll b) { if (b > a) { return gcd(b, a); } if (b == 0) { return a; } return gcd(b, a % b); }
// ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }
ll powm(ll a, ll b, ll mod) { ll res = 1; while (b > 0) { if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1; } return res; }  //power modulo m
void extendgcd(ll a, ll b, ll* v) { if (b == 0) { v[0] = 1; v[1] = 0; v[2] = a; return; } extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return; } //pass an array of size 3
ll mminv(ll a, ll b) { ll arr[3]; extendgcd(a, b, arr); return arr[0]; } //for non prime b
ll mminvprime(ll a, ll b) { if (a % b == 0) return -1; return powm(a, b - 2, b); } //for prime only
ll bexp(ll a, ll b, ll mod) {ll ans = 1; while (b) {if (b & 1)ans = (ans * 1LL * a) % mod; a = (a * 1LL * a) % mod; b >>= 1;} return ans;}
vector<ll> sieve(int n) { int* arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) { vect.push_back(i); for (int j = i * i; j <= n; j += i)arr[j] = 1; } return vect; }
vector<string> split(string s, char delimeter) { vector <string> tokens; stringstream check1(s); string intermediate; while (getline(check1, intermediate, delimeter)) { tokens.push_back(intermediate); } return tokens; }
string stringRemZeroes(string s) { string res; bool flag = true; for (int i = 0;i < s.length();i++) { if (s[i] == '0' && flag) continue; else { flag = false; res.push_back(s[i]); } } if (res.size() == 0) res = "0"; return res; }
void toLower(string& s) { transform(s.begin(), s.end(), s.begin(), ::tolower); }
void toUpper(string& s) { transform(s.begin(), s.end(), s.begin(), ::toupper); }
ll stringToNo(string s) { stringstream din(s); ll x; din >> x; return x; }
#define ch() getchar()
#define pc(x) putchar(x)

// int dx[] = {0 , 0 , 1 , -1};
// int dy[] = {1 , -1 , 0 , 0};

#define inf 1000000000000000000
const int MOD = 1e9 + 7;
const int mod = 998244353;
#define int long long


// a -> base , b -> exponent
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}


void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    unordered_map<int,int> prefixModCount;
    prefixModCount[0] = 1;
    // prefix sum is itself is divisible by n;

    int currentPrefixSum = 0;
    int subarrayCount = 0;

    for(int i = 0 ; i < n ; i++){
        currentPrefixSum += a[i];
        int modValue = ((currentPrefixSum % n) + n) % n;    // to handle the negative values.

        if(prefixModCount.find(modValue) != prefixModCount.end()){
            subarrayCount += prefixModCount[modValue];
        }
        prefixModCount[modValue]++;
    }

    cout << subarrayCount << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int testCases;
    // cin >> testCases;
    // while(testCases--)
    // {
        solve();
    // }
  return 0;
}

