#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>num = {6,5,4,3,1};
    int length = num.size();
    for(int i=0;i<length;i++){
        for(int j=0;j<length-i-1;j++){
            if(num[j]>num[j+1]){
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    for (auto v:num){
        cout<<v<<endl;
    }
    return 0;
}//nihao