#include<iostream>
int main()
{
    int x1,x2,y1,y2;
    std::cin>>x1>>y1;
    int array1[x1][y1];


    for(int i=0;i<x1;i++)
    {
        for(int j=0;j<y1;j++)
        {
            std::cin>>array1[i][j];
        }

    }

    std::cin>>x2>>y2;
    int array2[x2][y2];

    for(int i=0;i<x2;i++)
    {
        for(int j=0;j<y2;j++)
        {
            std::cin>>array2[i][j];
        }
    }



    int answer[x1][y2];

    if(y1==x2)
    {
        for(int i=0;i<x1;i++) //ROW
        {
            for(int j =0 ;j<y2;j++)  //column
            {
                answer[i][j]=0;
                for(int k=0;k<y1;k++)
                {
                answer[i][j] += (array1[i][k] * array2[k][j]);
              
                }       
            }
        }
    }
    else{
        std::cout<<-1;
    }

    for(int i=0;i<x1;i++)
    {
        for(int j =0;j<y2;j++)
        {
            std::cout<<answer[i][j]<<"  ";
        }
        std::cout<<std::endl;
    }
    return 0;

}