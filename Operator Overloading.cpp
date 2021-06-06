#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Matrix{
    public:
        vector<vector<int>> a;
        Matrix& operator +(Matrix x){
            Matrix res;
            for(int i=0; i<x.a.size(); i++){
                for(int j=0; j<x.a[0].size(); j++){
                    this->a[i][j] += x.a[i][j];
                }
            }
            return *this;
        }
};

