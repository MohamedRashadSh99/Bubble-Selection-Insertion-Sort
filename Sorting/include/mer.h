#ifndef MER_H
#define MER_H
#include <malloc.h>
#include <string>
#include <bits/stdc++.h>
#include <fstream>
#define wrdlen 48
using namespace std;

class mer
{
    public:
          mer(int);
        virtual ~mer();
        void Merge(int arr[], int l, int m, int r);
        Merge_sort(int );
        void sortm();
        void sorty(int arr[], int l, int r);
        void printy ();
        void push(int value);
        int * arra;
        int  get_n();
        void reset_n();
    protected:

    private:
         int n, capacity;
         int i, j, k,l,r;
          int i1;

};

#endif // MERGE_SORT_H
