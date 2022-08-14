//                                  DOUBLE HASHING METHOD                              
/* Q- A = 3, 2, 9, 6, 11, 13, 7, 12
   h1(k) = 2k+3 , m=10.
   Use division method(h(k(i)) = k(i)%m) and DOUBLE HASHING to store these values where h2(k) = 3k+1

Ans- NOTE - Unless stated we use linear probing method by default to minimize collision in open addressing
    Definition for quadratic probing - insert k(i) at first free location from (u+(v*i))/%m where i=0 to (m-1) and v = [h2(k)%m] = [(2*k+1)%10] (HERE)
    We apply h2(k) only when collision is happening
  
    KEY   |      LOCATION  (u)                               |   PROBES  |   v = [h2(k)%m] = (3*k+1)%10
    3     |      (2*3+3) % m = (2*3+3) % 10 = 9              |    1      |   _
    2     |      (2*2+3) % m = (2*2+3) % 10 = 7              |    1      |   _
    9     |      (2*9+3) % 10 = 1                            |    1      |   _
    6     |      (2*6+3) % 10 = 5                            |    1      |   _
    11    |      (2*11+3) % 10 = 5               [COLLISION] |    3      |   4
    13    |      (2*13+3) % 10 = 9               [COLLISION] |    x      |   0
    7     |      (2*7+3) % 10 = 7                [COLLISION] |    x      |   2
    12    |      (2*12+3) % 10 = 7               [COLLISION] |    2      |   7
  
   => TOTAL PROBES = 1+1+1+1+3+2 = 9

For example - for k(i) = 11 , (u+(v*i))%m = (5+(4*0))%10 = 5 but this is not free place
                        then, (5+(4*1))%10 = 9 but this is not free place
                        then, (5+(4*2))%10 = 3 this is free place so 11 is inserted here

            - for k(i) = 13 , (9+(0*0))%10 = 9 but this is not free place
                        then, (9+0*0)%10 = 9 but this is not free place
                        similarly for all other values of i , (u+(v*i))/%m will come 9 so 13 will not be inserted in the hash table

            - for k(i) = 7 , (7+2*0)%10 = 7 but this is not free place
                        then, (7+2*1)%10 = 9 but this is not free place
                        then, (7+2*2)%10 = 1 but this is not free place
                        then, (7+2*3)%10 = 3 but this is not free place
                        then, (7+2*4)%10 = 5 but this is not free place
                        then, (7+2*5)%10 = 7 but this is not free place
                        then, (7+2*6)%10 = 9 but this is not free place
                        then, (7+2*7)%10 = 1 but this is not free place
                        then, (7+2*8)%10 = 3 but this is not free place
                        then, (7+2*9)%10 = 5 but this is not free place
            as we have checked for all the possible value of i from 1 to 9 , 7 will not be inserted in the hash table

            - for k(i) = 12 , (7+7*0)%10 = 7 but this is not free place
                        then, (7+7*1)%10 = 4 this is free place so 12 is inserted here

      HASH TABLE

INDEX  |    KEY    
  0    |  
  1    |    9
  2    |  
  3    |  11
  4    |  12
  5    |    6
  6    |  
  7    |    2
  8    |  
  9    |    3
 
 ORDER OF ELEMENTS = _,9,_,11,12,6,_,2,_,3  
 - quadratic probing helps to reduce the clustering of elements as encountered in case of linear probing  
*/