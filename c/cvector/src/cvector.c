/*==============================================================================
||                                                                            ||
||  2024-04-30                                                                ||
||  Purpose: The main implementation of the vector library.                   ||
||                                                                            ||
==============================================================================*/



#include "cvector.h"



/**
 * Prints out the inputted vector
 * @param vector The vector.
 * @return nothing
*/
void print_vector(struct cvector* vector) {
    if (vector->arr == NULL) {
        fprintf(stderr,
            "[print_vector() ERROR]: The vector is not initialized.\n");
        return;
    }

    printf("[");
    for (size_t i = 0; i < (size_t)vector->capacity; i++) {
        printf("%d", *(vector->arr + i));

        if (i < vector->capacity - 1) {
            printf(" ");
        }
    }
    printf("]\n");
}



/**
 * Initializes the inputted vector
 * @param vector The vector.
 * @return nothing
*/
void cvector_init(struct cvector* vector) {
    if (vector->arr == NULL) {
        fprintf(stderr,
            "[cvector_init() ERROR]: The vector cannot be NULL.\n");
        return;
    }

    for (size_t i = 0; i < vector->capacity; i++) {
        *(vector->arr + i) = -1;
    }
}



/**
 * Returns the size of the vector.
 * NOTE: "return (*vector).size" is the same thing
 * @param vector The vector.
 * @return The size of the vector.
*/
size_t size(struct cvector* vector) {
    if (vector->arr == NULL) {
        fprintf(stderr, "[size() ERROR]: The vector is not initialized.\n");
        return -1;
    }

    return vector->size;
}



/**
 * Returns the capacity of the vector.
 * @param vector The vector.
 * @return The capacity of the vector.
*/
size_t capacity(struct cvector* vector) {
    if (vector->arr == NULL) {
        fprintf(stderr, "[capacity() ERROR]: The vector is not initialized.\n");
        return -1;
    }

    return vector->capacity;
}



/**
 * Requests that the vector capacity be at least enough to contain n elements.
 * @param vector The vector.
 * @param new_cap The new capacity.
 * @return nothing
*/
void reserve(struct cvector* vector, size_t new_cap) {
    if (vector->arr == NULL) {
        fprintf(stderr, "[reserve() ERROR]: The vector is not initialized.\n");
        return;
    }

    if (vector->capacity > new_cap) {
       fprintf(stderr,
        "[reserve() ERROR]: Capacity is less then requested. \n");
        return; 
    } else if (vector->capacity == new_cap) {
        return;
    } else {
        int *re_cap = realloc(vector->arr, new_cap * sizeof(int));

        if (re_cap == NULL) {
            fprintf(stderr,
                "[realloc ERROR]: The vector reallocation failed. \n");
            return;
        } 

        for (size_t i = vector->size; i < (size_t)new_cap; i++) {
            *(re_cap + i) = -1;
        }

        vector->arr = re_cap;
        vector->capacity = new_cap;
    }
}



/**
 * Checks if the vector is empty.
 * NOTE: Instead of bool, int can be used.
 * @param vector The vector.
 * @return True, if empty. Otherwise, false.
*/
bool empty(struct cvector* vector) {
    if (vector->arr == NULL) {
        fprintf(stderr, "[empty() ERROR]: The vector is not initialized.\n");
        return true;
    }

    if (vector->size == 0) {
        return true;
    }
    
    return false;
}



/**
 * Clears out the entire vector.
 * @param vector The vector.
 * @return nothing
*/
void clear(struct cvector* vector) {
    if (vector->arr == NULL) {
        fprintf(stderr, "[clear() ERROR]: The vector is not initialized.\n");
        return;
    } else if (vector->size == 0) {
        return;
    } else {
        free(vector->arr);
        vector->arr = malloc(vector->size * sizeof(int));
        cvector_init(vector);
        vector->size = 0;
    }
}



/**
 * Adds an item to the end of the list.
 * @param vector The vector.
 * @param value The value to be added.
 * @return nothing
*/
void push_back(struct cvector* vector, int value) {
    if (vector->arr == NULL) {
        fprintf(stderr,
            "[push_back() ERROR]: The vector is not initialized.\n");
        return;
    }

    if (vector->size == vector->capacity) {
        reserve(vector, vector->capacity + 1);
    }

    *(vector->arr + vector->size) = value;
    ++vector->size;
}



