#include <iostream>
using namespace std;
int main() {
    int r,c;
    int a[100][100];
    cin>>r>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    int j=0;
    while(j<c){
    for(int i=0;i<r;i++)
    {  
        if(j%2==0)
        cout<<a[i][j]<<',';
        
       
    }
    
    for(int i=r-1;i>=0;i--)
    {
        if(j%2!=0)
        cout<<a[i][j]<<',';
        
        
    }
    j++;}
    cout<<"END";
   return 0;
    
}
