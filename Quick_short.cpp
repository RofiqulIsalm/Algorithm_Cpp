#include<bits/stdc++.h>
using namespace std;
void swap(int array[],int i,int j){
    int temp = array[i];
    array[i]=array[j];
    array[j] = temp;
}
int partition(int array[],int l,int r){
    int pivot = array[r];
    int i = l-1;
    for (int j = l; j < r; j++)
    {
        if(array[j]<pivot){
            i++;
            swap(array,i,j);
        }
    }
    swap(array,i+1,r);
    return i+1;
}
void quickSort(int array[],int l,int r){
    if (l<r)
    {
        int pi=partition(array,l,r);
        quickSort(array,l,pi-1);
        quickSort(array,pi+1,r);
    } 
}
int main(){
    int n,i;
    cin>>n;
    int array[n];
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    quickSort(array,0,n-1);
    for (i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    
    return 0;
}