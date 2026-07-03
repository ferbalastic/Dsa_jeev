#include <bits/stdc++.h>
using namespace std;


int max_freq(vector<int>& nums,int k)
{
    //will take one element and make new array taking that distance of each from our element
    
    int n=nums.size();
    int e=0;
    int max_count=0;
    sort(nums.begin(),nums.end());
    //taking last elemnt as e
    for(int i =n;i>0;i--)
    {
        vector<int> new_array(nums.size(), INT_MAX);
        int d=k;
        int count=0;
        e = nums[i-1];
        //making new array which is our distance array
        for(int b=0;b<n;b++)
        {
            if((e-nums[b] >= 0))
            {
                new_array[b] = e - nums[b]; 
            }
            else{
                break;
            }
        }
        sort(new_array.begin(),new_array.end());
        //distributing k in the new array(distance array)
        for(int l=0;l<n;l++)
        {
            if(d>0)
            {
                if(d>=new_array[l])
                {
                    d=d-new_array[l];
                    new_array[l]=0;
                }

            }
        }
        //checking the count of zeroes in our new array to find frequency of our target element
        for(int c=0;c<n;c++)
        {
            if(new_array[c]==0)
            {
                count++;
            }
        }
        //updating max count
        if(count>max_count)
        {
            max_count=count;
        }

    }
    return max_count;
}
int main()
{
    
    int g=0;
    cout << "Enter the array size ";
    int n=0;
    cin >> n;
    vector<int> num(n);
    for(int i=0;i<n;i++)
    {
        cin >> num[i];
    }
    cout << "Enter value of k ";
    cin >> g;
    cout << "Max frequency will be " << max_freq(num,g);
    return 0;

}
