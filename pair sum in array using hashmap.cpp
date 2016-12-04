#include<bits/stdc++.h>
using namespace std;
bool hashMap[100];
int main()
{
    int arr[] = {-3,1,-2,5,6};
    int sum = 4;
    int len = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+len);
    //for(int i=0;i<5;i++)cout<<arr[i]<<" ";
    cout<<endl;
    int mini = arr[0];
    //sum = sum - mini;
    for(int i = 0;i<len;i++)
    {
        arr[i] = arr[i]-mini;
        hashMap[arr[i]]=true;
    }
    for(int i=0;i<len;i++)
    {
        int foo = arr[i]+mini;
        int boo = sum - foo - mini;
        if(hashMap[boo])
        {
            cout<<foo<<" " <<sum-foo;
            break;
        }

    }
}
