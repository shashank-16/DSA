#include<iostream>
#include<queue>
int main()
{
    int n;
    std::cin>>n;

    int arr[n];
    std::queue<int> maze;

    for(int i=0;i<n;i++)
    {
        std::cin>>arr[i];
    }

    maze.push(arr[0]);
    maze.push(arr[1]);
    int i=2;
    while(i<n)
    {
        if(maze.front() < maze.back())
        {
            std::cout<<maze.back()<<std::endl;
            maze.pop();
        }
        else{
            // if(maze.front() >= maze.back())
            // {
            //     std::cout<<-1<< " ";

            // }
            maze.push(arr[i]);
                // std::cout<<"value in maze"<<maze.back()<<"  ";
            i++;
        }
    }
while(maze.size()!=0)
{


    if(maze.front() < maze.back())
        {
            std::cout<<maze.back()<<std::endl;
            maze.pop();
        }
        else{
            std::cout<<-1<<std::endl;
            maze.pop();
        }
}
    // std::cout<<maze.front();
    // std::cout<<maze.back();
    return 0;
}

