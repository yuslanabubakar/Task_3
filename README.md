# Task_3
## Linked List Introduction
Create a program to store and manage a data using single linear linked list

### list.h
Create ADT of single linked list
* group 1-5 : infotype is school-related data (ex: student, course, book, etc.)
* group 6-11: infotype is compaly-related data (ex: staff, department, building, etc.)
* the infotype (struct list element) must have
  * 1 variable member that can act as an ID
  * at least 4 other variable members
* each group must have different infotype

* define a function to allocate an element list
  * function allocate(in: x : infotype) : address
  
* define insert and delete procedure
  * procedure insertFirst( i/o: L : List, i: P : address )
  * procedure insertLast( i/o: L : List, i: P : address )
  * procedure insertAfter( i/o: L : List, i: P : address, Prec : address )
  * procedure deleteFirst( i/o: L : List, i/o: P : address )
  * procedure deleteLast( i/o: L : List, i/o: P : address )
  * procedure deleteAfter( i/o: L : List, i/o: P : address, Prec : address )

* define search function and view procedure
  * function searchElement( i: L : List, x : infotype ) : address
  * procedure viewList( i: L : List )
  
* for additional point 
* define search function using sentinel
  * function searchSentinel( i: L : List, x : infotype ) : address
* define insertion sort procedure
  * procedure insertionSort( i: L : List )

  
### list.cpp
Implement function and procedure defined in list.h
* In a group of 4: each member is to write 2 functions/procedures

### main.cpp
Create a main menu to run your application <br>
Menu Application:
  1. insert first 
  2. insert after
  3. insert last
  4. delete first
  5. delete after
  6. delete last
  7. view list
  8. search element

  
