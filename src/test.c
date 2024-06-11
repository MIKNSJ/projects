/*==============================================================================
||                                                                            ||
||  2024-04-30                                                                ||
||  Purpose: Tests the implmentation of the vector library.                    ||
||                                                                            ||
==============================================================================*/



#include "cvector.h"



/**
 * Tests the cvector initialization method.
 * @return nothing
*/
void test_cinit() {
    printf("========== test_cinit() ==========\n");
    struct cvector null_vec = {NULL, 0, 0};
    struct cvector empty_vec = {malloc(0 * sizeof(int)), 0, 0};
    struct cvector fixed_vec = {malloc(5 * sizeof(int)), 5, 5};

    cvector_init(&null_vec);
    print_vector(&null_vec);
    printf("Size: %lld\n", size(&null_vec));
    printf("Capacity: %lld\n\n", capacity(&null_vec));

    cvector_init(&empty_vec);
    print_vector(&empty_vec);
    printf("Size: %lld\n", size(&empty_vec));
    printf("Capacity: %lld\n\n", capacity(&empty_vec));

    cvector_init(&fixed_vec);
    print_vector(&fixed_vec);
    printf("Size: %lld\n", size(&fixed_vec));
    printf("Capacity: %lld\n\n", capacity(&fixed_vec));
    printf("\n\n");

    free(null_vec.arr);
    free(empty_vec.arr);
    free(fixed_vec.arr);
}


/**
 * Tests the print vector method.
 * @return nothing
*/
void test_print_vector() {
    printf("========== test_print_vector() ==========\n");
    struct cvector null_vec = {NULL, 0, 0};
    struct cvector empty_vec = {malloc(0 * sizeof(int)), 0, 0};
    struct cvector fixed_vec = {malloc(5 * sizeof(int)), 5, 5};
    fixed_vec.arr[0] = 1;
    fixed_vec.arr[1] = 2;
    fixed_vec.arr[2] = 3;
    fixed_vec.arr[3] = 4;
    fixed_vec.arr[4] = 5;

    print_vector(&null_vec);
    printf("Size: %lld\n", size(&null_vec));
    printf("Capacity: %lld\n\n", capacity(&null_vec));
    print_vector(&empty_vec);
    printf("Size: %lld\n", size(&empty_vec));
    printf("Capacity: %lld\n\n", capacity(&empty_vec));
    print_vector(&fixed_vec);
    printf("Size: %lld\n", size(&fixed_vec));
    printf("Capacity: %lld\n\n", capacity(&fixed_vec));
    printf("\n\n");

    free(null_vec.arr);
    free(empty_vec.arr);
    free(fixed_vec.arr);
}



/**
 * Tests the push back method.
*/
void test_push_back() {
    printf("========== test_push_back() ==========\n");
    struct cvector null_vec = {NULL, 0, 0};
    cvector_init(&null_vec);
    struct cvector empty_vec = {malloc(0 * sizeof(int)), 0, 0};
    cvector_init(&empty_vec);
    struct cvector half_vec = {malloc(5 * sizeof(int)), 3, 5};
    cvector_init(&half_vec);
    half_vec.arr[0] = 1;
    half_vec.arr[1] = 2;
    half_vec.arr[2] = 3;
    struct cvector fixed_vec = {malloc(5 * sizeof(int)), 5, 5};
    cvector_init(&fixed_vec);
    fixed_vec.arr[0] = 1;
    fixed_vec.arr[1] = 2;
    fixed_vec.arr[2] = 3;
    fixed_vec.arr[3] = 4;
    fixed_vec.arr[4] = 5;

    push_back(&null_vec, 1);
    push_back(&empty_vec, 1);
    push_back(&half_vec, 4);
    push_back(&fixed_vec, 6);

    print_vector(&null_vec);
    printf("Size: %lld\n", size(&null_vec));
    printf("Capacity: %lld\n\n", capacity(&null_vec));
    print_vector(&empty_vec);
    printf("Size: %lld\n", size(&empty_vec));
    printf("Capacity: %lld\n\n", capacity(&empty_vec));
    print_vector(&half_vec);
    printf("Size: %lld\n", size(&half_vec));
    printf("Capacity: %lld\n\n", capacity(&half_vec));
    print_vector(&fixed_vec);
    printf("Size: %lld\n", size(&fixed_vec));
    printf("Capacity: %lld\n\n", capacity(&fixed_vec));
    printf("\n\n");

    free(null_vec.arr);
    free(empty_vec.arr);
    free(half_vec.arr);
    free(fixed_vec.arr);
}



