#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
//	int count =0;
	int n=str.length();
	int dp[4];
	int count1=1;
	int count2=1;
	int count3=1;
	int count4=1;
	for(int i = 0; i <n; i++) { 
	if(str[i]=='A' && str[i]==str[i+1])
		count1++;
	}
	for(int i = 0; i <n; i++) { 
	if(str[i]=='C' && str[i]==str[i+1])
		count2++;
	}
	for(int i = 0; i <n; i++) { 
	if(str[i]=='G' && str[i]==str[i+1])
		count3++;
	}
	for(int i = 0; i <n; i++) { 
	if(str[i]=='T' && str[i]==str[i+1])
		count4++;
	}
	dp[0]=count1;
	dp[1]=count2;
	dp[2]=count3;
	dp[3]=count4;
	
	
	
		
		
	
 
	cout<<*max_element(dp, dp + 4); 
	return 0;
}
