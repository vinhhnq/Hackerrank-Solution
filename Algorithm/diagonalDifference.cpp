#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n;
	cin>>n;
	int matx[n][n];
	int sum1 = 0;
	int sum2 =0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin>>matx[i][j];
			if(i == j){
				sum1 = sum1 + matx[i][j];
			}
			if(i+j == n-1){
				sum2 = sum2 + matx[i][j];
			}
		}
	}
	cout<<abs(sum1 - sum2);
}