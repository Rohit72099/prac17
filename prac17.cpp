#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int r=n%10;
	while(n>9){
		n=n/10;
		
	}
	cout<<n+r<<endl;
}