/**
 * Adds an item to the beginning of the list.
 * @param vector The vector.
 * @param value The value to be added.
 * @return nothing
*/
void push_front(struct cvector* vector, int value) {
    if (vector->arr == NULL) {
        fprintf(stderr,
            "[push_front() ERROR]: The vector is not initialized.\n");
        return;
    }

    insert(vector, value, 0);
}



/**
 * Deletes an item from the end of the list.
 * @param vector The vector.
 * @return nothing
*/
void pop_back(struct cvector* vector) {
    if (vector->arr == NULL) {
        fprintf(stderr,
            "[pop_back() ERROR]: The vector is not initialized.\n");
        return;
    } else if (vector->size == 0) {
        return;
    } else {
        int* new_vec = malloc(vector->capacity * sizeof(int));

        for (size_t i = 0; i < (size_t)vector->capacity; i++) {
            if (i < vector->size - 1) {
                *(new_vec + i) = *(vector->arr + i);
            } else {
                *(new_vec + i) = -1;
            }
        }

        free(vector->arr);
        vector->arr = new_vec;
        --vector->size;
    }
}



/**
 * Deletes an item from the beginning of the list.
 * @param vector The vector.
 * @return nothing
*/
void pop_front(struct cvector* vector) {
    if (vector->arr == NULL) {
        fprintf(stderr,
            "[pop_front() ERROR]: The vector is not initialized.\n");
        return;
    }

    erase(vector, 0);
}



/**
 * Inserts an item at the specified index
 * @param vector The vector.
 * @param idx The idx of insertion.
 * @return nothing
*/
void insert(struct cvector* vector, int value, int idx) {
    if (vector->arr == NULL) {
        fprintf(stderr,
            "[insert() ERROR]: The vector is not initialized.\n");
        return;
    }

    if (idx < 0 || idx > (int)vector->capacity ||
        (vector->size != vector->capacity && idx > (int)vector->size)) {
        fprintf(stderr,
            "[insert() ERROR]: Idx is out of bounds or no valid element.\n");
        return;
    }

    if (vector->size == vector->capacity) {
        reserve(vector, vector->capacity + 1);
    }

    int old_val;
    int new_val = value;
    for (size_t i = idx; i < (size_t)vector->capacity; i++) {
        old_val = *(vector->arr + i);
        *(vector->arr + i) = new_val;
        new_val = old_val;
    }

    ++vector->size;
}



/**
 * Deletes an item at the specified index.
 * @param idx The idx of deletion.
 * @return nothing
*/
void erase(struct cvector* vector, int idx) {
    if (vector->arr == NULL) {
        fprintf(stderr,
            "[erase() ERROR]: The vector is not initialized.\n");
        return;
    }

    if (idx < 0 || idx > (int)vector->size - 1) {
        fprintf(stderr,
            "[erase() ERROR]: Idx is out of bounds or no valid element.\n");
        return;
    }

    if (idx == (int)vector->size - 1) {
        pop_back(vector);
        return;
    }

    int new_val;
    for (size_t i = idx; i < (size_t)vector->capacity; i++) {
        if (i < (size_t)vector->size - 1) {
            new_val = *(vector->arr + i + 1);
            *(vector->arr + i) = new_val;
        } else {
            *(vector->arr + i) = -1;
        }
    }

    --vector->size;
}



/**
 * Swaps two vectors together.
 * @param a One vector.
 * @param b Another vector.
 * @return nothing
*/
void swap(struct cvector* a, struct cvector* b) {
    if (a->arr == NULL || b->arr == NULL) {
        fprintf(stderr,
            "[swap() ERROR]: At least one vector is not initialized.\n");
        return;
    }

    struct cvector hold = *a;
    *a = *b;
    *b = hold;
}



/**
 * Returns the element at idx of vector.
 * @param vector The vector.
 * @param idx The idx of the item.
 * @return The item or -1 if it does not exist.
*/
int at(struct cvector* vector, int idx) {
    if (idx < 0 || idx > (int)vector->size - 1) {
        fprintf(stderr,
            "[at() ERROR]: Idx is out of bounds.\n");
        return -1;
    }
    
    return *(vector->arr + idx);
}
