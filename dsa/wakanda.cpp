#ifdef my

#include<iostream>
int main()
{
    int n,m;
    std::cin>>n>>m;

    int state[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            std::cin>>state[i][j];
        }
    }
   int path=0;
   bool reverse=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {  
            std::cout<<state[path][i]<<"->";
            if( path==0)
            {
                reverse=false;
            }
            if(path==n-1 && reverse==false)
            {
                path= n;
                reverse=true;
            }
            if(reverse)
            {
            path--;
            }
            else{
                path++;
            }

        }
    }
        return 0;
}
#endif

#ifdef wakan

#include<iostream>

int main()
{
    int n,m;
    std::cin>>n>>m;
      int state[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            std::cin>>state[i][j];
        }
    }


    for(int i=0;i<m;i++)
    {
        if(i%2==0)
        {
             for(int j=0;j<n;j++)
            {
                std::cout<<state[j][i]<<"->";
            }
        }else{
            for(int j=n-1;j>=0;j--)
                {
                std::cout<<state[j][i]<<"->";

                }
        }
    }
    return 0;


}

#endif 

#ifdef spiral

#include<iostream>
int main()
{
    int n,m;
    std::cin>>n>>m;
    int spiral[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            std::cin>>spiral[i][j];
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            std::cout<<spiral[i][j]<<"  ";
        }
        std::cout<<std::endl;
    }
    int row=0;
    int maxrow=n-1;
    int col=0;
    int maxcol=m-1;

    int total =n*m;
    int count=0;

    while(count<total)
    {

            //left wall botoom 
            if(count<total)
            {

                
                for(int j=row;j<=maxrow;j++) //0=i
                {
                std::cout<<spiral[j][col]<<std::endl;
                    
                    count++;
                }
            }
                col++;
            //bottom wall side side 
            if(count<total)
            {

                for(int j=col;j<=maxcol;j++)
                {
                std::cout<<spiral[maxrow][j]<<std::endl;
                
                    count++;

                }
            }
                maxrow--;

            //right wall upside
            if(count<total)
            {

                for(int j=maxrow;j>=row;j--) // 0
                {
                    std::cout<<spiral[j][maxcol]<<std::endl;
                    
                    count++;

                }
            }
                maxcol--;

            
            //up wall minus it
            if(count<total)
            {

                for(int j=maxcol;j>=col;j--)
                {
                    std::cout<<spiral[row][j]<<std::endl; //i == row
                    count++;

                }

            }
                row++;
    }
    
return 0;

}
#endif

#ifdef exit_point

#include<iostream>
int main()
{

    int n,m;
    std::cin>>n>>m;
    int point[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            std::cin>>point[i][j];
        }
    }
int i=0;int j=0;int dir=0;

while(true)
    {  
        dir=(dir+point[i][j])%4; // idr value in 

        if(dir==0) //east
        {
            j++;
        }
        if(dir==1) //south
        {
            i++;
        }
        if(dir==2) //west
        {
            j--;
        }
        if(dir==3) //north
        {
            i--;
        }
        //checking prupose for the loop must end

        if(i==n)
        {
            i--;
            break;
        }
        
         else if(j==m)
        {
            j--;
            break;
        }
        
       else if(i<0)
        {
            i++;
            break;
        }
        
       else if(j<0)
        {
            j++;
            break;
            
        }
        

    }   
// std::cout<<"("<<i<<","<<j<<")";
std::cout<<i<<std::endl<<j;
return 0;
}


#endif

#ifdef diagonal
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
    int next=0;
    int min =0;
    int max =n;
    int i=min,j=min;
    while(i<n && j<n)
    {
        
        std::cout<<array[i][j]<<" ";
        i++;
        j++;
        if(j==max)
        {
            min++;

            i=0;
            j=min;


        }

      
    }
    return 0;
    }

    
#endif