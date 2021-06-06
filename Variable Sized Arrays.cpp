#include<iostream>
#include<sstream>
#include<vector>

using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    cin.ignore();
    vector<vector<int>> a(n);
    
    for(int i=0;i<n;i++)
    {
        string line;
        getline(cin, line);
        istringstream ss(line);
        
        //First number is the size of k
        int k_size,k_item;
        ss>>k_size;
        vector<int> k(k_size,0);    //declaring vector of k_size and initializing all elements to 0
        
        //Populate k array
        for(int j=0;j<k_size;j++)
        {
            ss>>k_item;
            //don't use push_back
            k[j] = k_item;
        }
        // Add k to the array. Don't use push_back
        a[i]=k;
    }
    
    for(int i=0;i<n;i++)
    {
        string query;
        getline(cin,query);
        istringstream ss(query);
        
        //Get loation in the vector
        int x,y;
        ss>>x>>y;
        cout<<a.at(x).at(y)<<endl;    // a.at(x).at(y) is the same is a[x][y]
    }
    return 0;
}