/**
 * Tests the clear method.
*/
void test_clear() {
    printf("========== test_clear() ==========\n");
    struct cvector null_vec = {NULL, 0, 0};
    cvector_init(&null_vec);
    struct cvector empty_vec = {malloc(0 * sizeof(int)), 0, 0};
    cvector_init(&empty_vec);
    struct cvector fixed_vec = {malloc(5 * sizeof(int)), 5, 5};
    cvector_init(&fixed_vec);
    fixed_vec.arr[0] = 1;
    fixed_vec.arr[1] = 2;
    fixed_vec.arr[2] = 3;
    fixed_vec.arr[3] = 4;
    fixed_vec.arr[4] = 5;

    clear(&null_vec);
    clear(&empty_vec);
    clear(&fixed_vec);

    print_vector(&null_vec);
    print_vector(&empty_vec);
    print_vector(&fixed_vec);
    printf("Size: %lld\n", size(&fixed_vec));
    printf("Capacity: %lld\n\n", capacity(&fixed_vec));
    printf("\n\n");

    free(null_vec.arr);
    free(empty_vec.arr);
    free(fixed_vec.arr);
}



/**
 * Tests the empty method
*/
void test_empty() {
    printf("========== test_empty() ==========\n");
    struct cvector null_vec = {NULL, 0, 0};
    cvector_init(&null_vec);
    struct cvector empty_vec = {malloc(0 * sizeof(int)), 0, 0};
    cvector_init(&empty_vec);
    struct cvector fixed_vec = {malloc(5 * sizeof(int)), 5, 5};
    cvector_init(&fixed_vec);
    fixed_vec.arr[0] = 1;
    fixed_vec.arr[1] = 2;
    fixed_vec.arr[2] = 3;
    fixed_vec.arr[3] = 4;
    fixed_vec.arr[4] = 5;

    printf("%d\n", empty(&null_vec));
    printf("%d\n", empty(&empty_vec));
    printf("%d\n", empty(&fixed_vec));
    printf("\n\n");
}



/**
 * Tests the reserve method
*/
void test_reserve() {
    printf("========== test_reserve() ==========\n");
    struct cvector null_vec = {NULL, 0, 0};
    cvector_init(&null_vec);
    struct cvector empty_vec = {malloc(0 * sizeof(int)), 0, 0};
    cvector_init(&empty_vec);
    struct cvector half_vec = {malloc(5 * sizeof(int)), 3, 5};
    cvector_init(&half_vec);
    half_vec.arr[0] = 1;
    half_vec.arr[1] = 2;
    half_vec.arr[2] = 3;
    struct cvector fixed_vec = {malloc(5 * sizeof(int)), 5, 5};
    cvector_init(&fixed_vec);
    fixed_vec.arr[0] = 1;
    fixed_vec.arr[1] = 2;
    fixed_vec.arr[2] = 3;
    fixed_vec.arr[3] = 4;
    fixed_vec.arr[4] = 5;

    reserve(&null_vec, null_vec.capacity);
    printf("Size: %lld\n", size(&null_vec));
    printf("Capacity: %lld\n\n", capacity(&null_vec));

    reserve(&empty_vec, empty_vec.capacity);
    printf("Size: %lld\n", size(&empty_vec));
    printf("Capacity: %lld\n\n", capacity(&empty_vec));

    reserve(&half_vec, 10);
    print_vector(&half_vec);
    printf("Size: %lld\n", size(&half_vec));
    printf("Capacity: %lld\n\n", capacity(&half_vec));

    reserve(&fixed_vec, 100);
    printf("Size: %lld\n", size(&fixed_vec));
    printf("Capacity: %lld\n\n", capacity(&fixed_vec));
    printf("\n\n");

    free(null_vec.arr);
    free(empty_vec.arr);
    free(fixed_vec.arr);
}



