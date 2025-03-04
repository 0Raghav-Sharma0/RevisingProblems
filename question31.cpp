#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int temp = 0;
    while(n!=0){
        temp = temp +((n%10)*pow(2,i));
        i++;
        n=n/10;
    }
    cout<<temp;
}