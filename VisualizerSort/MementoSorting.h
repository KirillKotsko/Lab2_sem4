/**
*   @file mementosorting.h
*	@author Kirill Kotsko
*	@version 1.1
*/
#ifndef MEMENTOSORTING_H
#define MEMENTOSORTING_H
#include <vector>
#include <string>
#include <iostream>

using namespace std;

    /*!
    * @brief Memento of sorting. Template struct to union numbers and their marks
    *
    * Used a pattern - memento.
    */
    template<typename T>
    struct MementoSorting
    {
        std::vector<T> array;/*!< Array of numbers */
        std::vector<bool> marks;/*!< Marks of numbers in array */
        /*!
        *   @brief Sets array and create marks with false
        */
        MementoSorting(const std::vector<T>& array);
        /*!
        *   @brief Changes marks to true from begin to end
        *
        *   If these indexes is incorrect then do nothing.
        *   @param begin - index of begin item
        *   @param end - index of end item
        */
        void set_mark(std::size_t begin, std::size_t end);
        /*!
        * @brief Changes marks[index] to true
        *
        * @param index - index of item
        */
        void set_mark(std::size_t index);
    };

    template<typename T>
    MementoSorting<T>::MementoSorting(const std::vector<T>& array):
        array{array}
    {
        marks = std::vector<bool>(array.size(),false);
    }
    template<typename T>
    void MementoSorting<T>::set_mark(std::size_t begin, std::size_t end)
    {
        if(begin >= marks.size() || end >=marks.size() || begin == end) return;
        for(std::size_t i = begin; i <= end; i++)
                marks[i] = true;
    }
    template<typename T>
    void MementoSorting<T>::set_mark(std::size_t index)
    {
        if(index < marks.size())
        {
            marks[index] = true;
        }
    }

#endif // MEMENTOSORTING_H
