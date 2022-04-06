#include<iostream>
#include<cstdio>

 int main(int argv ,const char* argc)
 {
    // int n;
    // std::cin>>n;

    #ifdef simple
    for(int j=0;j<n;j++)
    {
        for(int i=n;i>j;i--) std::cout<<'*'<<'\t';
        std::cout<<std::endl;
    }
    #endif

    #ifdef simple_1 //patterm 4 of pep coding 

    for(int i=0;i<n;i++)
    {
        for(int y=0;y<n;y++)
        {
            if(y<i)
            {
 
            std::cout<<'\t';
            }
            else
            {
            std::cout<<'*'<<'\t';

            }

        }
        std::cout<<std::endl;

    }
    #endif

    #ifdef simple_8_W
    int mid = n/2;

      for(int i=0;i<n;i++)
    {
        for(int y=0;y<n;y++)
        {
            
            if(y==0 || (y==n-1))
            {
                std::cout<<'*'<<'\t';
            }
            else if((i==y && i>=mid))
            
            {
                std::cout<<'*'<<'\t';
            }
            else if((y+i)==n-1 && i>mid)
            {
                std::cout<<'*'<<'\t';

            }
            else{
                std::cout<<'\t';
            }
        }
        std::cout<<std::endl;
    }
    #endif 


#ifdef simple_8_M
    int mid = n/2;
~
      for(int i=0;i<n;i++)
    {
        for(int y=0;y<n;y++)
        {
            
            if(y==0 || (y==n-1))
            {
                std::cout<<'*'<<'\t';
            }
            else if((i==y && i<=mid))
            
            {
                std::cout<<'*'<<'\t';
            }
            else if((y+i)==n-1 && i<mid)
            {
                std::cout<<'*'<<'\t';

            }
            else{
                std::cout<<'\t';
            }
        }
        std::cout<<std::endl;
    }
    #endif 

#ifdef simple_x //hour glass
int n;
std::cin>>n;
   int mid = n/2;

for(int i =0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        
        if((i==j) || (i+j ==(n -1)))
        {
           
            std::cout<<"*";
        }
        else if(i==0 || i==(n-1))
        {
            std::cout<<'*';
        }
        else if((j>i && j<(i+j) && j!=n-i && j<=n-i) && i<mid) 
        {
            std::cout<<'*';
        }
        else{
            std::cout<<' ';
        }

    }
    std::cout<<std::endl;

}
#endif

#ifdef simple_arrow

int mid  = n/2;
for(int i =0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(i ==mid || j==mid)
        {
            std::cout<<'*'<<'\t';
        }
        else if ()
        {
            std::cout<<'*'<<'\t';
        }
        else{
            std::cout<<'\t';
        }
    }
    std::cout<<std::endl;
}

#endif 

#ifdef om

int n;
std::cin>>n;
int mid = n/2;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(i==0 || i ==n-1  || j==n-1 || j==mid || i==mid)
        {
            std::cout<<"*";
        }
       else if(j>mid)
       {
            std::cout<<"*";

       }
        
    std::cout<<'\t';
    }  
    std::cout<<'\n'; 
}
#endif

#ifdef aman
int n;
int count=0;
std::cin>>n;
int mid = n/2;
// int value =1;
int take =0;
for(int i=0;i<n;i++)
{
   if(i<=mid)
    {
        take = i+i;
    }
    else if(i-mid==1){
        take=i%n;
    }
    else{
        take =n-i;
    }
    // bool first=true;
    for(int j=1;j<=n;j++)
    {
        

        count = (take*n)+j;
        std::cout<<count;
        

    }
    count=0;
    std::cout<<std::endl;
}

#endif

#ifdef triangle
    int n,k,i=0;
    int space=0;
    std::cin>>n;
    for (i=1;i<=n;++i,k=0)
    {
        for(space=1;space<=n-i;++space)
        {
            std::cout<<' ';
        }
        while(k != 2*i -1)
        {
            std::cout<<'*';
            ++k;
        }
        std::cout<<std::endl;
    }

