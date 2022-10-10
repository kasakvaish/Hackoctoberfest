#include <bits/stdc++.h>

using namespace std;
void merge_sort(int n,int m,int arr1[],int arr2[], int arr[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        /* code */
        if (arr1[i] > arr2[j])
        {
            arr[k++] = arr2[j++];
        }
        else
        {
            arr[k++] = arr2[i++];
        }
    }

    while (i < n)
    {
        arr[k++] = arr1[i++];
    }

    while (j < m)
    {
        /* code */
        arr[k++] = arr2[j++];
    }
}

int main()
{
    int n, m, q;
    cin >> n >> m;
    q = m+n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    int arr[q];
    for (int i = 0; i < q; i++)
    {
        i = 0;
    }
    merge_sort(n,m,arr1,arr2, arr);
    for (int i = 0; i < q; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
