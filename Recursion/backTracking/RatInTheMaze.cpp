#include<iostream>
using namespace std;
bool issafe(int maze[][4],int newx,int newy,int row, int col,string path)
{
    /*
    safe hone ka condition
    1. out of bound nhi hai
    2. maze is open

    */  
    if((newx >= 0&& newx < row)&&
        (newy >= 0&& newy < col)&&
        (maze[newx][newy] == 1)
        )return true;
    return false;
}

void printallWays(int maze[][4],int srcx,int srcy,int row, int col,string path)
{
    //basecase
    /*
    1. if destination is reached
    */
   if(srcx == row-1 && srcy == col-1)
   {
    cout << path << endl;
    return;
   }

   //1 case ko solve kro
   //up
    int newx = srcx-1;
    int newy = srcy;
    if(issafe(maze,newx,newy,row,col,path))
    {
    maze[srcx][srcy] = 0;
    printallWays(maze,newx,newy,row,col,path+'U');
    maze[srcx][srcy] = 1;

    }
   //down
    newx = srcx+1;
    newy = srcy;
    if(issafe(maze,newx,newy,row,col,path))
    {
    maze[srcx][srcy] = 0;
    printallWays(maze,newx,newy,row,col,path+'D');
    maze[srcx][srcy] = 1;

    }
    //right
    newx = srcx;
    newy = srcy+1;
    if(issafe(maze,newx,newy,row,col,path))
    {
    maze[srcx][srcy] = 0;
    printallWays(maze,newx,newy,row,col,path+'R');
    maze[srcx][srcy] = 1;

    }
    //left
    newx = srcx;
    newy = srcy-1;
    if(issafe(maze,newx,newy,row,col,path))
    {
    maze[srcx][srcy] = 0;
    printallWays(maze,newx,newy,row,col,path+'L');
    maze[srcx][srcy] = 1;

    }
}
int main()
{
 int maze[4][4]=
 {
    {1,0,0,0},
    {1,1,0,0},
    {1,1,1,1},
    {0,0,1,1},
 };
 int row=4;
 int col=4;
 string path="";
 printallWays(maze,0,0,row,col,path);
}