#include<bits/stdc++.h>
using namespace std;
int bainary_scr(vector<int>array,int n,int target){

    int left,right,mid;
    left = 0 ;
    right = n-1;
    sort(array.begin(),array.end());
    while (left<=right)
    {
        mid = (left+right)/2;
        if(array[mid]==target){
            return mid;
        }
        if (array[mid]<target)
        {
            left = mid +1;
        }
        else
        {
            left= mid -1;
        }
        
    }
    return -1;
    
}
int main(){
    int n;
    cin >> n;
    vector<int>array(n);
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int target;
    cin >> target; 
    cout << "Index -==> " << bainary_scr(array,n,target);
    return 0;
}