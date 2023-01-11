#include<bits/stdc++.h>
using namespace std;
void Selection_sort(vector<int>&array,int n){
    int min;
    for (int i = 0; i < n-1; i++)
    {
        min = i ;
        for (int j = i+1; j < n; j++)
        {
            if (array[j]<array[min])
                min = j; 
        }
        if (min != i)
        {
            swap(array[i],array[min]);
        }   
    }
}
int main(){
    int n;
    cin >> n;
    vector<int>array(n);
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    Selection_sort(array,n);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}