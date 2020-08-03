#include <iostream>

using namespace std;
int leftnotrepeat(string s)
{
    int res=INT_MAX,index[256];
    for(int i=0;i<256;i++)
    {
        index[i]=-1;
    }

    for(int i=0;i<s.length();i++)
    {
        if(index[s[i]]==-1)
            index[s[i]]=i;
        else
            index[s[i]]=-2;
    }
    for(int i=0;i<256;i++)
    {
        if(index[i]>=0)
            {
                res=index[i];
                break;
            }

    }
    return ((res==INT_MAX)?-1:res);
}
int main()
{
    int r;
    r=leftnotrepeat("abbccda");
    cout<<r;
    return 0;
}

