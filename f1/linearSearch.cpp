#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v={1,14,23,21,65,45,53,867,6,32,967,34,213,14};
    int n;
    cout<<"enter element to search :";
    cin>>n;
    for(auto x:v){
        if(x==n){
            cout<<n<<" is found....!!!"<<endl;
            break;
        }
    }
    cout<<"number not found...!!!"<<endl;
    return 0;
}
