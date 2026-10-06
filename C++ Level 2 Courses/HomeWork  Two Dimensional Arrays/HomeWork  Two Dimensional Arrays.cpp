#include <iostream>
#include <cstdio>
using namespace std;
void Read2Array(int x[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            x[i][j] = (i + 1) * (j + 1);
        }
        
    }
}

void print2Array(int x[10][10])
{

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%0*d ",2, x[i][j]);
        }
        printf("\n");

    }
}



int main()
{
    int x[10][10];
    Read2Array(x);
    print2Array(x);
    
    return 0;
    

}

