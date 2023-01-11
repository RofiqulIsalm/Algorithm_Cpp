#include<bits/stdc++.h>
using namespace std;
int Linear_scr(vector<int>array,int n, int target){
    for (int i = 0; i < n; i++)
    {
        if (array[i]==target)
            return i;  
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
    cout << "Index -==> " << Linear_scr(array,n,target);
    return 0;
}