#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int c,r,num=20;
    char ch='z';
    char grid[10][10]={{'0','V','E','R','T','I','C','A','L','L'},
                        {'R','0','0','A','0','0','0','0','A','0'},
                        {'A','0','R','I','0','0','0','T','0','0'},
                        {'N','0','0','D','0','0','N','0','0','0'},
                        {'D','0','0','E','S','O','0','0','0','0'},
                        {'O','0','0','P','Z','E','0','0','0','W'},
                        {'M','0','0','I','0','0','A','0','A','0'},
                        {'0','0','R','K','0','0','0','R','0','0'},
                        {'0','O','0','I','0','0','D','0','C','0'},
                        {'H','0','0','W','S','L','E','U','T','H'}};
    ifstream file("output.txt");
    if(!file)
    {
        cout<<"FILE NOT FOUND."<<'\n';
    }
    else
    {
        cout<<"WORD SEARCH GRID IS: "<<'\n';
        cout<<'\n';
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(grid[i][j]=='0')
                {
                    srand (time(NULL));  
                    r = rand() % 26;  
                    c = ch + r;    
                    grid[i][j]=c;  
                    ch--;
                }
                file>>grid[i][j];
                cout<<grid[i][j]<<" ";
            }
            cout<<'\n';
        }
    }

    return 0;
}