#endif

#ifdef triangle1

   int i, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, k = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }

#endif

#ifdef inverse_bar

int n;
std::cin>>n;
int array[n];
for(int i=0;i<n;i++)
{
    std::cin>>array[i];
}

int max=array[0];
for(int i=0;i<n;i++)
{
    if(array[i]>max)
    {
        max=array[i];
    }
}

for(int i=max;i>0;i--)
{

    for(int y =0;y<n;y++)
    {
       
         if(array[y]-i >= 0)
        {
            std::cout<<"*\t";
        }
        else{
            std::cout<<"\t";
        }
    }
    std::cout<<std::endl;
}


#endif

#ifdef bar

int n;
std::cin>>n;
int array[n];
for(int i=0;i<n;i++)
{
    std::cin>>array[i];
}

int max=array[0];
for(int i=0;i<n;i++)
{
    if(array[i]>max)
    {
        max=array[i];
    }
}

for(int i=0;i<max;i++)
{
    for(int j=0;j<n;j++)
    {
        if(array[j]-i>0)
        {
            std::cout<<"*"<<'\t';
        }
        else{
            std::cout<<'\t';

        }

    }
    std::cout<<std::endl;

}
#endif

#ifdef diamond

int n;
std::cin>>n;



for(int i=0;i<n;i++)
{
    for(int j=0;j<i;j++)
    {
        std::cout<<"*";
    }
    std::cout<<std::endl;

}

for(int i=n;i>0;i--)
{
    for(int j=0;j<i;j++)
    {
        std::cout<<"*";
    }
    std::cout<<std::endl;

}

#endif

#ifdef backward_dia

int n;
std::cin>>n;

for(int i=n;i>=0;i--)
{
    for(int j=0;j<n;j++)
    {
        #ifdef left_side 

        if(j>=i)
        {
            std::cout<<"*";
        }
        else{
            std::cout<<" ";
        }
        #endif 
        #ifdef star_hyphen

        if(j>=i)
        {   
            if(i%2==0)
            {
                std::cout<<"*";
            }
            else{
                std::cout<<"-";
            }
        }
        else{
            std::cout<<" ";
        }
        #endif 


    }
    std::cout<<std::endl;

}

for(int i=n-1;i>=0;i--)
{
    for(int j=n;j>0;j--)
    {
        #ifdef left_side 
        if(j>i)
        {
            std::cout<<" ";
        }
        else{
            std::cout<<"*";
        }
        #endif 

        #ifdef star_hyphen
     if(j>i)
      {
       
        std::cout<<" ";
    }
    else{
         if(i%2==0)
        {
            std::cout<<"-";
        }
        else{
            std::cout<<"*";
        }
    }
        #endif

    }
    std::cout<<std::endl;

}

#endif

#ifdef triangle_me
int n;
std::cin>>n;

int mid = (n*2)/2;
// mid= mid -1 ;

int count=0; //incrementer

int left=0;
int right=0;
// std::cout<< mid;

//condiiton will separate the triangle from diamond 

for(int i=1;i<=n*2;i++)
{
    if(i <= n )
    {
        for(int j=0;j<=n*2;j++)
        {
            left= mid-count ;
            right=mid+count;

            if(j>=left && j<=right)
            {
                std::cout<<count+n;
                // std::cout<<" ";

            }
            else{
                std::cout<<" ";
                // std::cout<<"*";

            }
        }
        count++;
        if(i == n )
        {
            count=1;
    // std::cout <<left<<right<<count;
        }
        std::cout<<std::endl;
    }
    
    
    else{
        
        left= left+count ;
        right=right-count;
    
        for(int k=0;k<=n*2;k++)
        {

            if(k>=left && k<=right)
            {
                std::cout<<count+n;
                // std::cout<<" ";

            }
            else{
                std::cout<<" ";
                // std::cout<<"*";
            }
        }
        
        std::cout<<std::endl;
    }

}
#endif



    return 0;
}