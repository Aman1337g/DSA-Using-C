//                                  QUADRATIC PROBING METHOD                              
/* Q- A = 3, 2, 9, 6, 11, 13, 7, 12
   h(k) = 2k+3 , m=10.
   Use division method(h(k(i)) = k(i)%m) and quadratic probing to store these values

Ans- NOTE - Unless stated we use linear probing method by default to minimize collision in open addressing
  
    KEY   |      LOCATION  (u)                               |     PROBES
    3     |      (2*3+3) % m = (2*3+3) % 10 = 9              |      1
    2     |      (2*2+3) % m = (2*2+3) % 10 = 7              |      1
    9     |      (2*9+3) % 10 = 1                            |      1
    6     |      (2*6+3) % 10 = 5                            |      1
    11    |      (2*11+3) % 10 = 5               [COLLISION] |      2
    13    |      (2*13+3) % 10 = 9               [COLLISION] |      2
    7     |      (2*7+3) % 10 = 7                [COLLISION] |      1
    12    |      (2*12+3) % 10 = 7               [COLLISION] |      5        => TOTAL PROBES = 1+1+1+1+2+2+1+5 = 14

Definition for quadratic probing - insert k(i) at first free location from (u+(i^2))/%m where i=0 to (m-1) (we will be moving using some quadratic polynomial)

For example - for k(i) = 11 , (u+(i^2))%m = (5+0)%10 = 5 but this is not free place
                        then, (5+(1^2))%10 = 6 this is free place so 11 is inserted here
            - for k(i) = 13 , (9+(0^2))%10 = 9 but this is not free place
                        then, (9+1^2)%10 = 0 this is free so 13 inserted here
            - for k(i) = 7 , (7+0)%10 = 7 but this is not free place
                        then, (7+1^2)%10 = 8 this is free so 7 inserted here
            - for k(i) = 12 , (7+0)%10 = 7 but this is not free place
                        then, (7+1)%10 = 7 but this is not free place
                        then, (7+2^2)%10 = 1 but this is not free place
                        then, (7+3^2)%10 = 6 but this is not free place
                        then, (7+4^2)%10 = 3 this is free so 12 inserted here

      HASH TABLE

INDEX  |    KEY    
  0    |  13
  1    |    9
  2    |  
  3    |  12
  4    |
  5    |    6
  6    |  11
  7    |    2
  8    |  7
  9    |    3
 
 ORDER OF ELEMENTS = 13,9,_,12,_,6,11,2,7,3  
 - quadratic probing helps to reduce the clustering of elements as encountered in case of linear probing  
*/