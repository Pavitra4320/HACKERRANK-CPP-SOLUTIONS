#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
    string n, numbers,num_range;
    getline(cin,n);
    getline(cin,numbers);
    istringstream ss(numbers);
    int num;
    vector<int> v(stoi(n));

    for(int i=0; ss >> num; i++)
    {
        v[i]=num;
    }
    //Erase single element
    string x;
    getline(cin,x);
    v.erase(v.begin() + stoi(x) - 1);

    //Erase a range of elements
    getline(cin,num_range);
    istringstream ss_range(num_range);
    int r_start,r_end;
    ss_range >> r_start >> r_end;
    v.erase(v.begin() + r_start - 1, v.begin() + r_end - 1);

    int v_size=v.size();
    cout<<v_size<<endl;
    for(int i=0;i<v_size;i++)
    {
    cout<<v.at(i)<<" ";
    }
    return 0;
}
