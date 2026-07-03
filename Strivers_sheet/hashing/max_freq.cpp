#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Make a map and then iterate through the keys and find highest value and store the key in a variable and display that key and value 
    cout << "Enter length of array ";
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    //precompute
    map<int,int> mpp;
    for(int j=0;j<n;j++)
    {
        mpp[arr[j]]++;
    }
    int highest_value=0;
    int lowest_value=mpp.begin()->second;
    int lkey=mpp.begin()->first;
    int akey=0;
    for(auto it : mpp)
    {
        if(it.second>highest_value)
        {
            highest_value = it.second;
            akey=it.first;
        }
        if(it.second<lowest_value)
        {
            lowest_value=it.second;
            lkey=it.first;
        }

    }
    cout << "Most frequency is of element " << akey << " " << highest_value << "\n";
    cout << "Least frequent element is " << lkey << " "<<lowest_value;
    return 0;
}