/*
                                Graph Traversals

        - There are two types of graph traversals -
                1. BFS (Breadth First Search)
                2. DFS (Depth Frist Search)


                        0------1\
                        |    / |\ \5
                        |   /  | \/
                        |  /   | /\     [Pictorial  view of Graph]
                        3 /____2/  \    [UNDIRECTED GRAPH]
                         \     /    \
                          \   /      \
                           \ /        \
                            4----------6

        1. BFS Traversal - You can take any node as the root node.
                - For BFS traversal QUEUE (FIFO) data structure is used.

        RESULT -
        - Suppose we take '0' as the root node.
        - Now , all the adjacent vertices of '0' will be traversed first. eg - adjacent to '0' here are 1 and 3.
          So, we can visit either '1' or '3' after '0'.
        - Now , this process is repeated taking care of the adjacent and unvisited nodes. All the adjacent vertices are written
          are inserted in the queue.

        > NOTE : Finding out of ALL adjacent nodes is also called EXPLORATION of that node.

        Queue
                1.   |   0(x)|   1   |   3   |       |       |       |       |  put (x)[cross-mark] if visited , and write it in the result
        RESULT-      |   0   |       |       |       |       |       |       |  Adjacent to 0 -> 1, 3. We can put '1' and '3' in any order in the queue.

                2.   |   0(x)|   1(x)|   3   |   2   |   5   |   6   |       |  Now , '1' is visited. Adjacent and unvisited vertices of '1' are inserted in
        RESULT-      |   0   |   1   |       |       |       |       |       |  in the queue. 1 -> 0, 2, 3, 5, 6. But 0, 3 are visited (not-inserted)

                3.   |   0(x)|   1(x)|   3(x)|   2   |   5   |   6   |   4   |  Now , '3' is visited. 3 -> 0, 1, 2, 4. Out of which 0, 1 are visited already,
        RESULT-      |   0   |   1   |   3   |       |       |       |       |  '2' is already present in the queue.

                4.   |   0(x)|   1(x)|   3(x)|   2(x)|   5   |   6   |   4   |  Now , '2' is visited. 2 -> 1, 3, 5, 4. Out of which 1, 3 are already visited,
        RESULT-      |   0   |   1   |   3   |   2   |       |       |       |  5, 4 are already present in the queue.

        Similary, for subsequent nodes their adjacent vertices are either already visited or are present in the queue. So, finally

        RESULT-      |   0   |   1   |   3   |   2   |   5   |   6   |   4   |

        - This is not the only BFS traversal of this graph, there are numerous valid BFS traversals of this graph depending on the
          order of insertion of adjacent nodes and root node selected.



---------------------------------------------------------------------------------------------------------------------------------------------------------------------------

                        0------1\
                        |    / |\ \5
                        |   /  | \/
                        |  /   | /\     [Pictorial  view of Graph]
                        3 /____2/  \    [UNDIRECTED GRAPH]
                         \     /    \
                          \   /      \
                           \ /        \
                            4----------6


        2. DFS Traversal - You can take any node as the root node.
                - For DFS traversal STACK (LIFO) data structure is used.

        RESULT -
        - Suppose we take '0' as the root node.
        - In DFS traversal , we go into DEPTH of the graph.
        - Unlike inserting all the adjacent and non-visited nodes [in BFS], in DFS we only insert ANY ONE of the adjacent and non-visited node
          into the stack and after reaching the DEAD-END we bactrack.

        Stack
        1.                      |       |       0 -> 1, 3. Suppose we take '1' from either of '1' and '3'. Now , '1' is
                                |       |            printed and pushed into the stack.
                                |       |
                                |       |       RESULT - 0, 1
                                |       |
                                |   1   |
                                |   0   |
                                ---------

        Stack
        2.                      |       |       1 -> 3, 2, 6, 5. Suppose we take '3'. Now , '3' is
                                |       |            printed and pushed into the stack.
                                |       |
                                |       |       RESULT - 0, 1, 3
                                |   3   |
                                |   1   |
                                |   0   |
                                ---------

        Stack
        3.                      |       |       3 -> 0, 1, 2, 4. Here 0, 1 are already visited. Suppose we take '2' from either of '2' and '4'. Now , '2' is
                                |       |            printed and pushed into the stack.
                                |       |
                                |   2   |       RESULT - 0, 1, 3, 2
                                |   3   |
                                |   1   |
                                |   0   |
                                ---------

        Stack
        4.                      |       |       2 -> 1, 5, 4, 3. Here 1, 3 are alredy visited. Suppose we take '4'. Now , '4' is
                                |       |            printed and pushed into the stack.
                                |   4   |
                                |   2   |       RESULT - 0, 1, 3, 2, 4
                                |   3   |
                                |   1   |
                                |   0   |
                                ---------

        Stack
        5.                      |       |       4 -> 2, 3, 6. Here 2, 3 are already visited. So we take '6'. Now , '6' is
                                |   6   |            printed and pushed into the stack.
                                |   4   |
                                |   2   |       RESULT - 0, 1, 3, 2, 4, 6
                                |   3   |
                                |   1   |       Now, after '6' there is no adjacent and non-visited node of '6'. Reached DEAD-END.
                                |   0   |       Now, backtrcak for any missing node.
                                ---------

        BACKTRACKING STARTS

        Stack
        6.                      |       |       Now, Top-most element (6)here is popped out. Backtrack.
                                |       |       Now, next top elment is '4'.
                                |       |       Now, check if '4' has any adjacent unvisited vertex. 4 -> 3, 2, 6 are already visited.
                                |   2   |       So, '4' will be popped out of the stack. Backtrack to '2'.
                                |   3   |
                                |   1   |       RESULT - 0, 1, 3, 2, 4, 6
                                |   0   |
                                ---------

        Stack
        7.                      |       |       Now, Top-most element (2) has '5' as adjacent unvisited vertex.
                                |       |       So, '5' will be printed and pushed into the stack
                                |   5   |
                                |   2   |       RESULT - 0, 1, 3, 2, 4, 6, 5
                                |   3   |
                                |   1   |
                                |   0   |
                                ---------

        Stack
        8.                      |       |       Now, Top-most element (6)here is popped out. Backtrack.
                                |       |       Now, next top elment is '4'.
                                |   5   |       Now, check if '4' has any adjacent unvisited vertex. 4 -> 3, 2, 6 are already visited.
                                |   2   |       So, '4' will be popped out of the stack. Backtrack to '2'.
                                |   3   |
                                |   1   |       RESULT - 0, 1, 3, 2, 4, 6, 5
                                |   0   |
                                ---------

        Stack
        9.                      |       |       Now, Top-most element (5)
                                |       |       5 -> 1, 2 are already visited. Backtrack
                                |   5   |       So, '5' will be popped out of the stack. Backtrack to '2'.
                                |   2   |       RESULT - 0, 1, 3, 2, 4, 6, 5
                                |   3   |
                                |   1   |
                                |   0   |
                                ---------

        Stack
        10.                     |       |       Now, Top-most element (2). 2 -> has no adjacent unvisted vertex. Backtrack
                                |       |       Now, next top elment is '3'.
                                |       |       Now, check if '3' has any adjacent unvisited vertex. 3 -> 0, 1, 2, 4 are already visited.
                                |       |       So, '3' will be popped out of the stack. Backtrack to '1'.
                                |   3   |
                                |   1   |       RESULT - 0, 1, 3, 2, 4, 6, 5
                                |   0   |
                                ---------

        Stack
        11.                     |       |       Now, Top-most element (1). 1 -> has no adjacent unvisted vertex. Backtrack
                                |       |       Now, next top elment is '0'.
                                |       |       Now, check if '0' has any adjacent unvisited vertex. 0 -> 1, 3 are already visited.
                                |       |       So, '0' will be popped out of the stack. Backtrack to '1'.
                                |       |
                                |       |       RESULT - 0, 1, 3, 2, 4, 6, 5
                                |       |
                                ---------

        Now, the stack is EMPTY , this is the indication where we have to stop the DFS traversal.
        So , DFS traversal of the given graph
        RESULT - 0, 1, 3, 2, 4, 6, 5

        - Here , also this is not the only DFS traversal of this graph, there are numerous valid DFS traversals of this graph depending on the
          order of insertion of adjacent node and root node selected.

*/