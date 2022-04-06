#ifdef min
//greedy approach of max sun of non -adjacent elements 
#include<iostream>
int main()
{
    [](const char *massage){
        std::cout<<massage;
    }
    ("hello world shashank here ");

    int n ;
    std::cin>>n;
    int array[n];

    int taken=0;
    int not_taken=0;


    for(int i=0;i<n;i++)
    {
        std::cin>>array[i];
    }

    taken=array[0];
    not_taken=0;

        int max =0;

    for(int i=1;i<n;i++)
    {
        int inta =not_taken+array[i];
        

        if(taken>not_taken)
        {
            max =taken;
        }
        else{
            max =not_taken;

        }

        not_taken= max;
        taken=inta;


    }

   

    int result=0;

    if(taken>not_taken)
    {
        result=taken;

    }
    else{
        result= not_taken;
    }
    std::cout<<result;

    return 0;

}

#endif

#ifdef paint
    #include<iostream> 

    int min(int a,int b,...)
    {
        if(a<=b)
        {
            return a;
        } 
        // else if(b<a && b<c)
        // {
        //     return b;
        // }
        else{
            return b;
        }
    }

    int main()
    {
        int n;
        std::cin>>n;
        int array[3][n];
        for(int j =0;j<n;j++)
        {
            for(int i=0;i<3;i++)
            {
                std::cin>>array[i][j];
            }
        }
        int matrix[3][n];

        matrix[0][0]=array[0][0];
        matrix[1][0]=array[1][0];
        matrix[2][0]=array[2][0];




        for(int j =1;j<n;j++)
        {
            matrix[0][j]= array[0][j]+min(matrix[1][j-1],matrix[2][j-1]);
            matrix[1][j]= array[1][j]+ min(matrix[0][j-1],matrix[2][j-1]);
            matrix[2][j]=array[2][j]+ min(matrix[0][j-1],matrix[1][j-1]);   
        }

        //     for(int i=0;i<3;i++)
        // {
        //  for(int j =0;j<n;j++)
        //     {
        //         std::cout<<matrix[i][j]<<" ";
        //     }
        //     std::cout<<'\n';
        // }
        
        int result= min(min(matrix[0][n-1],matrix[1][n-1]),matrix[2][n-2]);
        std::cout<<result;

    }
#endif