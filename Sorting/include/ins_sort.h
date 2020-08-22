#ifndef INS_SORT_H
#define INS_SORT_H


class ins_sort
{
    public:
        ins_sort();
        virtual ~ins_sort();
        ins_sort(int);
        void sorty();
        void swapy(int*a,int*b);
        void printy ();
        void push(int value);
        int ask_the_user_for_the_dictionary_file(int valid);
         void reset_n();
         int  get_n();
         int*arra;
    protected:

    private:int n1, capacity;
};

#endif // INS_SORT_H
