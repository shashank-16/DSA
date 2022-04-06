#include<bits/stdc++.h>

using namespace std;

vector<string> getstair(int str)
{
    if(str==0)
    {
        vector<string> basem;
        basem.insert(basem.begin(),"");
        return basem;
    }
    if(str<0)
    {
        vector<string> basem;
        return basem;


    }
    
    vector<string> ros1= getstair( str-1);
    vector<string> ros2= getstair( str-2);
    vector<string> ros3= getstair( str-3);

    vector<string> mros;

    for(string tnt:ros1)
    {
        mros.insert(mros.end(),"1" +tnt);
    }

    for(string tnt:ros2)
    {
        mros.insert(mros.end(),"2"+ tnt);
    }
    for(string tnt:ros3)
    {
        mros.insert(mros.end(),"3" +tnt);
    }
    return mros;
}

int main()
{
    int  take;
    cin>>take;
    vector<string> result = getstair(take);

    
    std::cout<<"[";
    for(string show:result)
    {
        std::cout<<show<<",";
    }
    std::cout<<"]";

    return 0;

}