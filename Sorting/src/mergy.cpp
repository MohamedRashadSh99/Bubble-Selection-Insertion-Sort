#include "mergy.h"
#include <iostream>
#include <malloc.h>
#include <string>
#include <bits/stdc++.h>
#include <fstream>
#define wrdlen 48
using namespace std;



mergy::~mergy()
{
    //dtor
}

mergy::mergy(int c)
{
    capacity=c;
    arra=(int*)malloc((capacity+1) *sizeof(int));
    n=0;
    l=0;
   i1=0;
}

void mergy::push(int value)
{
    arra[ n ] = value;
    n++;
    r=n;
}

void mergy::reset_n()
{
    n=0;
}
void mergy::printy ()
{

    for (int j = 0; j < n; j++)
    {
        cout<<arra[j]<<"\t";
    }
    cout<<"\n";
}

void mergy::Merge(int arr[], int l, int m, int r)
{

    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
     i1++;
}
int  mergy::get_n(){
    return n;
}

void mergy::sortm()
{
    sorty(arra,0,n-1);
}
void mergy::sorty(int arr[],int l ,int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        sorty(arra, l, m);
        sorty(arra, m+1, r);

        Merge(arra, l, m, r);

    }
}
