#ifdef first//Single integer N denoting number of lines of the pattern.

#include<iostream>
int main()
{
    int n;
    int count =1;
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++){
            if(i==0)
            {
                std::cout<<1;
                break;
            }
            if(j==0 || j==i)
            {
                std::cout<<i;
               
            }
            else if(j>0 || j<n-1){
                std::cout<<0;
            }
            else{

        
            }
     }
     std::cout<<std::endl;
        
    }
}
#endif

#ifdef Que2 // Given a binary number ,help Von Neuman to find out its decimal representation. For eg 000111 in binary is 7 in decimal.
#include<iostream>
int main()
{
    int times,remd,result;
    std::cin>>times;
    
     long int binary=0;
    while(times--)
    {
    int mutli=1;
        std::cin>>binary;
    while(binary!=0)
    {
        remd=binary%10;
        binary/=10;
        result=result+remd*mutli;
        mutli*=2;

    }
    std::cout<<result;
    result=0;
    remd = 0;

    }
}


#endif

#ifdef message1
#include<iostream>
const char* print()
{
return "Hello Coding Blocks !";
}
int main () {
	const char* message=print();
	std::cout<<message;
	return 0;

}
#endif


#ifdef BALIFE

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, load = 0;
    cin >> n;
    ll int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        load += a[i];
    }
    if (load % n != 0)
    {
        cout << -1;
    }
    else
    {
        load = load / n;
        ll diff = 0, max_load = 0;
        for (int i = 0; i < n; i++)
        {
            diff += a[i] - load;
            max_load = max(max_load, abs(diff));
        }
        cout << max_load;
    }
    return 0;
}
#endif
#ifdef houses

#include<iostream>
int main() {
	int total_amount=0;
	int times,n;
    std::cin>>times;
    while(times--)
    {
	std::cin>>n;
	int house[n];
        for(int i=0;i<n;i++)
        {
            std::cin>>house[i];
        }

        for(int i=0;i<n;i++)
        {
            if((i+2)<=n && i<=n)
            {
                int amount=0;
                
                amount= house[i]+house[i+2];
                if(amount>total_amount)
                {
                    total_amount=amount;
                    std::cout<<total_amount;
                }
                
            }
            else{
                break;
            }
        }
        total_amount=0;
    }
	// std::cout<<total_amount;
	return 0;
}

#endif 
#ifdef manmohan

#include<iostream>
int main() {
    int n;
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        if(i==0)std::cout<<1;
        // std::cout<<"value of i"<<i<<"->";
        for(int j=0;j<i;j++)
        {
            if(j==0 || j==i)
            {
                std::cout<<1;
            }
            if(i%2!=0 && j<(i-1))
            {
                std::cout<<0;
            }
            else{
                std::cout<<1;
            }
        }
        std::cout<<std::endl;
        
    }

}
#endif

#ifdef replace1
#include<iostream>
int main() {
	  long long int n,remd=0,multi=1,result =0;
	std::cin>>n;
	while(n!=0)
	{
		remd=n%10;
		n=n/10;
		if(remd==0)
		{
			result=result+remd+5*multi;
		
		}
		result=result+remd*multi;
		multi*=10;
	}
	std::cout<<result<<std::endl;
}
#endif

#ifdef reverse
#include<iostream>
int main() {
	long int n,count=0,remd=0,result=0;
	long int num=1;
	
	std::cin>>n;
    long int temp=n;
	while(temp>0)
	{
		temp/=10;
		count++;
		num=num*10;
	}
    num=num/10;
	while(n!=0)
	{
		remd= n%10;
		n=n/10;
        if(num!=0)
        {
		result=result+remd*num;

        }
       if(num==0)
       {
		result=result+remd*1;
       }
		num/=10;
        // std::cout<<result;

	}
	std::cout<<result;
}
#endif

#ifdef R2
#include<iostream>
int main() {
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++)
    {
        int temp=n-i;
        if(temp%2!=0)
        {
            std::cout<<temp<<std::endl;
        }
    }
    for(int i=1;i<=n;i++)
    {
        int temp=i;
        if(temp%2==0)
        {
            std::cout<<temp<<std::endl;
        }
    }

}
#endif