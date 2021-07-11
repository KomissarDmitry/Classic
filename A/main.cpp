#include <iostream>

using namespace std;

int main()
{
    int a[100][100]={0};
    int n;
    cin >> n;
    int k=n-1;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==k)
                a[i][j]=1;
            if(j>k)
                a[i][j]=2;
        }
        k--;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}
