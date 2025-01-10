#include <iostream>
using namespace std;
int main()
{
    int m[2][2];
    cout<<"inserisci una matrice 2x2 "<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<"inserisci l'elemento "<<i<<" "<<j<<endl;
            cin>>m[i][j];
        }}
        
        cout<<"la matrice è";
        cout<<endl;
        for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
             cout<<m[i][j]<<" ";
    }
        cout<<endl;
    }


    int m1[2][2];
    cout<<"inserisci una matrice 2x2 "<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<"inserisci l'elemento "<<i<<" "<<j<<endl;
            cin>>m1[i][j];
        }}
        
        cout<<"la matrice è";
        cout<<endl;
        for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
             cout<<m1[i][j]<<" ";
    }
        cout<<endl;
    }
    

    int c[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            c[i][j]=m[i][j]*m1[i][j];
            
        }
              cout<<"la matrice è";
        cout<<endl;
        for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
             cout<<c[i][j]<<" ";
    }
        cout<<endl;
}
}
}
