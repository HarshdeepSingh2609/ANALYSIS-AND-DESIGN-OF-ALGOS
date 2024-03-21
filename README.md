
LAB-1
1.1	: SELECTION SORT

AIM:The aim of this code is to implement and analyze the performance of the selection sort algorithm for sorting arrays of varying sizes.

DESCRIPTION:
The code implements the selection sort algorithm to sort arrays of integers.
Random Data Generation:
Arrays of increasing sizes ranging from 1000 to 100,000 elements are generated.
Random numbers from 1 to the respective array size are generated and stored in the array.
Timing the Sorting Process:
The sorting process is timed using the clock() function to measure the elapsed CPU time.
Sorting is performed 10 times for each array size to compute an average sorting time.
Data Output:
The array size and the average sorting time for each size are written to a file named data.txt.
Each line in the file contains the array size followed by the average sorting time.
Integration with Gnuplot:

GRAPH:
 

TIME COMPLEXITY: The time complexity of the selection sort algorithm is O(n^2), where n is the number of elements in the array.

USAGE:Compile and run this code in a C++ environment. It will output the size of the array and the average time taken to sort it for each array size.

CONCLUSION :This code demonstrates the implementation of the selection sort algorithm and measures its performance for sorting arrays of increasing sizes. The recorded times can be analyzed to understand how the algorithm's performance scales with the size of the input array. The time complexity of O(n^2) indicates that selection sort might not be the most efficient choice for sorting large arrays.

1.2	: ARRAY SUM

AIM:To analyze the time complexity of a recursive sum function by measuring the execution time for different sizes of input arrays.

DESCRIPTION:
Code Functionality: The code generates arrays of different sizes (from 1,000 to 100,000, with increments of 1,000) and populates them with random numbers. It then measures the time taken to calculate the sum of elements in each array using a recursive function.
Measurement Approach: For each array size, the sum function is called 10 times to average the execution time, minimizing variability due to system load or other processes.
Data Output: The program outputs the size of the array and the average time taken for the sum function to execute, which can be used to plot a graph with GNUplot.



GRAPH:
 

TIME COMPLEXITY:
The time complexity of the recursive sum function is O(n), where n is the length of the array. This is because the function performs a single operation for each element of the array once.

USAGE:
1. Compile and run the program. This initiates the process to calculate the sum of randomly generated integers in arrays of increasing sizes.
2. The program measures the time taken to calculate these sums recursively for each array size, averaging the results over multiple runs to ensure accuracy.
3. It writes the average time taken for each array size to a file named sum_calculation_results.txt, facilitating an analysis of how execution time scales with array size.
4. To observe the relationship between array size and execution time visually, use graphing tools like GNUplot or Desmos to plot the data from the result file.


CONCLUSION:
This program showcases the process of recursively calculating the sum of elements in arrays of varying sizes in C++ and provides a practical analysis of the time complexity involved. The measured average execution times offer valuable insights into the efficiency and scalability of recursive algorithms. This analysis is crucial for understanding the limitations and careful application of recursion, especially in performance-critical applications.



1.3: TOWER OF HANOI

AIM: Demonstrate the Tower of Hanoi algorithm and analyze its time complexity as the number of discs increases.

DESCRIPTION: The Tower of Hanoi is a classic problem that involves moving a stack of discs from one rod to another, following specific rules. This program measures the time taken to solve the Tower of Hanoi problem for varying numbers of discs.



GRAPH:

 


