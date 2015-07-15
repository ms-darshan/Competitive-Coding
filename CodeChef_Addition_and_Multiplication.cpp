/*~~~~~~~~~~~~~~~~~~*
 *                  *
 * $Dollar Akshay$  *
 *                  *
 *~~~~~~~~~~~~~~~~~~*/

//http://www.codechef.com/JULY15/problems/ADDMUL

#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <map>
#include <set>
#include <list>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

#define sp system("pause")
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define REP(i,n) FOR(i,0,(int)n-1)
#define pb(x) push_back(x)
#define mp(x) make_pair(x)
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,1,sizeof(x))
#define SORT(a,n) sort(begin(a),begin(a)+n)
#define REV(a,n) reverse(begin(a),begin(a)+n)
#define ll long long
#define MOD 1000000007

int a[100000];
ll int adds[100000], adde[100000];
ll int muls[100000], mule[100000];
ll int inis[100000], inie[100000];
int main(){

	int n, q;
	scanf("%d%d", &n,&q);
	REP(i, n){
		scanf("%d", &a[i]);
	}
	REP(i, q){
		int ty, l, r, v;
		scanf("%d%d%d", &ty, &l, &r);
		if (ty != 4)
			scanf("%d", &v);
		if (ty == 1){
			adds[l] += v;
			adde[r] += v;
		}
		else if (ty == 2){
			muls[l] += v;
			mule[r] += v;
		}
		else if (ty == 3){
			inis[l] += v;
			inie[r] += v;
		}
		else{

		}
	}
	return 0;
}

//