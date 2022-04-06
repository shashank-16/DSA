#ifdef zero_one

#include<iostream>

bool finds(int *array,int value,int row,int col)
{
    for(int i =0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(*(array+i * col+j) == value)
                return true;

        }
    }
    return false;

}

int main(){
    int n;
    std::cin>>n;
    int array[2][n];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<n;j++)
        {
            std::cin>>array[i][j];
        }
    }

    // bool exist=finds((int*)array,5,2,n);
    // std::cout<<exist;

   int count=1;

while(count<=n)
{
    for(int i=1;i<2;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(array[i][j]>array[i][j+1])
            {
                //just for profit
                int temp=array[i][j+1];
                array[i][j+1]=array[i][j];
                array[i][j]=temp;
                //these is for wieght
                int tme=array[i-1][j+1];
                array[i-1][j+1]=array[i-1][j];
                array[i-1][j]= tme;
            }
        }
    }
    count++;

}
    int lbs ;
    std::cin>>lbs;
    int matrix[n+1][lbs+1];


    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<lbs+1;j++)
        {
            matrix[i][j]=0;
        }
    }


    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<lbs+1;j++)
        {
            if(i==0 || j == 0)
            {
                matrix[i][j]=0;
            }else{

                if(array[0][i-1] == j)  //same weight
                {
                    matrix[i][j]=array[1][i-1];
                }

                if(array[0][i-1]!= j)
                {
                    int val=array[0][i-1];
                    
                    if(finds((int*)array,val-j,2,n)) //try these 
                    {
                        matrix[i][j]=array[1][i-1]+matrix[i-1][j];
                    }

                    else if(j-val>=0) //backward value
                    {
                        if(matrix[i][j-1]>matrix[i-1][j-1])
                        {
                            matrix[i][j]=matrix[i][j-1];

                        }
                        else{
                            matrix[i][j]=matrix[i-1][j-1];
                        }
                    }else{
                        matrix[i][j]=matrix[i-1][j];
                    }
                }
            }
           
        }
    }


    for(int i=0;i<2;i++)
    {
        for(int j=0;j<n;j++)
        {
            std::cout<<array[i][j]<<"  ";
        }
        std::cout<<std::endl;
    }

     for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<lbs+1;j++)
        {
            std::cout<<matrix[i][j]<<" ";
        }
        std::cout<<std::endl;

    }

return 0;


}
#endif