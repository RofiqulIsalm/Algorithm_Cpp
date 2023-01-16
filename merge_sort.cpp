#include<bits/stdc++.h>
using namespace std;
void merged(vector<int>&array,int l, int m, int r){
    int size_1 = m-l+1;
    int size_2 = r-m;
    vector<int>temp_a1(size_1);
    vector<int>temp_a2(size_2);
    for (int i = 0; i < size_1; i++)
    {
        temp_a1[i] = array[l+i];
    }
    for (int i = 0; i < size_1; i++)
    {
        temp_a2[i] = array[m+1+i];
    }
    int i=0,j=0,k=l;
    while (i<size_1&&j<size_2)
    {
        if (temp_a1[i]<temp_a2[j])
        {
            array[k++]=temp_a1[i++];
        }else{
            array[k++]=temp_a2[j++];
        } 
    }
    while(i<size_1)
    {
        array[k++] = temp_a1[i++];
    }
    while(j<size_2){
        array[k++] = temp_a2[j++];
    }
    
    
    
}
void merge_sort(vector<int>&array, int l, int r){
    if (l<r)
    {
        int m = (l+r)/2;
        merge_sort(array,l,m);
        merge_sort(array,m+1,r);
        merged(array,l,m,r);
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
    merge_sort(array,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    
   return 0; 
}