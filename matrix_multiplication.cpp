#include<iostream>

using namespace std;

int main()
{
    int m,n,o;
    cin>>m>>n>>o;

    int a[m][n];
    int b[n][o];

    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            cin>>a[i][j];
        }
    }

    for(int i = 0;i<n;i++){
        for(int j = 0;j<o;j++){
            cin>>b[i][j];
        }
    }

    int ans[m][o];

    for(int i = 0;i<m;i++){
        for(int j = 0;j<o;j++){
            ans[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < o; j++)
        {
            for (int k = 0; k < n; k++)
            {
                /* code */
                ans[i][j] += a[i][k] * b[k][j];
            }
            
        }
        
    }

    for (int i = 0; i < m; i++)
    {
        /* code */
        for (int j = 0; i < o; i++)
        {
            /* code */
            cout<<ans[i][j]<<" ";
        }cout<<endl;
        
    }
    
    
    return 0;
}
