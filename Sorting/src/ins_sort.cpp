#include "ins_sort.h"
#include <iostream>
#include<malloc.h>

#include<string>
#include <bits/stdc++.h>
#include <fstream>
#define wrdlen 48
using namespace std;
ins_sort::ins_sort()
{
    //ctor
}

void ins_sort::sorty()
{
    int i,j;
//cout<<"insertion sort"<<"\n";
//cout<<"step 0"<<"\n";
//printy();
    int temp;
    for ( i = 1; i < n1; i++)
    {
        temp= arra[i];
        for (j = i; j>0&&temp<arra[j-1]; j--)
        {
            arra[j] = arra[j-1];

        }
        arra[j]= temp ;
        /*cout<<"step :"<<i+1<<"\n";
               printy();
        cout<<"\n";*/
    }

}
int ins_sort::get_n()
{
    return n1;
}
ins_sort::ins_sort(int c)
{
    // keeps blocks powers of 2
    capacity=c;
    arra=(int*)malloc((capacity+1) *sizeof(int));
    n1=0;
}

void ins_sort::reset_n()
{
    n1=0;
}

void ins_sort::push(int value)
{
    arra[ n1 ] = value;
    n1++;
}

void ins_sort::swapy(int*a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void ins_sort::printy ()
{

      for (int j = 0; j < n1; j++)
      {
cout<<arra[j]<<"\t";}
cout<<"\n";
}


ins_sort::~ins_sort()
{
    //dtor
}
