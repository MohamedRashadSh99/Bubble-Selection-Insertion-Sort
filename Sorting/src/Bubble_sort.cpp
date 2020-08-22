#include "Bubble_sort.h"
#include <iostream>
#include<malloc.h>
#include<string>
#include <bits/stdc++.h>
#include <fstream>
#define wrdlen 48
using namespace std;
Bubble_sort::Bubble_sort()
{
    //ctor
}

Bubble_sort::Bubble_sort(int c)
{
    // keeps blocks powers of 2
    capacity=c;
    arr=(int*)malloc((capacity+1) *sizeof(int));
    n1=0;
}

void Bubble_sort::sorty()
{
    int i,j;
  //  cout<<"bubble sort"<<"\n";
  //  cout<<"step 0"<<"\n";
  //  printy();

    bool sorted = false;

    for (i = 0; i < n1 && !sorted; i++)
    {
        sorted = true;
        for (int j=n1-1; j > i; j--)
            {if (arr[j-1] > arr[j])
            {
                swapy(&arr[j],&arr[j-1]);
                sorted = false;
            }

            }
        //     cout<<"step :"<<i+1<<"\n";
   //     printy();
 //cout<<"\n";

    }


}

// signal exchange } }

void Bubble_sort::swapy(int*a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void Bubble_sort::reset_n()
 {
     n1=0;
 }
void Bubble_sort::printy ()
{

      for (int j = 0; j < n1; j++)
      {
cout<<arr[j]<<"\t";}
cout<<"\n";
}
void Bubble_sort::push(int value)
{
    arr[ n1 ] = value;
    n1++;
 }
Bubble_sort::~Bubble_sort()
{
    //dtor
}
int Bubble_sort::get_n()
{
    return n1;
}
