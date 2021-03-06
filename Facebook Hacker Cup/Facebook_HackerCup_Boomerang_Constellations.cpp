/*~~~~~~~~~~~~~~~~~~*
 *                  *
 * $Dollar Akshay$  *
 *                  *
 *~~~~~~~~~~~~~~~~~~*/

//https://www.facebook.com/hackercup/problem/910374079035613/

#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

#define sp system("pause")
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define REP(i,n) FOR(i,0,(int)n-1)
#define DB(format,...) fprintf(stderr,format, ##__VA_ARGS__)
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,1,sizeof(x))
#define SORT(a,n) sort(begin(a),begin(a)+n)
#define REV(a,n) reverse(begin(a),begin(a)+n)
#define ll long long
#define pii pair<int,int>
#define MOD 1000000007


int x[100000], y[100000];

inline int distSQ(int a, int b) {

	return (x[a]-x[b])*(x[a]-x[b]) + (y[a]-y[b])*(y[a]-y[b]);

}

int main(){

	int t, n;
	FILE *fin = fopen("C:\\Users\\Akshay L Aradhya\\Downloads\\data.txt", "r");
	FILE *fout = fopen("C:\\Users\\Akshay L Aradhya\\Downloads\\result.txt", "w");

	fscanf(fin, "%d", &t);
	REP(tc, t){
		fscanf(fin, "%d", &n);
		REP(i, n)
			fscanf(fin, "%d %d", &x[i], &y[i]);
		printf("N = %d\n", n);
		ll int res = 0;
		FOR(i, 0, n-1) {
			if (i%100==0)
				printf("i=%d\n", i);
			FOR(j, 0, n-1) {
				FOR(k, 0, n-1) {
					if (i!=j && j!=k && k!=i && distSQ(i,j)==distSQ(j,k)) {
						res++;
					}
				}
			}
		}
		fprintf(fout, "Case #%d: %lld\n", tc+1, res/2);

	}
	fclose(fin);
	fclose(fout);
	return 0;
}

//Failed n^3 too slow .... FUCK