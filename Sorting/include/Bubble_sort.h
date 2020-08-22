#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H


class Bubble_sort
{
    public:
        Bubble_sort();
        virtual ~Bubble_sort();
          void sorty();
          Bubble_sort(int);
        void swapy(int*a,int*b);
        void printy ();
        void push(int value);
        int  get_n();
        int ask_the_user_for_the_dictionary_file(int valid);
         void reset_n();int*arr;
    protected:

    private:int capacity;int n1;
};

#endif // BUBBLE_SORT_H
