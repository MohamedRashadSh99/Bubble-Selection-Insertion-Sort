#include <iostream>
#include"ins_sort.h"
#include"Heap.h"
#include"mer.h"
#include"selection_sort.h"
#include <time.h>
#include<stdio.h>
#include<stdlib.h>
#include"Bubble_sort.h"
#define wrdlen 48
#include<string>
#include <bits/stdc++.h>
#include <fstream>

using namespace std;
selection_sort s(10000000) ;
Bubble_sort s1(10000000);
ins_sort s2(10000000);

void ask_the_user_for_the_dictionary_file(int choose,char infile[48])
{

    FILE *fRptr;
    int x;
    fRptr = fopen(infile,"r");
    if (fRptr == NULL)
    {
        system("cls");
        printf("\nFile Doesn't exist !!\n\n\n");
        cout<<"\n\nenter your choose for file u want to do operation on it sort on it\n";

        cin>>infile;
        ask_the_user_for_the_dictionary_file(choose,infile);
    }
    else
    {
        cout<<"reading file please wait!!\n\n";
        while(!feof(fRptr))
        {

            fscanf(fRptr,"%d\n",&x);
            //  cout<<x<<"\n";
            if(choose==1)
                s.push(x);
            else if(choose==2)
                s1.push(x);
            else
                s2.push(x);

        }

        clock_t start, endm;
        start = clock();
        double cpu_time_used;



        if(choose==1)
        {
            s1.sorty();
            endm = clock();
            cout<<"count numbers="<<s1.get_n();
        }
        else if(choose==2)
        {
            s.sorty();

            endm = clock();
            cout<<"count numbers="<<s.get_n();
        }
        else
        {
            s2.sorty();

            endm = clock();
            cout<<"count numbers="<<s2.get_n();
        }




    cpu_time_used = ((double) (endm - start))/CLOCKS_PER_SEC ;

    printf("\n\ntime of this sorting \n\n\n%.07lf\n",cpu_time_used);

    fclose(fRptr);

}
}

void new1(int i)
{
char infile[48];
    if(i==1)
        cout<<"enter your choose for file u want to make  bubble sort on it\n\n\n";
    if(i==2)
        cout<<"enter your choose for file u want to make selection sort on it\n\n\n";
    if(i==3)
        cout<<"enter your choose for file u want to make insertion sort on it\n\n\n";

    cin>>infile;
    ask_the_user_for_the_dictionary_file(i,infile);


}

int c1()
{
    int choose1;
    cout<<"1- bubble \n\n"<<"\n"<<"\n";
    cout<<"2- selection \n\n"<<"\n"<<"\n";
    cout<<"3- insertion \n\n"<<"\n"<<"\n";

    cin>>choose1;
    system("cls");
    return choose1;
}

int main()
{

    int choose1;
    choose1=c1();
    new1(choose1);

return 0;

}


