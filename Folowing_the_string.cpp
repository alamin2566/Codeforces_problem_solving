#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define n '\n'
#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;

int main(){
   fast_tle;
   int t;
   cin>>t;
   while(t--){
    int x;
    cin>>x;
    int arr[x+3];
    int vis[x+3]={0};
    for(int i=0;i<x;i++){
        int x;
        cin>>x;
        char ch=vis[x]+'a';
        vis[x]++;
        cout<<ch;
    }
    cout<<endl;
   }
  }
