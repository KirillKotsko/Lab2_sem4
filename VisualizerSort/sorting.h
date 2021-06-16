/**
*   @file sorting.h
*	@author Kirill Kotsko
*	@version 1.1
*/
#ifndef SORTING_H
#define SORTING_H

#include <QObject>
#include "MementoSorting.h"

/*!
 * @brief Sorting class. Used pattern Factory Method.
 */
class Sorting
{
public:
    /*!
     * @brief constructor
     * @param array
     * @param len
     */
    Sorting(int *array, uint64_t len);
    virtual ~Sorting();

    /*!
     * @brief initilazion
     * @param array
     * @param len
     */
    void init(int *array, uint64_t len);

    /*!
     * @brief check if array sorted
     * @return boolean
     */
    bool sorted();

    /*!
     * @brief step of sorting algo
     */
    virtual void step() = 0;

    /*!
     * @brief sort of sorting algo
     */
    virtual void sort() = 0;
protected:
    /*!
     * @brief array data
     */
    int *array;

    /*!
     * @brief length of array
     */
    uint64_t length;

    /*!
     * @brief finished flag
     */
    bool finished;
    uint64_t I, J;
};

/*!
 * @brief BubbleSort algo
 */
class BubbleSort : public Sorting
{
public:
    BubbleSort(int *array, uint64_t len);
    ~BubbleSort();
    void step();
    void sort();
};

/*!
 * @brief InsertionSort algo
 */
class InsertionSort : public Sorting
{
public:
    InsertionSort(int *array, uint64_t len);
    ~InsertionSort();
    void step();
    void sort();
};

/*!
 * @brief SelectionSort algo
 */
class SelectionSort : public Sorting
{
public:
    SelectionSort(int *array, uint64_t len);
    ~SelectionSort();
    void step();
    void sort();
private:
    uint64_t min;
};

#endif // SORTING_H
