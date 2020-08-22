#include "Heap.h"
#include<malloc.h>
#include<math.h>
#include <iostream>
#include<string>
#include <bits/stdc++.h>
#include <fstream>
#define wrdlen 48
using namespace std;
Heap::Heap()
{
    //ctor
}

Heap::Heap(int c)
{
    // keeps blocks powers of 2
    capacity=pow(2,ceil(log2 (c+1))) -1;
    arr=(int*)malloc((capacity+1) *sizeof(int));
    n=0;
}

 bool Heap::isEmpty()
 {
     if(n==0)
        return true;
     else
        return false;

 }
    bool Heap:: isFull()
     {
     if(n==capacity)
        return true;
     else
        return false;

 }

void Heap::push(int value)
{ int i;n++;
arr[0]=n;
for(i=n; arr[i/2] < value && i>1; i/=2 )
    arr[ i ] = arr[ i / 2 ];
arr[ i ] = value;
copy_n1=n; }


int Heap::pop()
 { int last=arr[n--],i, child=1;
 arr[0]=n;
 int retValue=arr[1];
  for( i = 1; i * 2 <= n; i = child )
    { child = i * 2;
if(child != n && arr[child+1]>arr[child])
    child++;

/* Percolate one level */
 if( last<arr[child])
   { arr[i]=arr[child];}
 else  break; }
 arr[ i ] = last;
  return retValue; }

void Heap::printy ()
{
      for (int j = 0; j <=n; j++)
cout<<arr[j]<<"\t";
cout<<"\n";
}
 void Heap::printy2 ()
{
      for (int j = 0; j <copy_n1; j++)
cout<<arr_sor[j]<<"\t";
cout<<"\n";
}
int* Heap::sorty()
{
    arr_sor=(int*)malloc((copy_n1) *sizeof(int));

         for (int i=1;i<=copy_n1;i++)
        {

            arr_sor[i-1]=pop();

        }

}

void Heap::reset_n()
 {
     n=0;
 }
Heap::~Heap()
{
    //dtor
}
int Heap::get_n()
{
    return copy_n1;
}
/*
}

Heap::~Heap()*/
