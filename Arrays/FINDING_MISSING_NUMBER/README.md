# Finding Missing Elements in an Array (C)

This project demonstrates different approaches to finding missing elements in arrays using the C programming language.

## Implemented Approaches

### 1. Single Missing Element in a Sorted Array (Starting from 1)

Finds the missing element in a sorted array where the sequence starts from `1`.

**Example**

Input:
```text
1 2 3 5 6 7 8 9
```

Output:
```text
Missing element: 4
```

**Time Complexity:** `O(n)`  
**Space Complexity:** `O(1)`

---

### 2. Single Missing Element in a Sorted Array (Not Starting from 1)

Uses the difference between the array value and its index to determine the missing element.

**Example**

Input:
```text
6 7 8 10 11 12 13 14
```

Output:
```text
Missing element: 9
```

**Time Complexity:** `O(n)`  
**Space Complexity:** `O(1)`

---

### 3. Missing Elements in an Unsorted Array Using Hashing

Uses a hash array to identify missing elements in an unsorted array.

**Example**

Input:
```text
7 2 5 3 6
```

Output:
```text
Missing elements: 0 1 4
```

**Time Complexity:** `O(n)`  
**Space Complexity:** `O(n)`

---

## Concepts Used

- Arrays
- Array Traversal
- Index-Based Logic
- Hashing
- Time Complexity Analysis

## Technologies

- Language: C
- Compiler: GCC (or any standard C compiler)

## How to Compile

```bash
gcc missing_elements.c -o missing_elements
```

## How to Run

### Windows

```bash
missing_elements.exe
```

### Linux / macOS

```bash
./missing_elements
```

## Future Improvements

- Find multiple missing elements in sorted arrays.
- Implement a binary search approach for sorted arrays.
- Convert each approach into separate functions for better code organization.
- Accept user input instead of using hardcoded arrays.

## Author

Created as part of my Data Structures and Algorithms (DSA) practice in C.
