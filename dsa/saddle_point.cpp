#include<iostream>
int main()
{
    int n,m;
    std::cin>>n;
    int array[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            std::cin>>array[i][j];
        }
    }
  
    int i=0;int j=0;
    int j_co=0;
    int i_co=0;

    int min=array[0][0];
    int max=array[0][0];

    while(j<n)
    {
      if(array[i][j]<min)
      {
          min=array[i][j];
          j_co =j;
      }
      j++;
    }
    while(i<n)
    {
        if(array[i][j_co]>max)
        {
            max=array[i][j_co];
        }
        if(i==n-1)
        {
            std::cout<<max;
        }
        i++;

    }
    return 0;
}