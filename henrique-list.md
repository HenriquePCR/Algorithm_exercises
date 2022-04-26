# List of problems separated by topic

All of the exercises below are removed from the [cses](cses.fi) website.
Pretty much if you manage to get most of these, you will be first place on Wednesday, although this is not something
that can be archived easily

## Introductory

- Two knights - [link](https://cses.fi/problemset/task/1072)
  - Try to think of a expanding board, starting always with 1x1, 2x2, ..., nxn.
  - You could ignore `n` entirely and try to apply the logic until `10000`. Since that will be a test case and the
    worse on.

# Sorting and Searching
- Distinct Number - [link](https://cses.fi/problemset/task/1621)
  - There is a structure in the standard library that can eliminate duplicates, not going to say the name but a tip
    would be its types -> `structure_name`<int,bool>.
  - The structure mentioned work on `N * log(N)`, so it wouldn't work on a input bigger than `1e5`.

- Sum of Two Values - [link](https://cses.fi/problemset/task/1640)
  - Since the vector size is `N` and its value its `2 * 1e5`, the bubble sort approach doesn't work. But a `N * log(N)`
    does.
  - Try to think on how to find the two numbers with a sorted array.

- Sum of Three Values - [link](https://cses.fi/problemset/result/603715/)
  - This is a lot more complicated than the previously, but the hard part is to think of the approach while the
    implementation is quite simple.
  - The same as the problem above, try to think of a solution that applies to a sorted array. 
  - One thing different is the size of `n`, notice that is 5000 (`5 * 1e3`), that means that a `O(n^2)` approach can be
    a part of the solution.

- Traffic Lights - [link](https://cses.fi/problemset/task/1163)
  - Find the maximum distance between two traffic lights, after each insertion. This makes the problem very difficult,
    because you can't go though the street since its size is `1e9`.
  - If the limitation are high enough for a problem not to be solved with `O(n)`, then its usually related to binary
    search.
    
## Dynamic Programming

- Dice Combinations - [link](https://cses.fi/problemset/task/1633)
  - There is a good explanation of the logic in the book.

- Minimizing Coins - [link](https://cses.fi/problemset/task/1634)
  - Coins are infinite, so try to go through the biggest coins first and forward. There might be a case where its
    better to take two or more smaller coins instead of a big one.
  - Example: `13 = 7 + 5 + 1`

# Counting Rooms

- Counting Rooms - [link](https://cses.fi/problemset/task/1192)
  - Basic graph problem.
    - The hard path is to mount the graph in the code.
    - After that is just a DFS (deep first search)

# Search Queries

- Static Range Sum Queries - [link](https://cses.fi/problemset/task/1646)
  - The book has a good explanation. The code can be a bit confusing so much be worth to search segtree in
    geeksforgeeks or google.
