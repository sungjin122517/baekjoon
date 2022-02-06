### Four sorting algorithms

1. **Bubble sort**: Start at the beginning of the list and swap the first two elements if the first is greater than the second. Then, go to the next pair, making continuous sweeps of the list and so on until the list is sorted.
    
    Runtime: O(n^2) average. 
    
2. **Selection sort**: Find the smallest element using a linear scan and move it to the front (swapping it with the front element). Then, find the second smallest and move it to the second position in the list, using once again a linear scan. Continue to do this until the list is sorted.
    
    Runtime: O(n^2) average.
    
3. **Merge sort**: It uses the divide and conquer method and is a **recursive** algorithm. Although it is more difficult to implement than other algorithms, it is very **time efficient**.  
It divides the list in half, sorts each of those halves, and then merges them back together. Each half has the same sorting algorithm applied to it. This splitting into halves continues until you are just merging two single element lists.
    
    Runtime: O(n log(n)) average.
    
4. **Quicksort**: Pick a random element as a pivot point and partition the list around this element. All numbers that are less than the pivot element go to the left of the pivot point and all numbers that are greater than the pivot element go to the right of the pivot point. Recursively repeat the partitioning of the list and its sub-lists until the list is sorted.  
For this program, the initial leftIndex == 0 and the initial rightIndex == len(list)-1.
    
    Time complexity: O(n log(n)) average.
    

### Time complexity

The time complexity of an algorithm quantifies the amount of time taken by an algorithm to run as a function of the length of the input. Note that the time to run is a function of the length of the input and NOT the actual execution time of the machine on which the algorithm is running on.

In order to calculate time complexity on an algorithm, it is assumed that a **constant time c** is taken to execute one operation, and then the total operations for an input length on **N** are calculated.

e.g. Find whether a pair **(X, Y)** exists in an array A of **N** elements whose sum is **Z**.  
→ In the worst case (i.e., when there is no pair of elements with sum equals Z),

- **N*c** operations are required for input.
- The outer loop **i** loop runs **N** times.
- For each **i**, the inner loop **j** loop runs **N** times.

So total execution time is _**N*c + N*N*c + c**_. Now ignore the lower order terms since the lower order terms are relatively insignificant for large input, therefore only the highest order term is taken (without constant) which is _**N*N**_ in this case. Hence, the time complexity is O(N^2).

### sort()와 stable_sort() 함수

**sort( )**:

- 내부적으로 **퀵 정렬**로 구현 되어있음
- 시간 복잡도: O(nlogn)
- 불안정 정렬

**stable_sort( )**:

- 내부적으로 **병합 정렬**로 구현 되어있음
- 시간 복잡도: O(nlogn)
- 안정 정렬

또 다른 차이: 정렬 할 때 중복되는 (예를 들어)숫자를 순서 뒤바꾸지 않고 그대로 가져오냐(stable sort) 랜덤으로 가져오냐(unstable sort)의 차이.
