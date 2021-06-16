#include "test.h"

template <class T>
void swaP(T &a, T &b)
{
    T c;
    c = a;
    a = b;
    b = c;
}

template <class T>
void bubble_sort(T array[], uint64_t len)
{
    for (uint64_t i = 0; i < len; i++)
        for (uint64_t j = 0; j < len - 1 - i; j++)
            if (array[j] > array[j+1])
                swaP(array[j], array[j+1]);
}

template <class T>
void insertion_sort(T array[], uint64_t len)
{
    for (uint64_t i = 1; i < len; i++)
        for (uint64_t j = i; j > 0 && array[j-1] > array[j]; j--)
            swaP(array[j-1], array[j]);
}

template <class T>
void selection_sort(T array[], uint64_t len)
{
    for (uint64_t i = 0; i < len - 1; i++)
    {
        uint64_t min = i;
        for (uint64_t j = i+1; j < len; j++)
        {
            if (array[j] < array[min])
                min = j;
        }
        swaP(array[i], array[min]);
    }
}

void TestSortingAlgo(){
    {
        int a[8] = {6,4,5,1,3,8,7,2};
        int b[8] = {1,2,3,4,5,6,7,8};
        bubble_sort(a,8);
        for (int i=0; i<8; i++) ASSERT_EQUAL(a[i], b[i]);
    }
    {
        int a[8] = {6,4,5,1,3,8,7,2};
        int b[8] = {1,2,3,4,5,6,7,8};
        insertion_sort(a,8);
        for (int i=0; i<8; i++) ASSERT_EQUAL(a[i], b[i]);
    }
    {
        int a[8] = {6,4,5,1,3,8,7,2};
        int b[8] = {1,2,3,4,5,6,7,8};
        selection_sort(a,8);
        for (int i=0; i<8; i++) ASSERT_EQUAL(a[i], b[i]);
    }
    {
        int a[7] = {3, 4, 10, 2, 15, 13, 4};
        int b[7] = {2, 3, 4, 4, 10, 13, 15};
        bubble_sort(a,7);
        for (int i=0; i<7; i++) ASSERT_EQUAL(a[i], b[i]);
    }
    {
        int a[7] = {3, 4, 10, 2, 15, 13, 4};
        int b[7] = {2, 3, 4, 4, 10, 13, 15};
        insertion_sort(a,7);
        for (int i=0; i<7; i++) ASSERT_EQUAL(a[i], b[i]);
    }
    {
        int a[7] = {3, 4, 10, 2, 15, 13, 4};
        int b[7] = {2, 3, 4, 4, 10, 13, 15};
        selection_sort(a,7);
        for (int i=0; i<7; i++) ASSERT_EQUAL(a[i], b[i]);
    }
    {
        int a[11] = {4, 4, 5, 4, 4, 4, 4, 4, 4, 4, 4};
        int b[11] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5};
        bubble_sort(a,11);
        for (int i=0; i<11; i++) ASSERT_EQUAL(a[i], b[i]);
    }
    {
        int a[11] = {4, 4, 5, 4, 4, 4, 4, 4, 4, 4, 4};
        int b[11] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5};
        insertion_sort(a,11);
        for (int i=0; i<11; i++) ASSERT_EQUAL(a[i], b[i]);
    }
    {
        int a[11] = {4, 4, 5, 4, 4, 4, 4, 4, 4, 4, 4};
        int b[11] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5};
        selection_sort(a,11);
        for (int i=0; i<11; i++) ASSERT_EQUAL(a[i], b[i]);
    }
}
