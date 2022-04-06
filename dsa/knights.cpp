#include<bits/stdc++.h>
using namespace std ;

void display_maze(int *array,int n);


void knights_path(int *maze,int n,int row,int col,int level)
{
   

    if(row>=n || col >=n || row<0 || col <0 || *(maze+ row * n+col)>0 )
    {
        return;
    }

    if(level == n*n)
    {
       *(maze+row * n+col)=level;
        display_maze(maze,n);
        std::cout<<std::endl;
       *(maze+row * n+col)=0;
       
        // return ;
    }

   *(maze+row * n+col)=level;
    knights_path(maze,n,row-2,col+1,level+1);
    knights_path(maze,n,row-1,col+2,level+1);
    knights_path(maze,n,row+1,col+2,level+1);
    knights_path(maze,n,row+2,col+1,level+1);
    knights_path(maze,n,row+2,col-1,level+1);
    knights_path(maze,n,row+1,col-2,level+1);
    knights_path(maze,n,row-1,col-2,level+1);
    knights_path(maze,n,row-2,col-1,level+1);
   *(maze+row * n+col)=0;

}

void display_maze(int *array,int n)
{
    
    for(int i =0;i<n;i++)
    {
    for(int j=0;j<n;j++)
        {
            std::cout<<*(array+i * n+j)<<" ";

        }
        std::cout<<std::endl;
    }
    
}

int main()
{
    int n;
    std::cin>>n;
    int array[n][n];
    int x_cor;
    int y_cor;
    std::cin>>x_cor>>y_cor;
    
    for(int i =0;i<n;i++)
    {
    for(int j=0;j<n;j++)
        {
            array[i][j]=0;

        }
        std::cout<<std::endl;
    }


    knights_path((int*)array,n,x_cor,y_cor,1); 
    return 0;

}