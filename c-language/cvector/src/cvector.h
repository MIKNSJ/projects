/*==============================================================================
||                                                                            ||
||  2024-04-30                                                                ||
||  Purpose: The main outline of the vector library.                          ||
||                                                                            ||
==============================================================================*/



#ifndef cvector_h
#define cvector_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "cvector.h"



/**
 * Define a cvector structure.
*/
struct cvector {
    int *arr;
    size_t size;
    size_t capacity;
};



/**
 * Define a 2D-cvector structure.
*/
struct c2dvector {
    int **arr;
    size_t size;
    size_t capacity;
};



/**
 * Prints out the inputted vector
 * @param vector The vector.
 * @return nothing
*/
void print_vector(struct cvector* vector);



/**
 * Initializes the inputted vector
 * @param vector The vector.
 * @return nothing
*/
void cvector_init(struct cvector* vector);



/**
 * Returns the size of the vector.
 * @param vector The vector.
 * @return The size of the vector.
*/
size_t size(struct cvector* vector);



/**
 * Returns the capacity of the vector.
 * @param vector The vector.
 * @return The capacity of the vector.
*/
size_t capacity(struct cvector* vector);



/**
 * Requests that the vector capacity be at least enough to contain n elements.
 * @param vector The vector.
 * @param new_cap The new capacity.
 * @return nothing
*/
void reserve(struct cvector* vector, size_t new_cap);



/**
 * Checks if the vector is empty.
 * @param vector The vector.
 * @return True, if empty. Otherwise, false.
*/
bool empty(struct cvector* vector);



/**
 * Clears out the entire vector.
 * @param vector The vector.
 * @return nothing
*/
void clear(struct cvector* vector);



/**
 * Adds an item to the end of the list.
 * @param vector The vector.
 * @param value The value to be added.
 * @return nothing
*/
void push_back(struct cvector* vector, int value);



/**
 * Adds an item to the beginning of the list.
 * @param vector The vector.
 * @param value The value to be added.
 * @return nothing
*/
void push_front(struct cvector* vector, int value);



/**
 * Deletes an item from the end of the list.
 * @param vector The vector.
 * @return nothing
*/
void pop_back(struct cvector* vector);



/**
 * Deletes an item from the beginning of the list.
 * @param vector The vector.
 * @return nothing
*/
void pop_front(struct cvector* vector);



/**
 * Inserts an item at the specified index.
 * @param vector The vector.
 * @param value The value to be inserted.
 * @param idx The idx of insertion.
 * @return nothing
*/
void insert(struct cvector* vector, int value, int idx);



/**
 * Deletes an item at the specified index.
 * @param idx The idx of deletion.
 * @return nothing
*/
void erase(struct cvector* vector, int idx);



/**
 * Swaps two vectors together.
 * @param a One vector.
 * @param b Another vector.
 * @return nothing
*/
void swap(struct cvector* a, struct cvector* b);



/**
 * Returns the element at idx of vector.
 * @param vector The vector.
 * @param idx The idx of the item.
 * @return The item.
*/
int at(struct cvector* vector, int idx);



#endif