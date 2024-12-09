#include<iostream>
using namespace std;
int main()
{
    int arr[9]={1,2,3,4,5,6,7,8,9};
    cout<<"please enter no to find: ";
    int s;
    cin>>s;
    int left=0;
    int right=8;
    int temp=-1;
    while(left<=right){
        int mid=left+((right-left)/2);
        if  (arr[mid]==s){
            cout<<"element found at:"<<mid;
            temp=0;
            break;
            
        }
        else if (arr[mid]<s){
            left=mid+1;
        }
        else if(arr[mid]>s){
            right=mid-1;
        }

        }
    if (temp==-1)
    {
        cout<<"element notinlist";
    }
    
    
}