/**
 * Tests the pop back method.
*/
void test_pop_back() {
    printf("========== test_pop_back() ==========\n");
    struct cvector null_vec = {NULL, 0, 0};
    cvector_init(&null_vec);
    struct cvector empty_vec = {malloc(0 * sizeof(int)), 0, 0};
    cvector_init(&empty_vec);
    struct cvector half_vec = {malloc(5 * sizeof(int)), 3, 5};
    cvector_init(&half_vec);
    half_vec.arr[0] = 1;
    half_vec.arr[1] = 2;
    half_vec.arr[2] = 3;
    struct cvector fixed_vec = {malloc(5 * sizeof(int)), 5, 5};
    cvector_init(&fixed_vec);
    fixed_vec.arr[0] = 1;
    fixed_vec.arr[1] = 2;
    fixed_vec.arr[2] = 3;
    fixed_vec.arr[3] = 4;
    fixed_vec.arr[4] = 5;

    pop_back(&null_vec);
    pop_back(&empty_vec);
    pop_back(&half_vec);
    pop_back(&fixed_vec);

    print_vector(&null_vec);
    printf("Size: %lld\n", size(&null_vec));
    printf("Capacity: %lld\n\n", capacity(&null_vec));
    print_vector(&empty_vec);
    printf("Size: %lld\n", size(&empty_vec));
    printf("Capacity: %lld\n\n", capacity(&empty_vec));
    print_vector(&half_vec);
    printf("Size: %lld\n", size(&half_vec));
    printf("Capacity: %lld\n\n", capacity(&half_vec));
    print_vector(&fixed_vec);
    printf("Size: %lld\n", size(&fixed_vec));
    printf("Capacity: %lld\n\n", capacity(&fixed_vec));
    printf("\n\n");

    free(null_vec.arr);
    free(empty_vec.arr);
    free(half_vec.arr);
    free(fixed_vec.arr);
}



/**
 * Tests the insert method.
*/
void test_insert() {
    printf("========== test_insert() ==========\n");
    struct cvector null_vec = {NULL, 0, 0};
    cvector_init(&null_vec);
    struct cvector empty_vec = {malloc(0 * sizeof(int)), 0, 0};
    cvector_init(&empty_vec);
    struct cvector half_vec = {malloc(5 * sizeof(int)), 3, 5};
    cvector_init(&half_vec);
    half_vec.arr[0] = 1;
    half_vec.arr[1] = 2;
    half_vec.arr[2] = 3;
    struct cvector fixed_vec = {malloc(5 * sizeof(int)), 5, 5};
    cvector_init(&fixed_vec);
    fixed_vec.arr[0] = 1;
    fixed_vec.arr[1] = 2;
    fixed_vec.arr[2] = 3;
    fixed_vec.arr[3] = 4;
    fixed_vec.arr[4] = 5;

    insert(&null_vec, 1, 1);
    insert(&empty_vec, 1, 1);
    insert(&empty_vec, 1, -1);
    insert(&empty_vec, 1, 0);
    insert(&half_vec, 7, 4);
    insert(&fixed_vec, 10, 4);
    insert(&fixed_vec, 60, 0);
    insert(&fixed_vec, 99, 7);
    printf("\n");

    print_vector(&null_vec);
    printf("Size: %lld\n", size(&null_vec));
    printf("Capacity: %lld\n\n", capacity(&null_vec));
    print_vector(&empty_vec);
    printf("Size: %lld\n", size(&empty_vec));
    printf("Capacity: %lld\n\n", capacity(&empty_vec));
    print_vector(&half_vec);
    printf("Size: %lld\n", size(&half_vec));
    printf("Capacity: %lld\n\n", capacity(&half_vec));
    print_vector(&fixed_vec);
    printf("Size: %lld\n", size(&fixed_vec));
    printf("Capacity: %lld\n\n", capacity(&fixed_vec));
    printf("\n\n");

    free(null_vec.arr);
    free(empty_vec.arr);
    free(half_vec.arr);
    free(fixed_vec.arr);
}



