#include<bits/stdc++.h>
 

std::vector<std::string> maze_jump(int row,int col, int origin,int end)
{
    using namespace std;

    if(row==origin && col ==end)
    {
        vector<string> bros;
        bros.push_back(" ");
        return bros;
    }   

    vector<string> h_side;
    vector<string> v_side;
    vector<string> d_side;

   

    if(col<=origin)
    {
        h_side=maze_jump(row,col+1,origin,end);
    }
    if(row<=end)
    {
        v_side=maze_jump(row+1,col,origin,end);
    }
    
    if(row<=origin && col<=end)
    {
        d_side=maze_jump(row+1,col+1,origin,end);
    }

    vector<string> mros;

    for(string tnb:h_side)
    {
        mros.insert(mros.end(),"h"+tnb);

    }
     for(string tnb:v_side)
    {
        mros.insert(mros.end(),"v"+tnb);

    }
     for(string tnb:d_side)
    {
        mros.insert(mros.end(),"d"+tnb);
    }

    return mros;
}   

int main()
{
    using namespace std;
    int x,y;
    cin>>x>>y;

    vector<string> result =maze_jump(1,1,x,y);
    for(string tnt:result)
    {
        cout<<tnt<<" ";

    }
    return 0;

}