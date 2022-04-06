//lesson of these always do three largest sum and reversing loop might help sometime but not always and most important trying change orientation of loop with i to j and j to i think twice;


#include<iostream>
#include<math.h>

void goldmine_fun(int *array,int row ,int col,int cost,int n,int m)
{
    // std::cout<<"asda"<<std::endl;
    static int profit=0;

    if(row == n || row <=-1)
    {
        return ;
    }
    
    if( col== m-1 )
    {
        cost+= *(array+row * m+col);

     if(profit<cost)
        {
            profit= cost;

        }   
        std::cout<<profit<<std::endl;
        return;
    }
        
    
    goldmine_fun(array,row-1,col+1,*(array+row * m+col)+cost,n,m);
    goldmine_fun(array,row,col+1,*(array+row * m+col)+cost,n,m);
    goldmine_fun(array,row+1,col+1,*(array+row * m+col)+cost,n,m);

    // return profit;

}



int main()
{
    int n,m;
    std::cin>>n>>m;
    int array[n][m];
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<m;j++) 
        {
            std::cin>>array[i][j];
        }
    }

    int temp[n][m];
     for(int i =0;i<n;i++)
    {
        for(int j=0;j<m;j++) 
        {
            temp[i][j]=0;
        }
    }

     for(int i =m-1;i>=0;i--)
    {
        for(int j=n-1;j >=0;j--) 
        {
            if(i == m-1) //columes 
            {
                temp[j][i]=array[j][i];
            }
            else if(i+1 <= m-1 && (j+1 <= n-1 && j-1 >=0))
            {
                if((temp[j][i+1] >= temp[j-1][j+1])  && (temp[j][i+1] >= temp[j+1][i+1]) ){
                    temp[j][i]=array[j][i]+temp[j][i+1];
                }
                 if((temp[j-1][i+1] >= temp[j+1][i+1]) && (temp[j-1][i+1] >= temp[j][i+1]))
                {
                    temp[j][i]=array[j][i]+temp[j-1][i+1];

                }
                 if((temp[j+1][i+1] >= temp[j-1][i+1]) && (temp[j+1][i+1] >= temp[j][i+1])){
                
                    temp[j][i]=array[j][i]+temp[j+1][i+1];
                }

            }
            else
            {
                if(j == 0)
                {
                    if(temp[j][i+1]>=temp[j+1][i+1])
                    {
                        temp[j][i]=array[j][i]+temp[j][i+1];
                    }
                    else{
                        temp[j][i]=array[j][i]+temp[j+1][i+1];
                    }
                }

                if(j == n-1){
                    if(temp[j][i+1]>=temp[j-1][i+1])
                    {
                        temp[j][i]= array[j][i]+temp[j][i+1];
                    }else{
                        temp[j][i]= array[j][i]+temp[j-1][i+1];

                    }
                }
            }
        }
    }
    int max=temp[0][0];

    for(int i =0;i<n;i++)
    {
        for(int j=0;j<m;j++) 
        {
            if(temp[i][j]>=max)
            {
                max =temp[i][j];
            }
            // std::cout<<temp[i][j]<< " ";
        }
        // std::cout<<std::endl;
    }

    // int result;
    // goldmine_fun((int*)array,4,0,0,n,m);
    std::cout<<max;


    return 0;

}