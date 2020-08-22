#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

using namespace std;

class selection_sort
{
    public:
        selection_sort();
        selection_sort(int);
        virtual ~selection_sort();
        void sorty();
        void swapy(int*a,int*b);
        void printy ();
        void push(int value);
        int ask_the_user_for_the_dictionary_file(int valid);
        void reset_n();
        int get_n();
        int * arra;

    protected:

    private:
        int  capacity;int n1;
};

#endif // SELECTION_SORT_H
