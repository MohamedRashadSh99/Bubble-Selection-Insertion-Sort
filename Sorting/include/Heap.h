#ifndef HEAP_H
#define HEAP_H


class Heap
{
public:
    Heap();
    virtual ~Heap();
    Heap(int);
    void push(int value);
    int pop();
    bool isEmpty();
    bool isFull();
    void printy ();
     void printy2 ();
    int* sorty();
    int  get_n();
    int ask_the_user_for_the_dictionary_file(int valid);
     void reset_n(); int * arr;
protected:

private:
    int n, capacity,copy_n1;

    int * arr_sor;
};

#endif // HEAP_H
