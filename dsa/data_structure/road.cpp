#include<iostream>
int main()
{
    int n;
    std::cin>>n;
    int arr[n+1][2];
    for(int i=0;i<n+1;i++)
    {
        std::cin>>arr[i][0];
        std::cin>>arr[i][1];
    }
    int road =0;

    int origin_x=arr[0][0];
    int origin_y=arr[0][1];

    for(int i =1;i<n+1;i++)
    {
        int x=arr[i][0];
        int y=arr[i][1];

        if((origin_x == x) || (origin_y == y))
        {
            road--;
        }
         if((origin_x == x) && (origin_y == y) )
        {
            road--;
        }

    }
    std::cout<<road;
}