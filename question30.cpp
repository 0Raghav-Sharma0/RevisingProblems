# include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int temp = n;
vector<int>arr;
while(temp!=0){
    arr.push_back((temp%2));
    temp=temp/2;
}

reverse(arr.begin(),arr.end());
for (int bit : arr) {
    cout << bit;
}
cout << endl;


}