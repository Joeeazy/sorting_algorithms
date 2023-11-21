# C - Sorting algorithms & Big O

# General
* At least four different sorting algorithms
  * Bubble Sort:
  Overview: Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.

  Time Complexity: O(n^2) in the worst case.

  Space Complexity: O(1) as it requires only a constant amount of additional memoryy

  * Merge Sort:

  Overview: Merge Sort is a divide and conquer algorithm that divides the input array into two halves, recursively sorts each half, and then merges the sorted halves.

  Time Complexity: O(n log n) in the worst case.

  Space Complexity: O(n) as it requires additional space for the merging step.

  * Quick Sort:

  Overview: Quick Sort is another divide and conquer algorithm that partitions the array into two smaller sub-arrays, and then recursively sorts the sub-arrays.

  Time Complexity: O(n^2) in the worst case, but O(n log n) on average. The choice of the pivot can affect performance.

  Space Complexity: O(log n) for the recursive call stack.

  * Heap Sort:

  Overview: Heap Sort is based on the heap data structure. It first builds a max-heap from the input array, then repeatedly extracts the maximum element from the heap and rebuilds the heap.

  Time Complexity: O(n log n) in the worst case.

  Space Complexity: O(1) as it sorts the array in-place.


* What is the Big O notation, and how to evaluate the time complexity of an algorithm
  * Big O notation is a metric used to determine the efficiency of an algorithm by estimating how long the code will run on different sets of inputs and measuring how effectively the code scales as the size     of the input increases. 

  * It represents an algorithm's worst-case complexity and uses algebraic terms to describe the complexity of an algorithm. Big O notation measures the efficiency and performance of an algorithm using time a    nd space complexity. 

  * Time complexity refers to the amount of time an algorithm takes to run when the input tends towards a specific or limiting value. 

  * It calculates the time taken to execute each code statement in an algorithm. Big O notation allows programmers to classify algorithms depending on how their run time or space requirements vary as the inp    ut size varies.

  * The Big O notation is represented with syntax like O(n), where the value between the parentheses expresses the function's complexity in terms of n.

  * There are six major types of complexities: constant (O(1)  ), linear time (O(n)), logarithmic time (O(n log n)), quadratic time (O(n^2)), exponential time (O(2^n)), and factorial time (O(n!).

  * To evaluate the time complexity of an algorithm, one needs to figure out what the input is and what n represents, express the maximum number of operations the algorithm performs in terms of n, eliminate     all but the highest order terms, and remove all constant factors.
* How to select the best sorting algorithm for a given input
  * To select the best sorting algorithm for a given input, several factors need to be considered, including the size of the data set, the type of data being sorted, and the desired time and space complexit.

  * Here are some guidelines based on the provided search results:
  
  * Quicksort: It is one of the most efficient sorting algorithms and is generally considered the "fastest" sorting algorithm for most inputs.

  * Bubble Sort: It works well with large datasets where the items are almost sorted and is fastest on an extremely small or nearly sorted set of data.
  
  * Insertion Sort: It is suitable for small arrays (i.e., fewer than 10-20 elements).
  
  * Selection Sort: It is useful when memory space is limited because it makes the minimum possible number of swaps during sorting.
 
  * Other Considerations: The best choice of sorting algorithm also depends on the distribution of the data, available memory, and the desired time complexity.

  * In summary, the best sorting algorithm depends on various factors such as the size of the input data, the distribution of the data, the available memory, and the desired time complexity
    For small arrays, insertion sort or selection sort may be faster, while for larger datasets, quicksort, bubble sort, or other algorithms may be more suitable

* What is a stable sorting algorithm
  * A stable sorting algorithm is one that maintains the relative order of equal elements in the sorted output. In other words, if two elements have the same key value, they will appear in the same order in     the sorted list as they did in the input list
  
  * This is important when the order of equal elements matters, such as in cases where the data represents people, and equal elements represent individuals with the same name.
    
  * Some common stable sorting algorithms include:
    * Bubble Sort
    * Insertion Sort
    * Merge Sort
    * Counting Sort
    * Timsort (a variation of Quicksort)

  * On the other hand, some sorting algorithms are unstable, meaning they do not maintain the relative order of equal elements. Examples of unstable sorting algorithms are:
    * Quicksort
    * Heap Sort
    * Selection Sort

  * Unstable sorting algorithms can be modified to become stable by considering the position of the elements in addition to their keys. For example, Quicksort and Heap Sort can be made stable by taking t        he position of the elements into account when comparing keys.

# REFERENCES

[All about sorting algorithms](https://intranet.alxswe.com/rltoken/21X_eaj5RGcLIL9mZv2sqw)

[Big O notation](https://intranet.alxswe.com/rltoken/WRvrE2BaNVQFssHiUATTrw)

