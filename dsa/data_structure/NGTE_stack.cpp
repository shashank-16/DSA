#include<bits/stdc++.h>
int main()
{
    int n;
    std::cin>>n;
    int arr[n];
    int arr1[n];

    for(int i=0;i<n;i++)
    {
        std::cin>>arr[i];
    }
    std::stack<int> maze;
    // for(int i=0;i<n;i++) // for previous element

    for(int i=n-1;i>=0;i--) // for next element
    {
        while(maze.size()>0 && arr[i] < maze.top()) // < sign means for smaller and > means for greater
        {
            maze.pop();
        }
        if(maze.size() <= 0)
        {
            arr1[i]=-1;
        }
        else{
            arr1[i]=maze.top();
        }
        maze.push(arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        std::cout<<arr1[i]<<" ";
    }
    return 0;

}

