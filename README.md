# cvector

## Overview
```cvector``` is the implementation of the ```vector``` library from C++ in C. This aims to provide more features than the standard array. Documentation about the C++ vector library can be read [here](https://cplusplus.com/reference/vector/vector/).

## Contents
This section goes over files/folder in the repository.

First, nagivate over to ```dir=src```.
-   ```Makefile```: used to compile the files.
-   ```cvector.c```: implementation of cvector.
-   ```cvector.h```: outline of cvector.
-   ```test.c```: tests the cvector file.
-   ```README.md```: overview of cvector.
-   ```.gitignore```: config file to ignore new generated files (used by any collaborator(s)).

## Setup
In this section, we are assuming that the user has some knowledge of C/C++ and has setup a working environment.

1.  Download/copy ```cvector.h``` and ```cvector.c``` files.
2.  Place the files into your working directory.
3.  Enable cvector features by writing ```#include "cvector.h"``` or the **path of that file** at the top of your ```.c``` file.
4.  Create a cvector structure using ```struct cvector <name>```.
5.  Call cvector functions using ```<name>.<function-name>```.

You can now use features of ```cvector```!

## Functions
This section goes over the avaliable functions for the cvector library.
-   ```cvector```: creates a vector structure with user-defined size and capacity.
-   ```c2dvector```: creates a 2D-vector structure with user-defined size and capacity.
-   ```cvector_init```: initializes the cvector structure with zeroes (calloc).
-   ```print_vector```: prints out the items in the vector.
-   ```size```: returns the size of the vector.
-   ```capacity```: returns the capacity of the vector.
-   ```reserve```: requests that the vector capacity be at least enough to contain n elements.
-   ```empty```: checks if the vector is empty.
-   ```clear```: clears out the entire vector.
-   ```push_back```: adds an item to the end of the list.
-   ```push_front```: adds an item to the beginning of the list.
-   ```pop_back```: deletes an item from the end of the list.
-   ```pop_front```: deletes an item from the beginning of the list.
-   ```insert```: inserts an item at the specified index.
-   ```erase```: deletes an item at the specified index.
-   ```swap```: swaps two vectors together.
-   ```at```: returns the element at idx of vector.

<br>

**Notes**

*We will denote the value ```-1``` as space that is uninitialized. Please refer to the size of the vector in order to determine the valid elements.*

*```reserve```: only increases the vector capacity to a larger amount than it currently is, but not smaller.*

*There is currently no function to decrease a fixed size yet (resize).*

*There is currently no function to decrease a fixed capacity yet (shrink_to_fit).*

*If you prefer to insert/add elements using index/bracket notation, please be sure to not leave any
space uninitialized as this may cause potenial errors.*

## Limitations
This section addresses some features that are not developed yet.

Please NOTE: The vector library is designed around ```int``` values. Other types of data must require the user to change all instances of ```<int> --> <new_data_type>```. This means that there is a chance that the library may not work as intended for the new data type. cvector does NOT support static arrays.

- nth-dimension vector support
- Other data types support
- Other vector functions support
- Max size limit
- Check if memory freed properly

## Tools
This section goes over the tools used for this library.

- gcc 13.2.0 by MSYS2 (UCRT64).