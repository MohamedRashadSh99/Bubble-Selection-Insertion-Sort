#include "selection_sort.h"
#include <iostream>
#include<malloc.h>
#include<string>
#include <bits/stdc++.h>
#include <fstream>
#define wrdlen 48
using namespace std;

selection_sort::selection_sort()
{
    //ctor

}
selection_sort::selection_sort(int c)
{
    // keeps blocks powers of 2
    capacity=c;
    arra=(int*)malloc((capacity+1) *sizeof(int));
    n1=0;
}
void selection_sort::push(int value)
{
    arra[ n1 ] = value;
    n1++;
}

void selection_sort::swapy(int*a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void selection_sort::printy ()
{

    for (int j = 0; j < n1; j++)
    {
        cout<<arra[j]<<"\t";
    }
    cout<<"\n";
}

selection_sort::~selection_sort()
{
   // cout<<"\n good bye";
}
void selection_sort::reset_n()
{
    n1=0;
}
int selection_sort::get_n()
{
    return n1;
}
void selection_sort::sorty()
{
  //  cout<<"selection sort"<<"\n";
  //  cout<<"step 0:"<<"\n";

    for (int i = 0; i < n1-1; i++)
    {
    //    printy();
    //    cout<<"\n";
        int min = i;
        for (int j = i+1; j < n1; j++)
        {
            if (arra[j] < arra[min])

                min = j;
        }
        swapy(&arra[i], &arra[min]);

    //    cout<<"step :"<<i+1<<"\n";
     //   printy();
    //    cout<<"\n";
    //    cout<<"\n";
    }
}
