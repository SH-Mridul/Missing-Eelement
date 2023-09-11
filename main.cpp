#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    
    for(int i = 0; i<n; i++){
        int a;
        cin>>a;
        arr[i] = a;
    }
    
     
    int currDif = arr[0];
    for(int i = 1; i<n; i++){
        if(currDif != arr[i]-i){
            while(currDif<arr[i]-i){
                cout<<currDif+i<<endl;
                currDif++;
            }
        }
    }
    return 0;
}
