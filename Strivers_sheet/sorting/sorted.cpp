#include <bits/stdc++.h>
using namespace std;


void selection_sort(vector<int> arr, int n)
{
    //selection sort runs two loop
    //outer loops check where to start comparing from and inner loop checks rest elements if any is the minimum then swaps it to i
    
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int k=i;k<n;k++)
        {
            if(arr[k]<arr[min])
            {
                min =k;
            }
        }
        int temp = arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        
    }
    for(int c=0;c<n;c++)
        {
            cout << arr[c] << " ";
        }
}

void bubble_sort(vector<int> arr,int n)
{
    //
    for(int k=n;k>=0;k--)
    {
        for(int g=0;g<n-1;g++)
        {
            if(arr[g]>arr[g+1])
            {
                int temp=arr[g+1];
                arr[g+1]=arr[g];
                arr[g]=temp;
            }
        }
    }
    for(int m=0;m<n;m++)
    {
        cout << arr[m] << " ";
    }
}
int main()
{
    int l=0;
    
    cout << "Enter length of array ";
    cin >> l;
    vector<int> arr(l);
    cout << "Enter array ";
    for(int i =0;i<l;i++)
    {
    cin >> arr[i];
    }
    bubble_sort(arr,l);
    return 0;

}
