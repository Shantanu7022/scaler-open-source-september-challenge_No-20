//Frequency of each element in an array

#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter array size="<<endl;
    int n; cin>>n;
    cout<<"Enter "<<n<<" Array element="<<endl;
    int arr[n]; 
    for(int i = 0; i < n;i++) cin>>arr[i];

    map<int,int> m;
    for(int i = 0; i<n;i++){
        m[arr[i]]++;

    }
    for(auto it: m){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    return 0;
}
