#include<bits/stdc++.h>
using namespace std;

int main()
{
     long long int n,m,r,c1,c2,k;
    
     cin >> n >> m >> k;
    
     long long int pro = n * m;
    
     vector < pair <long long int,long long int> > rows[1003];
     
     map<long long int,long long int> mappy; 
    
    for(int i = 0; i <k; i++)
    {
        cin >> r >> c1 >> c2;
        
        
        if(mappy.find(r) == mappy.end())
             mappy[r] = mappy.size();
        
        r = mappy[r];
        rows[r].push_back(make_pair(c1,c2));
    }
    
    rows[r].push_back(make_pair(c1,c2));
    
    for(int i = 0; i < mappy.size(); i++)
       sort(rows[i].begin(),rows[i].end());
    
    long long int sum = 0;
    
    for(int i = 0; i < mappy.size(); i++)
    {
       long long  int p = 0;
        for(int j = 0; j < rows[i].size(); j++)
        {
            if(p  < rows[i][j].first)
              sum +=  rows[i][j].second - rows[i][j].first + 1; 
                
            
            else if (p >= rows[i][j].first && p < rows[i][j].second)
                sum += rows[i][j].second - p;
        
    
            p = max(p,rows[i][j].second);

        }
    }  
    
    cout << pro - sum <<endl;
    return 0;
}
