//                                 HASHING
// It is a type of Searching Technique. Using hashing the searching of data takes constant time O(1).
// Time taken in worst case linear search is O(n) and for binary search is O(log(n)), where n = number of keys stored in the data structure
// For searching to take constant time or is independent of 'n' , we use hashing.
// In this technique we use some hash tables and hash functions.
// m = size of hash table
/*
Methods to calculate hash function - 
1. Division method 
2. Folding method 
3. Mid-square method
4. Modulo-multiplication method
*/ 

/*
if key, k(i) = 6,26.
m(size of hash table) = 10
// DIVISION METHOD
h(k(i)) = k(i) % m [HASH FUNCTION]

then k(1) = 6 , h(k(1)) = 6%10 = 6 => 6 will be stored at index 6 in the hash table
and k(2) = 26 , h(k(2)) = 26%10 = 6 => but 6 is already stored at index 6 of the hash table [COLLISION OCCURS]
*/

/* To resolve collision we have some techniques
                         TYPES OF HASHING 
    1. Open hashing (closed addressing) - seperate chaining method.
    2. Closed hashing (open addressing) - linear probing, quadratic probing, double hashing.
 // We cannot remove the collision, we can only minimize it
*/

//                                  SEPERATE CHAINING METHOD                              
/* Q- A = 3, 2, 9, 6, 11, 13, 7, 12
   h(k) = 2k+3 , m=10.
   Use division method(h(k(i)) = k(i)%m) and closed addressing(seperate chaining method) to store these values

Ans = If h(k) = 2k+3 has not been given then we had used division method h(k(i)) = k(i)%m to store the values, here we will do it in this way
      KEY    |      LOCATION
       3     |      (2*3+3) % m = (2*3+3) % 10 = 9
       2     |      (2*2+3) % m = (2*2+3) % 10 = 7 
       9     |      (2*9+3) % 10 = 1 
       6     |      (2*6+3) % 10 = 5 
       11    |      (2*11+3) % 10 = 5                  [COLLISION] 
       13    |      (2*13+3) % 10 = 9                  [COLLISION]  
       7     |      (2*7+3) % 10 = 7                   [COLLISION]
       12    |      (2*12+3) % 10 = 7                  [COLLISION]

In closed addressing(seperate chaining mehod) , here first collision occured for keys 6, 11 so a linked list containing keys 6 and 11 is created at index 5 in the hash table and similarly for subsequent collisions

      HASH TABLE

INDEX  |    KEY
  0    |
  1    |    9
  2    |
  3    |
  4    |
  5    |    6<->11
  6    |
  7    |    2<->7<->12
  8    |
  9    |    3<->13
*/


//                                  LINEAR PROBING METHOD                              
/* Q- A = 3, 2, 9, 6, 11, 13, 7, 12
   h(k) = 2k+3 , m=10.
   Use division method(h(k(i)) = k(i)%m) and OPEN addressing(linear probing, quadratic probing, double hashing) to store these values

Ans- Unless stated we use linear probing method by default to minimize collision in open addressing
  
    KEY   |      LOCATION  (u)                               |     PROBES
    3     |      (2*3+3) % m = (2*3+3) % 10 = 9              |      1
    2     |      (2*2+3) % m = (2*2+3) % 10 = 7              |      1
    9     |      (2*9+3) % 10 = 1                            |      1
    6     |      (2*6+3) % 10 = 5                            |      1
    11    |      (2*11+3) % 10 = 5               [COLLISION] |      2
    13    |      (2*13+3) % 10 = 9               [COLLISION] |      2
    7     |      (2*7+3) % 10 = 7                [COLLISION] |      1
    12    |      (2*12+3) % 10 = 7               [COLLISION] |      6        => TOTAL PROBES = 1+1+1+1+2+2+1+6 = 15

In open addressing (linear probing method) , synonym for probing is 'to search' means here we are linearly probing the hash table and filling values in the empty places
Definition - insert k(i) at first free location from (u+i)/%m where i=0 to (m-1)

For example - for k(i) = 11 , (u+i)%m = (5+0)%10 = 5 but this is not free place
                        then, (5+1)%10 = 6 this is free place so 11 is inserted here 

      HASH TABLE

INDEX  |    KEY    
  0    |  13
  1    |    9
  2    |  12
  3    |
  4    |
  5    |    6
  6    |  11
  7    |    2
  8    |  7
  9    |    3
 
 ORDER OF ELEMENTS = 13,9,12,_,_,6,11,2,7,3    
*/