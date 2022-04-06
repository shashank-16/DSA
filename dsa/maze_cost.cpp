#include<iostream>
#include<string>
#include<math.h>

int print_maze(long int *array,int n,int m, int row,int col,int cost,std::string path)
{
    int static min_cost=0;
   bool static first_time= 1;


    if(row== n-1 && col == m-1 )
    {
        int final_cost= cost+ *(array+row * m+col);
        // std::cout<<path<<"cost -->"<<final_cost<<std::endl;
        if(first_time == true)
        {
            min_cost= final_cost ;
            first_time=false ;
        }

         if(min_cost>final_cost)
        {
            min_cost = final_cost;
        }
        // std::cout<<"min_cost-->"<<min_cost<<std::endl;
        return min_cost;
    }

    if(row ==n || col ==m)
    {
        return  0 ;
    }
    

    print_maze(array,n,m,row,col+1,cost+ *(array+row * n +col) ,path+"r");
    print_maze(array,n,m,row+1,col,cost+ *(array+row * n+col) ,path+"d");
    return min_cost;


}
int main()
{
    int n,m;
    std::cin>>n>>m;
     int array[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            std::cin>>array[i][j];
        }

    }
int result;
 int temp[n][m];

   for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            temp[i][j]=0;
        }

    }
    int first=1;

    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=0;j--)
        {
            if(i == n-1 && j  == m-1 )
            {
                
               temp[i][j]=array[i][j];    LL
            }
            else if(i == n-1){
                int value;
                if(first)
                {
                    value=array[i][j]+array[i][j+1];
                    first=0;
                    temp[i][j]+=value;
                }
                else{
                    temp[i][j]=array[i][j]+temp[i][j+1];
                }
                
            }
            else if(j == n-1)
            {
                temp[i][j]=array[i][j]+temp[i+1][j];
            }
            
            else {
                if(temp[i+1][j]>= temp[i][j+1])
                {
                    temp[i][j]=array[i][j]+temp[i][j+1];
                }
                else 
                {
                    temp[i][j]=array[i][j]+temp[i+1][j];
                }
            }
        }
    }
    result= temp[0][0];

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
            
    //         std::cout<<temp[i][j]<< " ";
           
    //     }
    //     std::cout<<std::endl;

    // }
    // result=temp[0][0];

//  result=   print_maze((long int *)array,n,m,0,0,0," ");
    std::cout<<result;
    
    return 0;

}
