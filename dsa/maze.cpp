#include <bits/stdc++.h>

std::vector<std::string> maze_path(int row, int col, int origin, int end)
{

    using std::vector;
    using std::string;

    if (row == origin && col == end)
    {
        vector<string> bros;
        bros.push_back(" ");
        return bros;
    }

    vector<string> h_path;
    vector<string> v_path;

    if (col <= end)
    {
        h_path= maze_path(row, col+1, origin, end);
    }
    if (row <= origin)
    {
        v_path = maze_path(row+1, col, origin, end);
    }

    vector<string> mros;

    for (string tnt : h_path)
    {
        mros.insert(mros.end(), "h" + tnt);
    }
    for (string tnt : v_path)
    {
        mros.insert(mros.end(), "v" + tnt);
    }
    

    return mros;

}

int main()
{
    int origin, end;
    std::cin >> origin >> end;
    std::vector<std::string> result = maze_path(1, 1, origin, end);
    for (std::string tnt : result)
    {
        std::cout << tnt << " ";
    }
    return 0;
}