TIME COMPLEXITY:
The time complexity of the Tower of Hanoi algorithm is (O(2^n), where n is the number of discs. This exponential time complexity is due to the recursive nature of the algorithm.


USAGE :

•	Compile and Run: Compile the program and execute it.
•	Data Generation: The program calculates the average time taken to solve the Tower of Hanoi problem for different numbers of discs and writes the results to a file named TOH_times.txt.
•	Plotting: Use GNUplot with the provided TOH_times.txt file to visualize the time complexity trend.


DESCRIPTION: 
The Tower of Hanoi program demonstrates the increasing time required to solve the problem as the number of discs grows.
By analyzing the data, we observe the exponential growth in execution time, confirming the(O(2^n) time complexity.
The program serves as a practical illustration of algorithmic time complexity analysis and the power of recursion.
Understanding the time complexity of algorithms is crucial for designing efficient solutions to complex problems



1.4	:TRUTH TABLE GENERATOR

AIM:To measure and analyze the time complexity of a recursive algorithm generating all possible combinations of true/false values for a given number of variables.

DESCRIPTION:
•	The program recursively generates all possible combinations of true/false values for a given number of variables.
•	It measures the time taken to generate these combinations and averages the results over multiple runs.
•	The data collected is then used to analyze the time complexity of the algorithm.


GRAPH:
 

TIME COMPLEXITY:
The time complexity of the algorithm is O(2^n), where n is the number of variables.
This exponential time complexity arises due to the recursive nature of the algorithm, where each variable can have two possible values (true or false).

USAGE : 
•	Compile and run the program.
•	The program generates data on the average time taken to generate combinations for different numbers of variables.
•	Use the provided GNUplot script (plot.gp) to plot the data and visualize the time complexity trend.



CONCLUSION:
The program demonstrates the exponential increase in execution time as the number of variables increases.
This exponential growth confirms the O(2^n) time complexity of the recursive combination generation algorithm.
Understanding the time complexity of recursive algorithms is essential for evaluating their efficiency and scalability.
The collected data and analysis provide insights into the algorithm's performance characteristics, aiding in algorithm selection and optimization.

1.5	HORNER’S RULE

AIM:To measure and analyze the time complexity of polynomial evaluation using Horner's method.

DESCRIPTION:The program evaluates polynomials of increasing degrees using Horner's method.
It measures the time taken for polynomial evaluation for different polynomial degrees.
The data collected is written to a file for further analysis.


GRAPH:
 


TIME COMPLEXITY:
The time complexity of Horner's method for polynomial evaluation is O(n), where n is the degree of the polynomial.

USAGE:
•	Compile and run the program.
•	The program generates data on the average time taken for polynomial evaluation using Horner's method for polynomials of increasing degrees.
•	Use the provided data file to plot and analyze the time complexity trend.

CONCLUSION:
The program demonstrates the linear time complexity of polynomial evaluation using Horner's method.
Analyzing the collected data provides insights into the efficiency of Horner's method for polynomial evaluation, making it suitable for large-degree polynomials.



LAB-2

2.1 : POWER OF A NUMBER

AIM:
To measure and analyze the time complexity of exponentiation using an iterative algorithm.

DESCRIPTION:
The program computes exponentiation of a given base using an iterative algorithm.
It measures the time taken for exponentiation for different values of the exponent.
The data collected is used to analyze the time complexity of the iterative exponentiation algorithm.


GRAPH:
 


TIME COMPLEXITY:
The time complexity of the iterative exponentiation algorithm is O(log n), where n is the exponent.

USAGE:
•	Compile and run the program.
•	The program computes exponentiation for various values of the exponent.
•	Use the generated data to plot and analyze the time complexity trend.

CONCLUSION:
The program demonstrates the efficient time complexity of the iterative exponentiation algorithm.
Analyzing the collected data provides insights into the performance of the algorithm for different exponent values.


2.2 MERGE TWO SORTED  ARRAYS 

AIM:
To measure and analyze the time complexity of merging two sorted arrays.

DESCRIPTION:
The program generates two sorted arrays of increasing sizes.
It merges these arrays into a single sorted array.
The data collected is used to analyze the time complexity of the merging process.



GRAPH:
 

TIME COMPLEXITY:
The time complexity of merging two sorted arrays of sizes m and n is O(m + n).

USAGE:
•	Compile and run the program.
•	The program generates data on the average time taken for merging two sorted arrays of increasing sizes.
•	Use the provided data file to plot and analyze the time complexity trend.

CONCLUSION:
The program demonstrates the linear time complexity of merging two sorted arrays.
Analyzing the collected data provides insights into the efficiency of the merge operation for different array sizes.


2.3 EXACT POSITION OF AN ELEMENT IN ARRAY

AIM:
To measure and analyze the time complexity of the pivot selection process in QuickSort.

DESCRIPTION:
The program generates an array of increasing sizes and selects a pivot element.
It measures the time taken for the pivot selection process in QuickSort.
The data collected is used to analyze the time complexity of the pivot selection.


GRAPH:
 

TIME COMPLEXITY:
The time complexity of the pivot selection process in QuickSort is O(n), where n is the size of the array.

USAGE:
1. Compile and run the program.
2. The program generates data on the average time taken for the pivot selection process in QuickSort for increasing array sizes.
3. Use the provided data file to plot and analyze the time complexity trend.

CONCLUSION:
The program demonstrates the linear time complexity of the pivot selection process in QuickSort.
Analyzing the collected data provides insights into the efficiency of the pivot selection process for different array sizes.

2.4 BINARY SEARCH

AIM:To analyze the average time complexity of the binary search algorithm for finding elements in sorted arrays of varying sizes.

DESCRIPTION:
The program implements the binary search algorithm to find elements in sorted arrays of increasing sizes.
It measures the average time taken to perform the binary search for each array size and writes this data to a file.
Additionally, it outputs the index of the found element for each iteration.



GRAPH:
 


TIME COMPLEXITY:The time complexity of the binary search algorithm is O(log n), where n is the size of the array.

USAGE:
•	Run the program.
•	Gnuplot must be installed to visualize the data.
•	The generated plot can be found as "binary_search.png".

CONCLUSION:The analysis reveals how the average time to perform binary search varies with increasing array sizes, providing insights into the performance characteristics of the binary search algorithm.

LAB-3

3.1 MAX MIN USING MERGE SORT

AIM:
To analyze the time complexity of finding the maximum and minimum elements in an array using recursive and iterative methods.

DESCRIPTION:
This program measures the average time taken to find the maximum and minimum elements in arrays of increasing sizes.
It implements both recursive and iterative approaches for finding the maximum and minimum elements.
The program generates data for different array sizes and writes it to two separate files: "recursive.txt" for the recursive approach and "iterative.txt" for the iterative approach.
After collecting the data, a Gnuplot script is used to create a comparison plot of the average time versus the array size for both approaches.


GRAPH:
 

TIME COMPLEXITY:
The time complexity of the recursive method for finding the maximum and minimum elements is O(n), where n is the size of the array.
The time complexity of the iterative method is also O(n^2), as it uses nested loops to compare array elements.

USAGE:
•	Compile and run the program.
•	The program generates data on the average time taken for both recursive and iterative methods to find the maximum and minimum elements in arrays of increasing sizes.
•	Use the provided data files ("recursive.txt" and "iterative.txt") to plot and analyze the time complexity trends.
•	Execute the Gnuplot script to create a comparison plot named "max_min_times_plot.png".

CONCLUSION:
This program demonstrates the efficiency of both recursive and iterative methods for finding the maximum and minimum elements in arrays.

2.2 MERGE SORT

AIM:Analyze the performance of the Merge Sort algorithm by measuring the average time required for sorting different-sized arrays.

DESCRIPTION:The program implements the Merge Sort algorithm to sort arrays of varying sizes. It measures the average time taken for sorting each array size. Data collected includes input size and corresponding average time for sorting.


GRAPH:
 

TIME COMPLEXITY:Merge Sort has a time complexity of O(n log n) in the average and worst cases. The time taken for sorting increases logarithmically with the input size.

USAGE:

-	Compile and execute the program.
-	The program generates data in a file named "merge_sort_data.txt" containing input size and average sorting time.
-	Utilize the generated data for analysis, plotting, and understanding the performance of Merge Sort.

CONCLUSION:

Analysis of the collected data reveals the efficiency of Merge Sort across different input sizes. The observed time complexity trends validate the expected behavior of Merge Sort. Merge Sort demonstrates reliable performance, making it a preferred choice for sorting large datasets.


2.3:QUICK SORT

AIM:To analyze the average time complexity of the QuickSort algorithm for various input sizes.

DESCRIPTION:
•	The program implements the QuickSort algorithm to sort randomly generated arrays of increasing sizes.
•	It measures the average time taken to sort each array size over multiple iterations and writes this data to a file.
•	Finally, it generates a Gnuplot script to visualize the average time vs. input size.




GRAPH:

 

TIME COMPLEXITY: The average-case time complexity of QuickSort is O(n log n), where n is the number of elements in the array.

USAGE:
•	Run the program.
•	Gnuplot and its libraries must be installed to generate the visualization.
•	The generated plot can be found as 'plot.png'.

CONCLUSION:The analysis shows that the average time taken by QuickSort increases logarithmically with the input size, confirming its expected time complexity of O(n log n).




2.4 MATRIX MULTIPLICATION

AIM:To empirically analyze the execution time of a recursive matrix multiplication algorithm across matrices of increasing sizes and to compare the experimental data with the theoretical computational complexity.

DESCRIPTION:
•	The program executes a recursive matrix multiplication algorithm, which is a straightforward implementation rather than utilizing the Strassen algorithm's optimizations. It measures and records the average time taken to multiply two matrices of sizes ranging from 2x2 up to 198x198, doubling the size with each iteration. 
•	The experiment is conducted by performing ten iterations of multiplication for each matrix size to calculate an average execution time, which is then saved to a file. This data collection aims to provide insights into the practical performance and scalability of the recursive matrix multiplication algorithm.



GRAPH:
 

TIME COMPLEXITY:The traditional recursive matrix multiplication algorithm has a theoretical time complexity of O(n^3), where n is the size of the matrix. This program seeks to empirically validate this complexity by observing the execution time growth as matrix sizes increase.

USAGE:
•	Compile and run the program using a C++ compiler.
•	Ensure you have appropriate permissions for file writing, as the program outputs data to "data.txt" and "data1.txt".
•	To visualize the execution time data, use a plotting tool or software capable of reading the generated data files, such as Gnuplot.

CONCLUSION:
By analyzing the output data, one can observe how the execution time for the recursive matrix multiplication scales with the size of the matrices.. The expected outcome is that execution time increases polynomially with the matrix size, aligning with the O(n^3) theoretical time complexity for standard matrix multiplication.

2.5 STRASSENS MATRIX MULTIPLICATION:

AIM:To analyze the average time complexity of the matrix multiplication algorithm using Strassen's algorithm for matrices of varying sizes.
DESCRIPTION:
•	The program implements matrix multiplication using Strassen's algorithm for matrices of increasing sizes.
•	It measures the average time taken to perform matrix multiplication for each matrix size and writes this data to a file.
•	Additionally, it outputs the result of matrix multiplication for each iteration.


GRAPH:
 


TIME COMPLEXITY:The time complexity of Strassen's algorithm for matrix multiplication is approximately O(n^log7), where n is the size of the matrices.

USAGE:
•	Run the program.
•	Gnuplot must be installed to visualize the data.
•	The generated plot can be found as "matrix_multiplication.png".

CONCLUSION:
The analysis reveals how the average time to perform matrix multiplication varies with increasing matrix sizes, providing insights into the performance characteristics of Strassen's algorithm.





LAB-4
4.1 KNAPSACK

AIM: Implement the Knapsack algorithm to find the maximum profit by selecting items with limited weight capacity.

DESCRIPTION:
•	The program uses the Knapsack algorithm to solve the problem of selecting items with a maximum profit under a given weight constraint.
•	It sorts the items based on non-decreasing weights using the QuickSort algorithm to optimize the selection process.
•	The Knapsack algorithm efficiently determines the maximum achievable profit considering the weight capacity constraint.



GRAPH:

 


TIME COMPLEXITY:
1. QuickSort: O(n log n) - Sorting the items based on non-decreasing weights.
2. Knapsack Algorithm: O(nW) - Finding the maximum profit considering the weight capacity constraint, where n is the number of items and W is the maximum weight capacity.

USAGE:
•	Define the profits and weights of items in the `profit` and `weight` vectors, respectively.
•	Specify the maximum weight capacity for the Knapsack algorithm.
•	Compile and execute the program.
•	The program generates a data file named "knapsack.txt" containing the calculated profits.
•	Execute the Gnuplot script "knapsack_plot.gp" using the command `gnuplot knapsack_plot.gp` to generate the plot "knapsack.png".
•	Analyze the generated plot to visualize the profit achieved by selecting items based on their weights.

CONCLUSION:
The Knapsack algorithm efficiently solves the problem of selecting items with maximum profit under a weight constraint.
Sorting the items based on non-decreasing weights using QuickSort optimizes the selection process, resulting in an optimal solution.
The generated plot provides insights into the profit achieved by selecting items with limited weight capacity, aiding in decision-making processes.


4.2: ITERATIVE QUICK SORT

AIM:To analyze the average time complexity of the QuickSort algorithm implemented iteratively for various input sizes.

DESCRIPTION:
•	The program iteratively implements the QuickSort algorithm to sort randomly generated arrays of increasing sizes.
•	It measures the average time taken to sort each array size over multiple iterations and writes this data to a file named 'qsrec.txt'.
•	The data is then visualized using Gnuplot to analyze the relationship between input size and average sorting time.



GRAPH:
 

TIME COMPLEXITY: The average-case time complexity of QuickSort is O(n log n), where n is the number of elements in the array.

USAGE
•	Run the program.
•	Ensure that Gnuplot is installed on your system.
•	After execution, the graph will be saved as 'qsit.png' in the same directory.

CONCLUSION:
The analysis reveals the average time taken by the iterative QuickSort algorithm increases logarithmically with the input size, aligning with the expected time complexity of O(n log n).

4.3 ACTIVITY SELECTION:






LAB-5

5.1 SINGLE SOURCE SHORTEST PATH

AIM:To analyze the average time complexity of the Single Source Shortest Path (SSSP) algorithm for varying numbers of vertices.

DESCRIPTION:The program implements the SSSP algorithm to find the shortest paths from a single source vertex to all other vertices in a graph.
It generates random weighted adjacency matrices representing graphs with increasing numbers of vertices.
For each graph size, it measures the average time taken to find the shortest paths and writes this data to a file.
Finally, it prints the number of vertices and the average time taken for each iteration.



GRAPH:

 

TIME COMPLEXITY:The time complexity of the SSSP algorithm depends on the specific implementation. However, for algorithms like Dijkstra's or Bellman-Ford, the time complexity is typically O(V^2) or O(V * E), where V is the number of vertices and E is the number of edges.

USAGE:
•	Run the program.
•	Gnuplot must be installed to visualize the data.
•	The generated plot can be found as "sssp.png".

CONCLUSION:The analysis reveals how the average time to compute shortest paths varies with increasing numbers of vertices in the graph, providing insights into the performance characteristics of SSSP algorithms.

5.2 PRIMS ALGORITHM

AIM:To analyze the average time complexity of the Prim's algorithm for generating minimum spanning trees for varying numbers of vertices.

DESCRIPTION:The program implements Prim's algorithm to generate minimum spanning trees for randomly generated graphs with increasing numbers of vertices.
It measures the average time taken to compute the minimum spanning tree for each graph size and writes this data to a file.
Additionally, it outputs the edges of the minimum spanning tree for each iteration.



GRAPH:
 

TIME COMPLEXITY:
The time complexity of Prim's algorithm is typically O(V^2), where V is the number of vertices in the graph.

USAGE:
•	Run the program.
•	Gnuplot must be installed to visualize the data.
•	The generated plot can be found as "prims.png".

CONCLUSION:
The analysis reveals how the average time to compute minimum spanning trees varies with increasing numbers of vertices in the graph, providing insights into the performance characteristics of Prim's algorithm.

5.3 KRUSKAL ALGORITHM

AIM:To analyze the average time complexity of the Kruskal's algorithm for generating minimum spanning trees for varying numbers of vertices.

DESCRIPTION:The program implements Kruskal's algorithm to generate minimum spanning trees for randomly generated graphs with increasing numbers of vertices.
It measures the average time taken to compute the minimum spanning tree for each graph size and writes this data to a file.
Additionally, it outputs the edges of the minimum spanning tree for each iteration.




GRAPH:
 


TIME COMPLEXITY:The time complexity of Kruskal's algorithm is typically O(E log V), where V is the number of vertices and E is the number of edges in the graph.

USAGE:
•	Run the program.
•	Gnuplot must be installed to visualize the data.
•	The generated plot can be found as "kruskal.png".

CONCLUSION:The analysis reveals how the average time to compute minimum spanning trees varies with increasing numbers of vertices in the graph, providing insights into the performance characteristics of Kruskal's algorithm.

