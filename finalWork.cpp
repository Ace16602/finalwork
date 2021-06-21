#include<bits/stdc++.h>
using namespace std;
int sum[9999][9999]={0};

int main(){
	int middle = 0;
	int sumTime = 0;
  	int n=5;
    int t[]={1,5,2,10,3};

    for(int i = 0;i < n;i++){
        sumTime += t[i];
    }
    middle = sumTime/2;
    for(int i = 1;i <= n;++i){
        for(int j = 1;j <= middle;++j){
            if(j - t[i] >= 0){
                sum[i][j] = max(sum[i-1][j], sum[i-1][j-t[i]]+t[i]);
            }else{
                sum[i][j] = sum[i-1][j];
            }
        }
    }
    cout << (sumTime-sum[n][middle]);
    return 0;
}
