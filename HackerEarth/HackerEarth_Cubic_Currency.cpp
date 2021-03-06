/*~~~~~~~~~~~~~~~~~~*
 *                  *
 * $Dollar Akshay$  *
 *                  *
 *~~~~~~~~~~~~~~~~~~*/

//https://www.hackerearth.com/coc1/algorithm/cubic-currency/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <assert.h>
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

#define sp system("pause")
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define REP(i,n) FOR(i,0,(int)n-1)
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,1,sizeof(x))
#define SORT(a,n) sort(begin(a),begin(a)+n)
#define REV(a,n) reverse(begin(a),begin(a)+n)
#define ll long long
#define MOD 1000000007
#define gc getchar_unlocked
struct Edge{ int v, w; };

int cube[22];

ll int ways[22][9262];

void preCalc(){

	REP(i, 22)
		cube[i] = i*i*i;

	REP(i, 9262)
		ways[1][i] = 1;

	FOR(i, 2, 21){
		FOR(j, 0, 9261){
			if (j<cube[i])
				ways[i][j] = ways[i - 1][j];
			else
				ways[i][j] = ways[i - 1][j] + ways[i][j - cube[i]];
		}
	}
	
}

int main(){

	preCalc();
	int t, n;
	scanf("%d", &t);
	REP(tc, t){
		scanf("%d", &n);
		printf("%lld\n", ways[21][n]);
	}
	return 0;
}

//