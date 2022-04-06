#include<iostream>
#include<stack>
int main()
{
    int n,k;
    std::cin>>n>>k;
    int arr[n];
    int arr1[n];
    std::stack<int> maze;


    for(int i=0;i<n;i++)
    {
        std::cin>>arr[i];
    }
    
    for(int i=n-1;i>=0 ;i--)
    {
        std::cout<<"_>";
        while(maze.size() > 0 && arr[i] > maze.top() )
        {
            maze.top();
        }

        if(maze.size() == 0)
        {
            arr1[i]=-1;
        }else{
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