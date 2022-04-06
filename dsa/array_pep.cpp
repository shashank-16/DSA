#include<iostream>
int main()
{
    #ifdef define
    char c;
    std::cin>>c;
    if(c=='+')
    {
        #define add +
        int x =1 add 2;
        std::cout<<x;
    

    }else{
        
    }
    #endif

    #ifdef difference
    int n;
    int max=0,min=0,result;
    std::cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        std::cin>>array[i];
    }
min = array[0];
max =array[0];
    for(int i=0;i<n;i++)
    {
      if(array[i]>max)
      {
          max = array[i];
      }
      if(array[i]<min){
          min =array[i];
      }
    }

   
    result=max-min;
    std::cout<<max<<min<<result;
 #endif

#ifdef findd
int n,d;
std::cin>>n>>d;
signed int found =-1;
int array[n];
for(int i =0;i<n;i++)
{
    std::cin>>array[i];
}

for(int i =0;i<n;i++)
{
    if(array[i]==d)
    {
        std::cout<<i;
        found  =0;
        break;
    }
    if(i==n-1)
    {
        if(found==-1)
        {
            std::cout<<found;
        }    
    }

}

#endif

#ifdef bar
int n,d;
std::cin>>n;
int array[n];
for(int i =0;i<n;i++)
{
    std::cin>>array[i];
}
int max =array[0];
for(int i=0;i<n;i++)
{
    if(array[i]>max)
    {
        max =array[i];
    }
}

for(int i=0;i<max;i++)
{
    for(int j=0;j<n;j++)
    {
        if(max-array[j] <=i)
        {

        std::cout<<"*    " ;
        }else{
            std::cout<<' ';
        }
    
    }
    std::cout<<std::endl;
}

#endif

#ifdef add
int n;
std::cin>>n;

int array1[n],array2[n];
for(int i =0;i<n;i++)
{
    std::cin>>array1[i];
}

int b;
std::cin>>b;
for(int i =0;i<b;i++)
{
    std::cin>>array2[i];
}
    
int result[0];
int count;
if(b>n)
{
    result[b];
    count =b;

}else{
    result[n];
    count=n;
}

for(int i=0;i<count;i++)
{
    result[i]=array1[i]+array2[i];

}


for(int i=0;i<n;i++)
{
    std::cout<<result[i];
}



#endif

#ifdef reverse
int n;std::cin>>n;

int array[n];
for(int i =0;i<n;i++)
{
    std::cin>>array[i];
}

int result[n];
int count=0;

for(int i =n-1;i>=0;i--)
{
    result[count]=array[i];
    count++;
}
for(int i =0;i<n;i++)
{
    std::cout<<result[i];
}

#endif

#ifdef rotate
int n;std::cin>>n;
bool keep=true;
int holder=0;
int array[n];
for(int i =0;i<n;i++)
{
    std::cin>>array[i];
}
int times;
std::cin>>times;
while(times--)
{

for(int i =n-1;i>=0;i--)
{
    if(keep)
    {
    holder = array[i];
    keep=false;
    }
    array[i]=array[i-1];
}
keep=true;
array[0]=holder;
}
for(int i =0;i<n;i++)
{
    std::cout<<array[i]<<" ";
}

#endif

#ifdef rohan

    int i,j,n,sum=0;
    std::cin>>n;
    int array[n];
 
    for(i=1;i<=n;i++)
    {
        std::cin>>array[i];
    }
    for (i = 1; i <= n; i++)
    {
        sum=array[i-1]+array[i];
        if (sum>0)
        {
          std::cout<<array[i]<<std::endl;
        }
        else
        {
            break;
        }
    }

#endif

#ifdef inverse


#endif


    return 0;
}