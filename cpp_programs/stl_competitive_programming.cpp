/**********************************************************
* STL stands for Standard Template Library which contains *
* generic classes and functions such as, sort, search etc *
* STL is used to reuse well-tested components and save t- *
* ime.  It is composed of containers, algorithms, and it- *
* erators.                                                *
*                                                         *
* Containers store data and use template classes to store *
* different types of data (int, float, char).             *
*                                                         *
* Algorithms are a set of instructions to perform an ope- *
* ration such as, sorting, searching, etc through templa- *
* te classes.                                             *
*                                                         *
* STLs are used because it is not a good idea to reinvent *
* the wheel.                                              *
*                                                         *
* Iterators are objects that point to an element in a co- *
* ntainer.  They are handled just like pointers.  They c- *
* onnect data containers to algorithms and play a critic- *
* al role.                                                *
*                                                         *
* ------------------------------------------------------- *
*                                                         *
* Containers are of three types:                          *
* ___Sequence Containers_________________________________ *
* These store data in linear fashion, for e.g., vector,   *
* list, dequeue.                                          *
*                                                         *
* ___Associative Containers______________________________ *
* Designed so as to provide faster access (direct access) *
* to elements. Eg map, multimap, set multiset, etc.  Data *
* stored in a tree-like structure.                        *
*                                                         *
* ___Derived Containers__________________________________ *
* Can be derived from sequence or associative containers. *
* Real world modelling is good.  Eg stack, queue, priori- *
* ity_queue.                                              *
*                                                         *
* ------------------------------------------------------- *
*                                                         *
* **Sequence Containers********************************** *
* Vector: Random Access is fast, however, insertion and   *
* deletion is slow as in an array, all elements need to   *
* be shifted.  Insertion at the end is fast.              *
*                                                         *
* List: Random access is slow because each element is on- *
* ly linked to one element.  Much like linked list, where *
* elements in the list are not contiguous, and hence, sl- *
* ower random access.  Insertion in middle and end is fast*
*                                                         *
* **Associatve Containers******************************** *
* All operations are fast except random access.           *
*                                                         *
* **Derived Containers*********************************** *
* Depends. Can be looked through Data Structures.         *
**********************************************************/