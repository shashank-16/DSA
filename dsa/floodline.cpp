#include<bits/stdc++.h>


void paths(int *maze,std::string path,int n,int m,int row,int col,bool *visited)
{

    if(row < 0 || col < 0 || row == n || col == m || *(maze+row*m+col) == 1 || *(visited+row*m+col)==1 )
    {
        return;
    }

    if( row == n-1 && col == m-1 )
    {
        std::cout<<path;
        return;

    }
    
    *(visited+row*m+col)=1;

paths(maze,path+"t",n,m,row-1,col,visited);       // -----|
    paths(maze,path+"l",n,m,row,col-1,visited);   // -----|
                                                  //      |----------same 
    paths(maze,path+"d",n,m,row+1,col,visited);  // ------|
    paths(maze,path+"r",n,m,row,col+1,visited);  // ------|
    *(visited+row*m+col)=0;



}


void rit(int *ma,int n,int m,int row ,int col)
{
    if(row==n)
    {

        return;
    }

    if(col == m-1)
    {
        col=0;
        row++;
    }
    // std::cout<<col;


    if((*(ma+row*m+col) == 1))
    {
        *(ma+row*m+col)=0;

        std::cout<<"found";
    }
    rit(ma,n,m,row,col+1);
    // rit(ma,n,m,row+1,col);
}


int main()
{
    using namespace std;
    int n,m;
    std::cin>>n>>m;

    int world[n][m];
    for(int i=0;i<n;i++)
    {
        for(int y=0;y<m;y++)
        {
            std::cin>>world[i][y];

        }
    }
    bool visit[n][m];

    paths((int*)world," ",n,m,0,0,(bool*)visit);
    // for(int i=0;i<n;i++)
    // {
    //     for(int y=0;y<m;y++)
    //     {
    //         std::cout<<world[i][y];

    //     }
    // }
    return 0;
}


