#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>num = {6,5,4,3,1};
    int length = num.size();
    for(int i=0;i<length-1;i++){
        for(int j=i+1;j<length;j++){
            if(num[i]>num[j]){
                int temp = num[j];
                num[j] = num[i];
                num[i] = temp;
            }
        }
    }
    for (auto v:num){
        cout<<v<<endl;
    }
    return 0;
}