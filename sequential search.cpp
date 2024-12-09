#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<"please enter no to find: ";
    int s;
    cin>>s;
    int temp=-1;
    for(int i=0;i<=5;i++){
        if(arr[i]==s){
            cout<<"element found at:"<<i;
            temp=0;
            break;
        }
    }
        
    
    if (temp==-1){
        cout<<"element not in list";
    }
    

    
}
