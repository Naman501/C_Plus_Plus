#include<iostream>
#include<vector>
using namespace std;

void printSub(int index ,vector<int>& ds, int s , int sum , int arr[],int n){
    if(index==n){
        if(s==sum){
            for(auto it:ds){
                cout<<it<<" "<<endl;
            }
        }
        return;
    }
    ds.push_back(arr[index]);
    s+=arr[index];
    printSub(index+1,ds,s,sum,arr,n);   
ds.pop_back();
s-=arr[index];
// not take condition
    printSub(index+1,ds,s,sum,arr,n);
}

int main(){

    int arr[] = {1, 2, 1};
    int s,n=3;
    int sum =2;
    vector<int> ds;
    printSub(0,ds,sum,s,arr,n);
    return 0;
}