/**
 * Tests the erase method.
*/
void test_erase() {
    printf("========== test_erase() ==========\n");
    struct cvector null_vec = {NULL, 0, 0};
    cvector_init(&null_vec);
    struct cvector empty_vec = {malloc(0 * sizeof(int)), 0, 0};
    cvector_init(&empty_vec);
    struct cvector half_vec = {malloc(5 * sizeof(int)), 3, 5};
    cvector_init(&half_vec);
    half_vec.arr[0] = 1;
    half_vec.arr[1] = 2;
    half_vec.arr[2] = 3;
    struct cvector fixed_vec = {malloc(5 * sizeof(int)), 5, 5};
    cvector_init(&fixed_vec);
    fixed_vec.arr[0] = 1;
    fixed_vec.arr[1] = 2;
    fixed_vec.arr[2] = 3;
    fixed_vec.arr[3] = 4;
    fixed_vec.arr[4] = 5;

    erase(&null_vec, 0);
    erase(&empty_vec, 1);
    erase(&empty_vec, -1);
    erase(&empty_vec, 0);
    erase(&half_vec, 3);
    erase(&half_vec, 0);
    erase(&fixed_vec, 4);
    printf("\n");

    print_vector(&null_vec);
    printf("Size: %lld\n", size(&null_vec));
    printf("Capacity: %lld\n\n", capacity(&null_vec));
    print_vector(&empty_vec);
    printf("Size: %lld\n", size(&empty_vec));
    printf("Capacity: %lld\n\n", capacity(&empty_vec));
    print_vector(&half_vec);
    printf("Size: %lld\n", size(&half_vec));
    printf("Capacity: %lld\n\n", capacity(&half_vec));
    print_vector(&fixed_vec);
    printf("Size: %lld\n", size(&fixed_vec));
    printf("Capacity: %lld\n\n", capacity(&fixed_vec));
    printf("\n\n");

    free(null_vec.arr);
    free(empty_vec.arr);
    free(half_vec.arr);
    free(fixed_vec.arr);
}



/**
 * Tests the swap method.
*/
void test_swap() {
    printf("========== test_swap() ==========\n");
    struct cvector null_vec = {NULL, 0, 0};
    struct cvector empty_vec = {malloc(0 * sizeof(int)), 0, 0};
    struct cvector fixed_vec = {malloc(5 * sizeof(int)), 5, 5};
    fixed_vec.arr[0] = 1;
    fixed_vec.arr[1] = 2;
    fixed_vec.arr[2] = 3;
    fixed_vec.arr[3] = 4;
    fixed_vec.arr[4] = 5;

    swap(&null_vec, &empty_vec);
    swap(&empty_vec, &fixed_vec);

    print_vector(&null_vec);
    printf("Size: %lld\n", size(&null_vec));
    printf("Capacity: %lld\n\n", capacity(&null_vec));
    print_vector(&empty_vec);
    printf("Size: %lld\n", size(&empty_vec));
    printf("Capacity: %lld\n\n", capacity(&empty_vec));
    print_vector(&fixed_vec);
    printf("Size: %lld\n", size(&fixed_vec));
    printf("Capacity: %lld\n\n", capacity(&fixed_vec));
    printf("\n\n");

    free(null_vec.arr);
    free(empty_vec.arr);
    free(fixed_vec.arr);
}



/**
 * Tests the push front method.
*/
void test_push_front() {
    printf("========== test_push_front() ==========\n");
    struct cvector null_vec = {NULL, 0, 0};
    cvector_init(&null_vec);
    struct cvector empty_vec = {malloc(0 * sizeof(int)), 0, 0};
    cvector_init(&empty_vec);
    struct cvector half_vec = {malloc(5 * sizeof(int)), 3, 5};
    cvector_init(&half_vec);
    half_vec.arr[0] = 1;
    half_vec.arr[1] = 2;
    half_vec.arr[2] = 3;
    struct cvector fixed_vec = {malloc(5 * sizeof(int)), 5, 5};
    cvector_init(&fixed_vec);
    fixed_vec.arr[0] = 1;
    fixed_vec.arr[1] = 2;
    fixed_vec.arr[2] = 3;
    fixed_vec.arr[3] = 4;
    fixed_vec.arr[4] = 5;

    push_front(&null_vec, 1);
    push_front(&empty_vec, 1);
    push_front(&half_vec, 4);
    push_front(&fixed_vec, 6);

    print_vector(&null_vec);
    printf("Size: %lld\n", size(&null_vec));
    printf("Capacity: %lld\n\n", capacity(&null_vec));
    print_vector(&empty_vec);
    printf("Size: %lld\n", size(&empty_vec));
    printf("Capacity: %lld\n\n", capacity(&empty_vec));
    print_vector(&half_vec);
    printf("Size: %lld\n", size(&half_vec));
    printf("Capacity: %lld\n\n", capacity(&half_vec));
    print_vector(&fixed_vec);
    printf("Size: %lld\n", size(&fixed_vec));
    printf("Capacity: %lld\n\n", capacity(&fixed_vec));
    printf("\n\n");

    free(null_vec.arr);
    free(empty_vec.arr);
    free(half_vec.arr);
    free(fixed_vec.arr);
}



