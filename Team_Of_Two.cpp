#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> a,vector<int> b)
{
    set<int> st;
    for(int i = 0;i<a.size();i++)
    {
        st.insert(a[i]);
    }
    for(int i = 0;i<b.size();i++)
    {
        st.insert(b[i]);
    }
    return {st.size()==5};

}


int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> arr;
        for(int i = 0;i<n;i++)
        {
            vector<int> v;
            int k;
            cin>>k;
            for(int j = 0;j<k;j++)
            {
                int l;
                cin>>l;
                v.push_back(l);
            }
            arr.push_back(v);
        }

        bool test = false;
        for(int i = 0;i<n;i++)
        {
            for(int j = i+1;j<n;j++)
            {
                bool call = check(arr[i],arr[j]);
                if(call)
                {
                    test = true;
                    break;
                }
            }
            if(test)
            {
                break;
            }
        }

        if(test)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }


    }


    return 0;
}