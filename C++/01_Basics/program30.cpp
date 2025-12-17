#include<iostream>
#include <vector>
using namespace std;

int partition(vector<int>&arr,int st,int end){
int index=st-1;
int pivotIndex=arr[end];
for(int j=0;j<end;j++){
    if(arr[j]<=pivotIndex){
        index++;
        swap(arr[j],arr[index]);
    }
}
index++;
swap(arr[end],arr[index]);
return index;
}

void quickSort(vector<int> &arr,int st,int end){
if(st<end){
  int pivotIndex=partition(arr,st,end);
  quickSort(arr,st,pivotIndex-1);//left half
  quickSort(arr,pivotIndex+1,end);//right half
}
}


int main(){
cout<<"Naman"<<endl;
vector<int> arr={5,2,6,4,1,3};
quickSort(arr,0,arr.size()-1);


for(int val:arr){
    cout<<val<<" "<<endl;
}

    return 0;

}