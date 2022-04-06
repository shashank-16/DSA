#include<iostream>
#include<math.h>
#define ll long long  
int main()
{
    ll int n;
    ll int k;
    std::cin>>n;
    std::cin>>k;

   ll  int arr[k+1][n+1];
    for(ll int i=0;i<k+1;i++)
		{
			for(ll int j=0;j<n+1;j++)
			{
				if(i == 0 || j ==0)
				{
					arr[i][j]=0;
				}
				else if(i==j && i!=0)
				{
					arr[i][j]=1;
				}
				else if(j<i)
				{
					arr[i][j]=arr[i-1][j];
				}
                
				else {
					ll int tem=abs(j-i);
					if(arr[i-1][tem]!=0)
					{
						arr[i][j]=1+arr[i-1][tem];
						
					}
                    else if(j>i)
                    {
						arr[i][j]= -1;

                    }
					else {
						arr[i][j]=0;
					}
					
				}
				
			}
		}
		
		// for(ll int i=0;i<k+1;i++)
		// {
		// 	for(ll int j=0;j<n+1;j++)
		// 	{
		// 		std::cout<<arr[i][j]<<" ";
		// 	}
		// std::cout<<std::endl;
		// }
		
		// if(arr[k][n]==0)
		// {
		// 	std::cout<<-1;
		// }
		// else {
			
			std::cout<<arr[k][n];
		// }
        return 0;
}