/**
 * Tests the pop front method.
*/
void test_pop_front() {
    printf("========== test_pop_front() ==========\n");
    struct cvector null_vec = {NULL, 0, 0};
    cvector_init(&null_vec);
    struct cvector empty_vec = {malloc(0 * sizeof(int)), 0, 0};
    cvector_init(&empty_vec);
    struct cvector half_vec = {malloc(5 * sizeof(int)), 3, 5};
    cvector_init(&half_vec);
    half_vec.arr[0] = 1;
    half_vec.arr[1] = 2;
    half_vec.arr[2] = 3;
    struct cvector fixed_vec = {malloc(5 * sizeof(int)), 5, 5};
    cvector_init(&fixed_vec);
    fixed_vec.arr[0] = 1;
    fixed_vec.arr[1] = 2;
    fixed_vec.arr[2] = 3;
    fixed_vec.arr[3] = 4;
    fixed_vec.arr[4] = 5;

    pop_front(&null_vec);
    pop_front(&empty_vec);
    pop_front(&half_vec);
    pop_front(&fixed_vec);

    print_vector(&null_vec);
    printf("Size: %lld\n", size(&null_vec));
    printf("Capacity: %lld\n\n", capacity(&null_vec));
    print_vector(&empty_vec);
    printf("Size: %lld\n", size(&empty_vec));
    printf("Capacity: %lld\n\n", capacity(&empty_vec));
    print_vector(&half_vec);
    printf("Size: %lld\n", size(&half_vec));
    printf("Capacity: %lld\n\n", capacity(&half_vec));
    print_vector(&fixed_vec);
    printf("Size: %lld\n", size(&fixed_vec));
    printf("Capacity: %lld\n\n", capacity(&fixed_vec));
    printf("\n\n");

    free(null_vec.arr);
    free(empty_vec.arr);
    free(half_vec.arr);
    free(fixed_vec.arr);
}



/**
 * Tests the at method.
*/
void test_at() {
    printf("========== test_pop_front() ==========\n");
    struct cvector fixed_vec = {malloc(5 * sizeof(int)), 5, 5};
    fixed_vec.arr[0] = 1;
    fixed_vec.arr[1] = 2;
    fixed_vec.arr[2] = 3;
    fixed_vec.arr[3] = 4;
    fixed_vec.arr[4] = 5;

    printf("%d\n", at(&fixed_vec, 0));
    printf("%d\n", at(&fixed_vec, 1));
    printf("%d\n", at(&fixed_vec, 2));
    printf("%d\n", at(&fixed_vec, 3));
    printf("%d", at(&fixed_vec, 4));

    free(fixed_vec.arr);
}



/**
 * The main function
 * @return 0 for success, 1 otherwise
*/
int main() {
    /* struct cvector null_vec = {NULL, 0};
    struct cvector empty_vec = {malloc(0 * sizeof(int)), 0};
    struct cvector fixed_vec = {malloc(5 * sizeof(int)), 5};
    fixed_vec.arr[0] = 1;
    fixed_vec.arr[1] = 2;
    fixed_vec.arr[2] = 3;
    fixed_vec.arr[3] = 4;
    fixed_vec.arr[4] = 5; */

    //test_cinit();
    //test_print_vector();
    //test_push_back();
    //test_clear();
    //test_empty();
    //test_reserve();
    //test_pop_back();
    //test_insert();
    test_erase();
    //test_swap();
    //test_push_front();
    test_pop_front();
    //test_at();

    return 0;
}