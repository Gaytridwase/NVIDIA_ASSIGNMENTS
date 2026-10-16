Complexity Analysis 

## 1. Bubble sort - 
Bubble sort repeatedly compares adjacent elements and swaps them if they are in the wrong order. After each pass, the largest unsorted element moves to its correct position.

## Time and space complexity

            Case                                            Time Complexity	              
1.Best Case (Array is already sorted)	                          O(n)	                  
2.Average Case (Array elements are in random order)	              O(n^2)	               
3.Worst Case(Array is sorted in reverse order)                    O(n^2)	                
4.Auxiliary Space                                                 O(1)	   

## Properties
Stable: Yes - equal elements maintain their relative order because we swap only when arr[j] > arr[j+1].
In-place: Yes - sorting happens in the original array without requiring another array.
Adaptive: Yes - if optimized with a swapped flag — it stops early when the array is already sorted.
Recursion Stack: O(1) — Bubble Sort is iterative and does not use recursion.

## Why these complexities?
Best case - O(n): The algorithm makes one pass, finds no swaps,and stops.
Average case - O(n^2): It performs multiple passes, comparing adjacent elements.
Worst case - O(n^2): A reverse-sorted array requires the maximum number of comparisons and swaps.

## 2. Insertion sort
How it works: Insertion Sort takes one element at a time and inserts it into its correct position in the already-sorted part of the array.

## Time and Space Complexity

               Case	                                     Time Complexity	
1. Best Case(Array is already sorted)	                       O(n)	
2. Average Case(Array elements are in random order)	           O(n^2)	
3. Worst Case(Array is sorted in reverse order)                O(n^2)	
4. Auxiliary Space	                                           O(1)

## Properties
Stable: Yes-equal elements maintain their relative order because we shift elements only when arr[j] > key.
In-place: Yes - sorting happens in the original array without requiring another array.
Adaptive: Yes - it performs efficiently when the array is already or nearly sorted.
Recursion Stack: O(1) - Insertion Sort is iterative and does not use recursion.

## Why these complexities?
Best case — O(n): Each element is compared with the previous element once, and no shifting is required.
Average case — O(n^2): Elements may require multiple comparisons and shifts to reach their correct positions.
Worst case — O(n^2): In a reverse-sorted array, each new element must be shifted past all previously processed elements.

## 3. Selection sort
How it works: Selection Sort repeatedly finds the smallest element from the unsorted part of the array and swaps it with the first element of that unsorted part.

## Time and Space Complexity
             Case	                                 Time Complexity
1. Best Case(Array is already sorted)	                  O(n^2)	
2. Average Case(Array elements are in random order)	      O(n^2)	
3. Worst Case(Array is sorted in reverse order)	          O(n^2)
4. Auxiliary Space	                                      O(1)

## Properties
Stable: No — the standard implementation may change the relative order of equal elements because of swapping.
In-place: Yes — sorting happens in the original array without requiring another array.
Adaptive: No — it performs the same number of comparisons even if the array is already sorted.
Recursion Stack: O(1) - Selection Sort is iterative and does not use recursion.

## Why these complexities?
Best case — O(n^2): Even if the array is already sorted, the algorithm searches the remaining unsorted part to find the minimum.
Average case — O(n^2): It compares each element with the remaining unsorted elements.
Worst case — O(n^2): It still performs the same number of comparisons, regardless of the initial order of the array.

## 4. Merge sort 
How it works - Merge Sort uses the Divide and Conquer technique. It divides the array into smaller halves, sorts them recursively, and then merges the sorted halves.

## Time and Space Complexity
                Case	                                      Time Complexity	
1. Best Case(Array is already sorted)	                         O(n log n)	
2. Average Case(Array elements are in random order)	             O(n log n)	
3. Worst Case(Array is sorted in reverse order)	                 O(n log n)	
4. Auxiliary Space(A temporary array is used during merging)	    O(n)	
5. Recursion Stack(The array is repeatedly divided into halves)	  O(log n)	

## Properties
Stable: Yes - if equal elements from the left half are selected first during merging, their relative order is preserved.
In-place: No - the standard array implementation requires an additional temporary array.
Adaptive: No - the standard implementation performs the same asymptotic work even if the array is already sorted.
Recursion Stack: O(log n) - the maximum recursion depth is logarithmic because the array is divided in half at each level.

