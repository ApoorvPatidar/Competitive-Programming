// Hallouis Boxes

/* Input

        3 2
        1 2 3

        2 1
        3 1
Output

        YES
        NO */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (is_sorted(arr, arr + n) || k > 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}

// Line Trip

/*  Input

        3 7
        1 2 5

    Output

        4
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;
    while (t--)
    {

        int n, x;
        cin >> n >> x;

        int ans = 0;
        int prev = 0;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            ans = max(ans, arr[i] - prev);
            prev = arr[i];
        }
        ans = max(ans, 2 * (x - prev));
        cout << ans << endl;
    }
}

// Cover in Water

/*  Input

        7
        ##....#

        7
        ..#.#..

    Output

        2
        5

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    ;

    int n;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int total = 0, conse = 0, maxConsecutive = 0;
        for (char c : s)
        {
            if (c == '.')
            {
                total++;
                conse++;
            }
            if (c == '#')
            {
                maxConsecutive = max(maxConsecutive, conse);
                conse = 0;
            }
        }
        maxConsecutive = max(conse, maxConsecutive);
        if (total == 0)
            cout << 0 << endl;
        else if (maxConsecutive > 2)
            cout << 2 << endl;
        else
            cout << total << endl;
    }
}

// Game with Integers

/*      Input

            100
            999

        Ouput

            First
            Second
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;

        if (n % 3)
        {
            cout << "First" << endl;
        }
        else
        {
            cout << "Second" << endl;
        }
    }
}

// Jagged Swap

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                cout << "YES" << endl;
            }
            else if (arr[i - 1] == arr[i] || arr[i] == arr[i + 1])
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        { // Submitted answer
            cin >> arr[i];
        }

        if (arr[0] == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

// Doremy's Paint 3

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }

        if (mp.size() > 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (abs(mp.begin()->second - mp.rbegin()->second) <= 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}

// Don't Try to Count

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, l1, l2;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> l1 >> l2 >> s1 >> s2;
        int arr = -1;
        for (int i = 0; i <= 5; i++)
        {
            if (s1.find(s2) != -1)
            {
                arr = i;
                break;
            }
            s1 += s1;
        }
        cout << arr << endl;
    }
}

// How Much Does Daytona Cost?

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k; // k is common number
        cin >> n >> k;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == k)
            {
                cout << "YES" << endl;
                break;
            }
            if (i == n - 1)
            {
                cout << "NO" << endl;
            }
        }
    }
}

// Goals of Victory

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n - 1; i++)
        {
            cin >> arr[i];
        }

        int sum = 0;

        for (int i = 0; i < n - 1; i++)
        {
            sum += arr[i];
        }

        sum = sum * (-1);

        cout << sum << endl;
    }
}

// Target Practice

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char s;
        int ans = 0;
        int score[10][10] = {
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
            {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
            {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
            {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
            {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
            {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
            {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
            {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
            {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};

        int points = 0;

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> s;
                if (s == 'X')
                {
                    ans += score[i][j];
                }
            }
        }

        cout << ans << endl;
    }
}

// Ambitious Kid

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int mini = INT_MAX;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        mini = min(mini, abs(arr[i]));
    }

    cout << mini << endl;
}

// Sequence Game

#include <bits/stdc++.h>

using namespace std;

#define int long long

int32_t main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            if (i && arr.back() > x)
            {
                arr.push_back(1);
            }
            arr.push_back(x);
        }
        cout << arr.size() << "\n";
        for (int el : arr)
            cout << el << " ";
        cout << "\n";
    }
    return 0;
}


// United We Stand


#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n = 0;
    cin >> n;
    vector<int> inp;
    inp.assign(n, 0);
    for (auto &x : inp)
        cin >> x;
    sort(inp.begin(), inp.end());
    if (inp.back() == inp[0])
    {
        cout << "-1\n";
        return;
    }
    else
    {
        int it = 0;
        while (inp[it] == inp[0])
            it++;
        cout << it << " " << n - it << "\n";
        for (int j = 0; j < it; ++j)
            cout << inp[j] << " ";
        for (int j = it; j < n; ++j)
            cout << inp[j] << " ";
    }
}

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
        solve();
    return 0;
}


// Buttons 


#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int arr,b,c;
        cin >> arr >> b >> c;

        if( c % 2 == 0){         //* if(c & 1)    checks if c is odd if the rightmost bit is 1(when converted to decimal) then the number is odd
            if(arr>b){
                cout<<"First"<<endl;
            }else{
            cout<<"Second"<<endl;
            }
        }else{
            if(arr<b){
                cout<<"Second"<<endl;
            }else{
                cout<<"First"<<endl;
            }
        }
    }
}


// Array Coloring


#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);

        int sum = 0;
        
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        for(int i = 0; i<n; i++){
            sum += arr[i];
        }
        if(sum % 2 == 0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

  return 0;
}


// Desorting

#include <bits/stdc++.h>
using namespace std;
int main(){
 
    int t; 
    cin >> t;
 
    while (t--) {
 
        int n; 
        cin >> n;

        vector<int> nums(n);

        int diff = 1e9;            //sets the variable diff to the value 1,000,000,000

        bool sorted = true;

        for (int i = 0; i < n; i++) {
            cin >> nums[i];
            if (i > 0) {
                diff = min(nums[i] - nums[i - 1], diff);
                sorted &= nums[i] >= nums[i - 1];
            }
        }
        
        if (!sorted) {
            cout << 0 << endl;
            continue;
        }

        cout << diff/2 + 1 << endl;
    }
}


// Forbidden Integer

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> arr;
        int n, k, x;
        cin >> n >> k >> x;
        if (k == 1)
            cout << "NO" << endl;
        else if (x != 1)
        {
            cout << "YES" << endl;
            cout << n << endl;
            for (int i = 0; i < n; i++)
                cout << 1 << " ";
            cout << endl;
        }
        else if (n % 2 == 0)
        {
            cout << "YES" << endl;
            cout << n / 2 << endl;
            for (int i = 0; i < n / 2; i++)
                cout << 2 << " ";
            cout << endl;
        }
        else if (k == 2)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            cout << n / 2 << endl;
            for (int i = 0; i < n / 2 - 1; i++)
                cout << 2 << " ";
            cout << 3 << endl;
        }
    }
}


// Grasshopper on arr Line


#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    
    while(t--){
        int x,k;
        cin>>x>>k;

        if (x % k != 0)
        {
            std::cout << "1" << std::endl;
            std::cout << x << std::endl;
        }
        else
        {
            std::cout << "2" << std::endl;
            std::cout << "1 " << x - 1 << std::endl;
        }
    }
}


// Unit Array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int prod = 1, sum = 0;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            prod *= x;
            sum += x;
        }
        for (int i = 0;; ++i)
        {
            if (sum >= 0 && prod == 1)
            {
                cout << i << endl;
                return;
            }
            prod *= -1;
            sum += 2;
        }
    }
}


// Next Permutation


#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
void tc(){
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        cout<<n+1-x<<' ';
    }
    cout<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll t; cin>>t; while(t--)
        tc();
    return 0;
}


// Blank Space


#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int arr[n];

        int count = 0;
        int maxi = 0;

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        for(int i=0; i<n; i++){
            if(arr[i] == 0){
                count++;
                maxi = max(maxi, count); 
            }else{
                count = 0;
            }
        }
        cout<<maxi<<endl;        
    }
}


// Coins


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (!(n & 1))
            cout<<"yes"<<endl;
        else if (n & 1 && k & 1)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}


// Walking Master


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int arr, b, c, d;
        cin >> arr >> b >> c >> d;
        if (b <= d && c <= arr + d - b)
        {
            cout << (d - b) + (arr + d - b - c) << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }
}

// We Need the Zero


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int result = 0;
        for (int x : arr) {
            result ^= x;
        }

        if (result == 0) {
            cout << 0 << endl;
        } else {
            if (n % 2 == 1) {
                cout << result << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}


// Prepend and Append


#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int left = 0;
        int right = n-1;
        int final = n;

        while(s[left] != s[right] && final > 0){
            left++;
            right--;
            final -= 2;
        }
        cout<<final<<endl;
    }
}


// Serval and Mocha's Array


#include <bits/stdc++.h>
using namespace std;
 
string solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(__gcd(v[i],v[j])<=2) return "Yes";
        }
    }
    return "No";
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout<<solve();
        cout << endl;
    }
    //cout<<__gcd(143,1261);
    return 0;
}

// One and Two


#include<iostream>
#define LL long long
using namespace std;
int t,n,A[1005];
int main(){
	ios::sync_with_stdio(false);
	cin>>t;
	while(t--){
		cin>>n;
		int total=0,cnt=0;
		for(int i=1;i<=n;i++){
			cin>>A[i];
			if(A[i]%2==0)total++;
		}
		if(total==0)cout<<"1\n";
		else if(total%2)cout<<"-1\n";
		else{
			cnt=total/2;
			for(int i=1;i<=n;i++){
				if(A[i]%2==0){
					cnt--;
					if(cnt==0){
						cout<<i<<"\n";
						break;
	    			}	
				}				
			}
		}		
	}
	return 0;
}


// 


#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){

    }
}