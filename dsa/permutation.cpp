#include<bits/stdc++.h>

using namespace std;

void subs(string text,string asf)
{
    if(text.size()==0)
    {
        std::cout<<asf;
        return ;
    }
   
    for(int i=0;i<text.size();i++)
    {
        char temp=text.at(i);
        string lros=text.substr(0,i);
        string rros=text.substr(i+1);
        string mros=lros+rros;
        subs(mros,asf+temp);
        
    }

}

int main()
{
    string text;
    cin>>text;
     subs(text," ");
   
}