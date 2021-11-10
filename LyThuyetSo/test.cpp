#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
	int reverse(int n){
		int temp;
		int res = 0;
		while( n != 0){
			temp = n % 10;
			res = res * 10 + temp;
			n /= 10;
		}
		return res;
	}	
};

int main(int argc, char const *argv[])
{
	int n ;
	Solution solution;
	cin>>n;
	cout << n << endl;
	int res = solution.reverse(n);
	cout << res << endl;
	return 0;
}