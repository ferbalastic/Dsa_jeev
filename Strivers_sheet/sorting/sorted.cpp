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
    //some improvments to be made here like boolean variable swap to check if swaps were made or not
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

vector<int> insertion_sort(vector<int>& nums,int n)

{
    for(int i =1;i<n;i++)
    {
        int key = nums[i];
        int j =i-1;

        while(j>=0&&nums[j]>key)
        {
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=key;
    }
    return nums;
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
    vector<int> new_array = insertion_sort(arr,l);
    for(int c=0;c<l;c++)
    {
        cout<<new_array[c]<<" ";
    }
    return 0;

}