## Why these complexities?
Best case — O(n log n): The array is divided into approximately log n levels, and merging processes n elements per level.
Average case — O(n log n): The divide-and-conquer process and merging work remain asymptotically the same.
Worst case — O(n log n): Even for reverse-sorted input, the algorithm continues dividing and merging the array.

## 5. Quick Sort
How it works: Quick Sort uses the Divide and Conquer technique. It selects a pivot element, partitions the array so that smaller elements come before the pivot and larger elements come after it, and then recursively sorts the two partitions.

## Time and Space Complexity
Case	
1. Best Case - O(n log n)	
(The pivot divides the array into roughly equal halves at each step)	
2. Average Case - O(n log n)	
(The partitions are reasonably balanced on average)
3. Worst Case - O(n^2)	
The pivot repeatedly produces highly unbalanced partitions, such as one empty partition and one containing n − 1 elements.
4. Auxiliary Space	- O(log n) average; O(n) worst case	Space is used by recursive calls
Partitioning Space - O(1)	
Standard in-place partitioning uses only a few extra variables

## Properties
Stable: No - the standard implementation may change the relative order of equal elements during partitioning
In-place: Yes - standard Quick Sort partitions the original array without requiring another array
Adaptive: No - standard Quick Sort does not automatically become linear-time when the array is already sorted
Recursion Stack: O(log n) on average and O(n) in the worst case

## Why these complexities?
Best case — O(n log n): The pivot divides the array into approximately equal halves. There are O(log n) levels, with O(n) work per level.
Average case — O(n log n): The partitions are reasonably balanced on average.
Worst case — O(n²): Each pivot creates highly unbalanced partitions. For example, with an already sorted array and the first element chosen as the pivot, one partition may contain n − 1 elements and the other may be empty.

## Big-O, Big-Omega and Big-Theta

## Big-O - O(n^2) - Worst-case upper bound	
Quick Sort takes at most quadratic time in the worst case
## Big-Omega — Ω(n log n)
General lower bound	Comparison-based Quick Sort requires at least Ω(n log n) time in the best case
## Big-Theta — Θ(n log n)	
Tight bound for balanced partitions	When partitions are consistently balanced,the running time is Θ(n log n)

## Linear Search 
How it works: Linear Search checks each element one by one until the target element is found or the array ends.

## Time and Space Complexity
                Case	                             Time Complexity	
1. Best Case(Target is the first element)	              O(1)	
2. Average Case                                           O(n)
(Target is generally located somewhere in the middle,
assuming a uniformly distributed target in the array)	
3. worst Case                                             O(n)
(Target is the last element or is absent from the array)
4. Auxiliary Space	                                      O(1)	

## Properties
Stable: Not applicable — stability is generally a property of sorting algorithms.
In-place: Yes, in the sense that it searches the original array without requiring extra storage.
Adaptive: Not generally classified as adaptive; its performance depends on the target's position.
Recursion Stack: O(1) for the iterative implementation.

## Why these complexities?
Best case — O(1): The target is found in the first comparison.
Average case — O(n): The algorithm may check approximately half the elements on average.
Worst case — O(n): Every element may need to be checked.

## 7. Binary Search

How it works: Binary Search finds an element by repeatedly dividing the search range into half. It compares the target with the middle element and eliminates the half where the target cannot exist.
Binary Search requires the array to be sorted.

## Time and Space Complexity
1. Best Case - O(1)	
Target is the middle element in the first comparison.
2. Average Case - O(log n)	
Target is found after several halvings of the search range.
3. Worst Case - O(log n)	
Target is absent or found after the maximum number of halvings.
4. Auxiliary Space (Iterative) - O(1)	
Only a few variables are used.
5. Auxiliary Space (Recursive) - O(log n)	
Recursive calls use stack space.

## Properties
Stable: Not applicable — stability is generally a property of sorting algorithms.
In-place: Yes, for the standard iterative implementation.
Adaptive: No — standard Binary Search does not automatically become faster for nearly sorted arrays.
Recursion Stack: O(1) for iterative Binary Search and O(log n) for recursive Binary Search.

## Why these complexities?
Best case — O(1): The target matches the middle element immediately.
Average case — O(log n): The search range is halved after each comparison.
Worst case — O(log n): The algorithm continues halving the range until the target is found or no elements remain.
