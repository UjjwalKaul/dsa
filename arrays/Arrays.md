# Arrays

- Array is a contiguous collection of simillar data elements grouped under one name
- Arrays are vector variables
- Arrays are accessed via index# Arrays

- Array is a contiguous collection of simillar data elements grouped under one name
- Arrays are vector variables
- Arrays are accessed via index

```cpp
int A[5];  // Declaration with garbage values
```

```cpp
int A[5]={2,4,6,8,10}; // Declaration + Initialization
```

```cpp
int A[5]={2,4}; // A={2,4,0,0,0};
```

```cpp
int A[5]={0}; // A={0,0,0,0,0};
```

```cpp
int A[]={1,2,3,4,5,6,7,8}; // Size is inherited
```

```cpp
//Array Traversal
int A[5]={2,5,4,9,8};

for(int i=0;i<5;i++){
   printf("%d ",A[i]); // Prints 2 5 4 9 8
}

for(int i:A){
   printf("%d ",i); // Prints 2 5 4 9 8
}

```

# Arrray ADT

## Data

- Array space
- Size
- Length (No. of elements)

## List of Operations

- Display
- Add / Append
- Insert to index
- Delete from index
- Search x
- Set index
- Max / Min
- Reverse
- Shift / Rotate

## Types of Search

Takes an element and returns the index of an element if present in the array
Improving Techniques:
Transposition is the swapping an element with the previous when found to make the next search more efficient
Move to Front/Head is the swapping an element with the 1st element when found to make the next search more efficient

- Linear Search [O(n)]
- Binary Search
