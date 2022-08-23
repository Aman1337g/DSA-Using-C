/*                      REPRESENTATION OF GRAPH IN COMPUTER

                        2-----3
                       /|    / |
                     1/ |   /  |
                      \ |  /   |      [Pictorial  view of Graph]
                       \| /____5
                        4

    Two most popular ways-

    1. Adjacency Matrix -> It is a matrix A[n][n] where n is no. of edges
                            a[i][j] = 1 , if i and j are adjacent
                                    = 0 , otherwise

        here, A[5][5]  =  i -->      1    2   3   4   5
                                   [                    ]
                          j  1     | 0    1   0   1   0 |     
                          |  2     | 1    0   1   1   0 |
                         \ / 3     | 0    1   0   1   1 |
                          .  4     | 1    1   1   0   1 |
                             5     | 0    0   1   1   0 |
                                   [                    ]

        Space complexity here, theta(n^2)

    2. Adjacency List -> Here for each vertex we will maintain a linked list               
       __
    1 |__| -> |2| | -> |4| |
 
    2 |__| -> |1| | -> |3| | -> |4| |

    3 |__| -> |2| | -> |4| | -> |5| |

    4 |__| -> |1| | -> |2| | -> |3| | -> |5| |

    5 |__| -> |3| | -> |4| |

        Space complexity here, theta(n + 2*e) , 2*e because we have added edges two times , eg.- 2 to 1 and 1 to 2 etc.

    -> For a dense graph better to use adjacency matrix to represent it [DENSE GRAPH = every node is connected with each other]
    -> For a sparse graph better to use adjacency list to represent it  [SPARSE GRAPH = few no. of edges in graph]
*/