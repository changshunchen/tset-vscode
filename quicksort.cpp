#include<iostream>
#include<vector>
using namespace std;
void quicksort(vector<int>& num,int left,int right){
    if(left>=right) return;
    int i = left,j=right;
    int pivot = num[i];
    while(i<j){
        while(i<j && num[j]>pivot){
        j--;
        }
        num[i] = num[j];
        while(i<j && num[i]<pivot){
        i++;
    }
    num[j] = num[i];
    }
    num[i] = pivot;
    quicksort(num,left,i-1);
    quicksort(num,i+1,right);
}
int main(){
    vector<int>num = {6,5,98,3,1,11,65,32};
    int length = num.size();
    int left =0,right =7;
    quicksort(num,left,right);
    for(auto v:num){
        cout<<v<<endl;
    }
}