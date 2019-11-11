#include<bits/stdc++.h>
using namespace std;

int main()
{
    int adj[5][5]={0};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter the number of Edge "<<endl;
    int edg;
    cin>>edg;
    int from,to;
    for(int i=0;i<edg;i++){
            cin>>from;
            cin>>to;
            adj[from-1][to-1]=1;
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Neighbor : ";
    int n;
    cin>>n;
    for(int i=0;i<5;i++){
        if(adj[n-1][i]==1){
            cout<<n<<"->"<<i+1<<endl;
        }
    }

    return 0;
}
