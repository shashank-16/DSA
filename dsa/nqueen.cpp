#ifdef shashank

#include<bits/stdc++.h>

void nqueens(std::vector<int> world,std::string str,int n,int queen,int cord)
{
    // std::cout<<"[";
    // for(int i:world)
    // {
    //     std::cout<<i<<",";
    // }
    // std::cout<<"]";

    if(world.empty())
    {
        if(queen==n)
        {
            std::cout<<str;
        }
        return ;
    }    
    for(int i: world)
    {
        if( abs(cord-i) == 1)
        {

        }
        else{
            for(auto j=world.begin();j!=world.end();j++)
            {
                if( *j == queen)
                {
                    world.erase(j);
                }
            }

            // for (auto i:world)
            // {
            //     std::cout<<i;
            // }

            nqueens(world,str+std::to_string(i)+", ",n,queen+1,i);
            
        }
    }

}

void removal(std::vector<int>&world,int data)
{
     for(auto i=world.begin();i!=world.end();i++)
            {
                if( *i == data)
                {
                    world.erase(i);
                }
            }
}

int main()
{
    int n;
    std::cin>>n;
    std::vector<int>set;

    // int maze[n][n];
    for(int i =0;i<n;i++)
    {
        set.insert(set.end(),i);
    }
    nqueens(set," ",n,0,0);
    // removal(set,2);


}

#endif

#include<bits/stdc++.h>
// bool safe_or_not()
bool safe_or_not(int* array,int row,int col,int n);

void print_path(int *array,int n,std::string path,int row)
{
    if(row == n)
    {
        std::cout<<path;
        std::cout<<std::endl;
        return;
    }
    for(int col =0;col<n;col++)
    {
        if(safe_or_not(array,row,col,n)==true)
        {
            *(array+row * n+col)=1;
            print_path(array,n,path+std::to_string(row)+"-"+std::to_string(col)+" .",row+1);
            *(array+row* n+col)=0;

        }

    }
}

bool safe_or_not(int *array,int row,int col,int n)
{
 for(int i=row-1,j=col;i>=0;i--) //upward 
 {
     if(*(array+i * n+j)==true)
     {
         return false;
     }

 }

 for(int i=row-1,j=col-1 ;i>=0 && j>=0;i--,j--) //dia left  
 {
     if(*(array+i * n+j)==true)
     {
         return false;
     }

 }
for(int i=row-1,j=col+1 ;i>=0 && j<n;i--,j++) //right
 {
     if(*(array+i * n+j)==true)
     {
         return false;
     }

 }

//  for(int i=row,j=col-1;j>=0;j--)
//  {
//      if(*(array+i * n+j)==true)
//     {
//         return false;
//     }
//  }

 return true;
}



int main()
{
    int n;
    std::cin>>n;
    int array[n][n];
    print_path((int*)array ,n," ",0);

    return 0;

}