
/** This function takes an 2D vector as an argument and prints it in spiral fashion **/

/**This code has been authored by Shivakant Singh **/

vector<int> Solution::spiralOrder(const vector<vector<int> > &mat) 
{
     int ctr = 0, i = 0, j = 0,k,l,start = 0, end = 0,ctr1 = 0;
     
     
     int m = mat[0].size();
     int n = mat.size();
     vector <int>  ans;
     
     int total = n *m;
     vector <pair <int,int> > test;
     
     //cout << "Outside the while loop,everythig's fine "<<endl;
     
     int init = 0;
     if(n == 1)
       {
           for(int h = 0; h < m; h++)
            ans.push_back(mat[0][h]);
       }
       
      else if (m == 1)
        {
            for(int h = 0; h < n; h++)
              ans.push_back(mat[h][0]);
              
        }
     else
      {
     while(n>=0 && m >=0 && start < n && end < n)
       {
            //cout << "Loop mein ghus gaya "<<endl;
            if(ctr %2 == 0)
              {
 
                    if(ctr1)
                     j++;
 
                    for(k = j; k < m; k++)
                      //cout<<mat[i][k]<<" ";
                      {
                        //   auto p = std::make_pair(i, k);
                        //   if(find(test.begin(), test.end(), p) == test.end())
                           if(init == total)
                                break;
                           
                           ans.push_back(mat[i][k]);
                           init++;
                           //test.push_back(make_pair(i,k));
                      }
 
                      j = k - 1;
 
 
                    for(l = i+1; l < n; l++)
                     //cout << mat[l][j] <<" ";
                     {
                        //  auto p = std::make_pair(l, j);
                        // if(find(test.begin(), test.end(), p) == test.end())
                         
                         if(init == total)
                                break;
                         
                         ans.push_back(mat[l][j]);
                         init++;
                         //test.push_back(make_pair(l,j));
                      }
 
                     i = l - 1;
                      n--;
                   m--;
 
              }
 
 
           else
            {
 
 
                for(k = j-1; k >=start; k--)
                      //cout<<mat[i][k]<<" ";
                      {
                        //   auto p = std::make_pair(i, k);
                        //   if(find(test.begin(), test.end(), p) == test.end())
                          
                          if(init == total)
                                break;
                          
                          ans.push_back(mat[i][k]);
                          init++;
                          //test.push_back(make_pair(i,k));
                      }
 
               j = k + 1;
 
 
                    //cout << "Values of i and j "<<i << " "<<j<<endl;
                    for(l = i-1; l >=end+1; l--)
                      //cout << mat[l][j] <<" ";
                      {
                        //   auto p = std::make_pair(l, j);
                        //   if(find(test.begin(), test.end(), p) == test.end())
                          
                          if(init == total)
                                break;
                          
                          ans.push_back(mat[l][j]);
                          init++;
                          //test.push_back(make_pair(l,j));
                      }
 
                  i = l + 1;
 
                      start++;
               end++;
 
 
                ctr1++;
            }
 
 
 
            //cout << "Inside the while loop ,everything's kind of fine "<<endl;
            ctr++;
       }
      }
    return ans;
}
