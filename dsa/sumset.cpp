
#ifdef recursion
#include<bits/stdc++.h>


void sumset(int array[],std::string str,int sum,int res,int idx,int n)
{
if(idx == n)
{

    if(res == sum)
    {
        std::cout<<str;

    }
        return ;
}
//remember the DAA sumset problem
    
       sumset(array,str+std::to_string(array[idx])+",",sum,res+array[idx],idx+1,n); // exceting the value 
    sumset(array,str,sum,res,idx+1,n);//do the iteration for the other elements  not adding in the set 
}

int main()
{
    int n;
    int sum=0;

    std::cin>>n;

    int array[n];
    for(int i =0;i<n;i++)
    {
        std::cin>>array[i];
    }
    std::cin>>sum ;
    sumset(array,"",sum,0,0,n);
    // std::cout<<sum;



}
#endif 

#ifdef DP

#include<iostream>

int main()
{
    int n;
    std::cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        std::cout<<"enter the number";
        std::cin>>array[i];
    }

    int tar;
    std::cin>>tar;

    bool temp[n+1][tar+1];

//     for(int i=0;i<n+1;i++){
// std::cout<<"process";

//         for(int j=0;i<tar+1;j++){
//             temp[i][j]=false;

//         }
       
//     }
    
// std::cout<<"processing";

    for(int i=0;i<n+1;i++){
        
        for(int j=0;j<tar+1;j++)
        {
            if(i == 0 && j == 0 )
            {
                temp[0][0]=true;
            }
            else if(j==0)
            {
                temp[i][j]=true;
            }
            else if(i == 0)
            {
                temp[i][j]=false;
             }
            else
            {
                 if(temp[i-1][j] == true){
                    temp[i][j]=true;
                }
                else{
                int iter= array[i-1];

                    if( j >=tar &&temp[i-1][iter-j] == true)
                    {
                        temp[i][j]=true;
                    }
                   
                }
            }
         

            
        }
    }
    for(int i=0;i<n+1;i++){
        
        for(int j=0;j<tar+1;j++)
        {
            std::cout<<temp[i][j]<<" ";

        }
        std::cout<<std::endl;

    }
    return 0;


}

#endif 

// 4 2 7 1 3 10