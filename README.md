
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

![image](https://github.com/HarshdeepSingh2609/ANALYSIS-AND-DESIGN-OF-ALGOS/assets/157723183/7205ce4c-7004-4997-a38c-dd3893dbee1e)


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

 ![image](https://github.com/HarshdeepSingh2609/ANALYSIS-AND-DESIGN-OF-ALGOS/assets/157723183/16a00ecb-9f59-4ea9-a873-a343d88168e0)

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
![image](https://github.com/HarshdeepSingh2609/ANALYSIS-AND-DESIGN-OF-ALGOS/assets/157723183/fe7c303e-6842-40c8-9a27-68cec2c8eb6f)


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
![image](https://github.com/HarshdeepSingh2609/ANALYSIS-AND-DESIGN-OF-ALGOS/assets/157723183/d0dbfb68-58a8-411a-b557-3685f42fbd3b)

 

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
 ![image](https://github.com/HarshdeepSingh2609/ANALYSIS-AND-DESIGN-OF-ALGOS/assets/157723183/67915657-34cf-4a2d-9181-582ff804a8c7)



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
 ![image](https://github.com/HarshdeepSingh2609/ANALYSIS-AND-DESIGN-OF-ALGOS/assets/157723183/2d7917d5-d657-4c2e-b64c-03a4e1c0623e)



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
 ![image](https://github.com/HarshdeepSingh2609/ANALYSIS-AND-DESIGN-OF-ALGOS/assets/157723183/00c8c0da-7480-4ce2-aac6-37363fc4cb07)


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
 ![image](https://github.com/HarshdeepSingh2609/ANALYSIS-AND-DESIGN-OF-ALGOS/assets/157723183/ae32aecd-c3f5-4163-8813-8b3a8fd43b6a)


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
 ![image](https://github.com/HarshdeepSingh2609/ANALYSIS-AND-DESIGN-OF-ALGOS/assets/157723183/642a8092-b716-4a3a-9578-d282b6e73e8d)



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
 ![image](https://github.com/HarshdeepSingh2609/ANALYSIS-AND-DESIGN-OF-ALGOS/assets/157723183/08ddc98e-1be5-4d8f-8d7b-bc1a6d2c9d83)


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
 ![image](https://github.com/HarshdeepSingh2609/ANALYSIS-AND-DESIGN-OF-ALGOS/assets/157723183/c01f7c1f-9c77-4bdc-b9e7-6cab3cf3a747)


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

 ![image](https://github.com/HarshdeepSingh2609/ANALYSIS-AND-DESIGN-OF-ALGOS/assets/157723183/31454a7f-c8bf-4ede-ad5c-4ec317a22f31)


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
![image](https://github.com/HarshdeepSingh2609/ANALYSIS-AND-DESIGN-OF-ALGOS/assets/157723183/fec98ac1-9f70-45cd-b54b-26c9ace4b952)

 

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
 ![image](https://github.com/HarshdeepSingh2609/ANALYSIS-AND-DESIGN-OF-ALGOS/assets/157723183/b6ecd2fb-b884-4eb7-84d2-b28fdcb5e04e)


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

![image](https://github.com/HarshdeepSingh2609/ANALYSIS-AND-DESIGN-OF-ALGOS/assets/157723183/d694042d-e958-429c-8f82-8e0df71390aa)


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
 ![image](https://github.com/HarshdeepSingh2609/ANALYSIS-AND-DESIGN-OF-ALGOS/assets/157723183/d41afbc3-bf2e-44d0-b6b5-f07de0ffca4e)


TIME COMPLEXITY: The average-case time complexity of QuickSort is O(n log n), where n is the number of elements in the array.

USAGE
•	Run the program.
•	Ensure that Gnuplot is installed on your system.
•	After execution, the graph will be saved as 'qsit.png' in the same directory.

CONCLUSION:
The analysis reveals the average time taken by the iterative QuickSort algorithm increases logarithmically with the input size, aligning with the expected time complexity of O(n log n).



LAB-5

5.1 SINGLE SOURCE SHORTEST PATH

AIM:To analyze the average time complexity of the Single Source Shortest Path (SSSP) algorithm for varying numbers of vertices.

DESCRIPTION:The program implements the SSSP algorithm to find the shortest paths from a single source vertex to all other vertices in a graph.
It generates random weighted adjacency matrices representing graphs with increasing numbers of vertices.
For each graph size, it measures the average time taken to find the shortest paths and writes this data to a file.
Finally, it prints the number of vertices and the average time taken for each iteration.



GRAPH:
![image](https://github.com/HarshdeepSingh2609/ANALYSIS-AND-DESIGN-OF-ALGOS/assets/157723183/9f4ad2bd-61f4-4080-9d0f-b4190224e291)

 

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
 ![image](https://github.com/HarshdeepSingh2609/ANALYSIS-AND-DESIGN-OF-ALGOS/assets/157723183/b90121f1-d99b-428e-bf08-adb985b4a556)


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
 
![image](https://github.com/HarshdeepSingh2609/ANALYSIS-AND-DESIGN-OF-ALGOS/assets/157723183/0b4d9778-5f52-44d0-a512-955b7196f82d)


TIME COMPLEXITY:The time complexity of Kruskal's algorithm is typically O(E log V), where V is the number of vertices and E is the number of edges in the graph.

USAGE:
•	Run the program.
•	Gnuplot must be installed to visualize the data.
•	The generated plot can be found as "kruskal.png".

CONCLUSION:The analysis reveals how the average time to compute minimum spanning trees varies with increasing numbers of vertices in the graph, providing insights into the performance characteristics of Kruskal's algorithm.


LAB -6
6.1: ALL PAIR SHORTEST PATH
AIM: The aim of this program is to find the shortest distances and paths between every pair of vertices in a given directed weighted graph using the Floyd-Warshall algorithm.

DESCRIPTION: The program implements the Floyd-Warshall algorithm, which is a dynamic programming approach for finding the shortest paths in a weighted graph with positive or negative edge weights (but no negative cycles). It works for both directed and undirected graphs.

ALGORITHM:
1.Initialize a 2D array distance[V][V] to store the shortest distances between every pair of vertices. 2.Initialize another 2D array predecessor[V][V] to keep track of the predecessors for reconstructing paths.
3.Initialize distance[i][j] to the weight of the edge from vertex i to vertex j if there is an edge, otherwise set it to infinity. Set predecessor[i][j] to i if there is an edge from i to j, otherwise set it to -1.
4.Apply the Floyd-Warshall algorithm:
•	For each vertex k from 1 to V:
•	For each pair of vertices i and j:
•	If the distance from i to k and from k to j is shorter than the current distance from i to j, update the distance and predecessor arrays accordingly.
5.After the algorithm finishes, the distance array will contain the shortest distances between every pair of vertices, and the predecessor array will contain the predecessors for reconstructing the shortest paths.
Print the shortest distances and paths between every pair of vertices.


TIME COMPLEXITY: The time complexity of the Floyd-Warshall algorithm is O(V^3), where V is the number of vertices in the graph.
USAGE:
Define a directed weighted graph in the form of an adjacency matrix where graph[i][j] represents the weight of the edge from vertex i to vertex j. Use INF (infinity) to represent absence of an edge.
Call the allPairsShortestPath() function, passing the graph as an argument.

6.2: ASSEMPLY LINE
AIM:The aim of this code is to calculate the minimum time required for the assembly of products in a production line, considering two parallel assembly lines with multiple stations.

 DESCRIPTION:This code implements a dynamic programming approach to determine the minimum time required for the assembly process. It considers two parallel assembly lines with multiple stations, where each station has a specific processing time. The time required for transferring products between stations is also taken into account.

 ALGORITHM:
1. Initialize arrays to store the processing time for each station on both assembly lines.
2. Calculate the time required for each station on both assembly lines, considering the transfer time between stations.
3. Determine the minimum time by comparing the total time for both assembly lines.
4. Track the path of assembly by identifying the stations used on each line.

TIME COMPLEXITY:The time complexity of this algorithm is O(n), where n is the number of stations in each assembly line.



6.3 LONGEST COMMON SUBSEQUENCE

AIM:The aim of this code is to find the length of the Longest Common Subsequence (LCS) of two given strings and print the LCS along with arrows indicating the direction.

DESCRIPTION:This code implements the Longest Common Subsequence (LCS) algorithm using dynamic programming. It calculates the length of the LCS of two given strings and prints the LCS along with arrows indicating the direction of the LCS.

ALGORITHM:
1. Initialize a 2D array to store the length of the LCS for each prefix of the strings.
2. Iterate through each character of the strings and fill the array based on the LCS algorithm:
   - If the characters match, increment the LCS length by 1.
   - Otherwise, take the maximum LCS length from the adjacent cells.
3. Traverse the filled array to construct the LCS string and mark the direction with arrows.
4. Print the LCS along with arrows indicating the direction.

 TIME COMPLEXITY:The time complexity of this algorithm is O(m*n), where m is the length of the first string and n is the length of the second string.

USAGE:
1. Define two strings S1 and S2.
2. Call the `longestCommonSubsequence()` function with the two strings as parameters.
3. The function returns the length of the LCS and prints the LCS along with arrows.
4. Print the length of the LCS returned by the function.

6.4 MULTISTAGE GRAPH
AIM:The aim of this code is to calculate the minimum cost and path for a given directed acyclic graph (DAG) using the forward cost algorithm.

DESCRIPTION:This code implements the forward cost algorithm to find the minimum cost and path for a given directed acyclic graph (DAG). It calculates the minimum cost starting from the source vertex to the destination vertex, considering the costs of the edges and stages.

ALGORITHM:
1. Calculate the number of stages in the graph using a recursive function.
2. Calculate the forward cost for each vertex in the graph:
   - For each vertex, find the minimum cost vertex reachable from it.
   - Update the forward cost of the current vertex as the sum of its edge cost to the minimum cost vertex and the forward cost of the minimum cost vertex.
3. Determine the path using the calculated forward costs:
   - Initialize an array to store the path vertices.
   - Start from the source vertex and traverse through the stages, selecting the minimum cost vertex at each stage.
4. Print the minimum cost and the path.

TIME COMPLEXITY:The time complexity of this algorithm is O(V^2), where V is the number of vertices in the graph.

USAGE:
1. Define a directed acyclic graph (DAG) represented as an adjacency matrix.
2. Call the `calculateStages()` function to calculate the number of stages in the graph.
3. Determine the parameter k, which represents the number of stages.
4. Call the `calculateForwardCost()` function with the graph, number of vertices, and parameter k.
5. The function will print the minimum cost and the path from the source to the destination vertex.

LAB-7

7.1 KNAPSACK DP
AIM:The aim of this code is to solve the 0/1 knapsack problem using dynamic programming and print the selected items that maximize the total value.

DESCRIPTION:
This code implements the dynamic programming approach to solve the 0/1 knapsack problem. It finds the maximum value that can be obtained by selecting a subset of items with given weights and values, such that the total weight does not exceed a given capacity. Additionally, it prints the selected items that contribute to the maximum value.

ALGORITHM:
1. Initialize a 2D array K[n+1][W+1] to store the maximum value that can be obtained using the first i items and a knapsack capacity of j.
2. Iterate over each item and capacity:
   - If the weight of the current item is less than or equal to the current capacity, update K[i][j] to the maximum of the value of including the current item and excluding the current item.
   - Otherwise, K[i][j] remains the same as the value obtained by excluding the current item.
3. Print the selected items by backtracking through the K array starting from the bottom-right corner.
4. Return the maximum value obtained from K[n][W].

TIME COMPLEXITY:
The time complexity of this algorithm is O(n*W), where n is the number of items and W is the capacity of the knapsack.

USAGE:
1. Define vectors 'val' and 'wt' representing the values and weights of items, respectively.
2. Define the capacity 'W' of the knapsack.
3. Call the 'knapsackDynamicProgramming()' function with the capacity 'W', vectors 'wt' and 'val', and the number of items 'n'.
4. The function will return the maximum value that can be obtained, and it will print the selected items that contribute to this value.

7.2 MATRIX CHAIN
AIM:The aim of this code is to find the optimal parenthesization of matrix chain multiplication and calculate the minimum number of multiplications required.

DESCRIPTION:This code implements the dynamic programming approach to find the optimal parenthesization of matrix chain multiplication. It calculates the minimum number of scalar multiplications required to multiply a chain of matrices and prints the optimal parenthesization.

ALGORITHM:
1. Define a function 'printOptimalParenthesization' to print the optimal parenthesization recursively.
2. Define a function 'calculateMatrixChainOrder' to calculate the minimum number of scalar multiplications using dynamic programming.
3. Initialize a 2D array 'm' to store the minimum number of multiplications for each subchain of matrices.
4. Initialize another 2D array 'brac' to store the index of the matrix that leads to the optimal parenthesization.
5. Iterate through each subchain length 'L' from 2 to 'n':
   - For each subchain length, iterate through each starting index 'i' and calculate the minimum number of multiplications for the subchain.
6. Print the minimum number of multiplications and the optimal parenthesization using the 'printOptimalParenthesization' function.

TIME COMPLEXITY:
The time complexity of this algorithm is O(n^3), where 'n' is the number of matrices in the chain.
USAGE:
1. Define an array 'dimensions' representing the dimensions of matrices in the chain.
2. Calculate the number of matrices in the chain 'N'.
3. Call the function 'calculateMatrixChainOrder' with the 'dimensions' array and 'N' as arguments.
4. The function will print the minimum number of multiplications and the optimal parenthesization.

7.3 NQUEENS

AIM:The aim of this code is to find all possible placements of N queens on an N×N chessboard such that no two queens attack each other.

DESCRIPTION:This code implements the backtracking algorithm to solve the N-Queens problem. It recursively explores all possible placements of queens on the chessboard and checks if each placement is valid.

ALGORITHM:
1. Define a function 'place' to check if it's valid to place a queen in a particular row and column.
2. Define a function 'Nqueens' to recursively place queens on the chessboard.
3. Iterate through each column in the current row and check if it's a valid position to place the queen.
4. If a valid position is found, mark it and recursively call 'Nqueens' for the next row.
5. If all queens are placed successfully, print the placement.
6. In the main function, prompt the user to enter the number of queens 'n'.
7. Call the 'Nqueens' function to find all possible solutions.

 TIME COMPLEXITY:The time complexity of the N-Queens problem solution using backtracking is O(N!), where N is the number of queens. 

USAGE:
1. Define an integer variable 'n' to represent the number of queens.
2. Prompt the user to enter the value of 'n'.
3. If 'n' is less than or equal to 0, display an error message.
4. Otherwise, call the 'Nqueens' function with initial parameters (1, n).
5. The program will print all possible placements of queens on the chessboard.


LAB-8:
8.1KNAPSACK 01 SETS
AIM: IMPLEMENT KNAPSACK USING MULTIPLE PASSES ALGORITHM

DESCRIPTION:In this implementation, we utilize the Multiple Passes algorithm to solve the knapsack problem efficiently. The algorithm iterates over each item, creating new sets of item combinations and merging them iteratively to avoid redundant calculations and optimize memory usage. By dynamically updating sets of feasible solutions, it gradually builds towards the optimal solution.

ALGORITHM:
1. Define utility functions for printing sets, finding maximum value, and finding path for maximum value.
2. Initialize a set s1 with a single pair {0, 0} representing no items selected initially.
3. Iterate through each item:
     a. Create a new set s2.
     b. For each pair (v, w) in s1, add pairs (v + p[i], w + w[i]) to s2 where p[i] is the value of ith item and w[i] is its weight.
     c. Merge s1 and s2, discarding dominated pairs based on weight, and update s1.
4. Print the resulting set s1.
5. Find the maximum value in s1.
6. Find the path for the maximum value by backtracking.
7. Print the selected items for the maximum value.

TIME COMPLEXITY:
- Let n be the number of items, and W be the maximum weight capacity.
- The time complexity of this algorithm is O(n * W) in the worst case.

USAGE:
- Modify the values of 'n', 'p' (values), 'w' (weights), and 'W' (maximum weight capacity) in the main function to suit the problem requirements.
- Compile and run the program to see the maximum value and selected items for the knapsack problem.

8.2 CHROMATIC NUMBER

AIM:SOLVE GRAPH COLORING PROBLEM USING BACKTRACKING ALGORITHM

DESCRIPTION:The graph coloring problem involves assigning colors to the vertices of a graph in such a way that no two adjacent vertices have the same color. This program aims to solve the graph coloring problem using the backtracking algorithm, where it explores all possible color assignments and backtracks when it encounters an invalid coloring.

ALGORITHM:
1. Initialize the array 'colors' to store the colors assigned to vertices.
2. Define a recursive function 'mColoring' to perform the graph coloring.
3. Implement a helper function 'nextVal' to determine the next possible color for a vertex.
4. Within 'mColoring', iterate over vertices and recursively explore color assignments.
5. If a valid coloring is found, print the colors assigned to vertices.
6. Otherwise, backtrack and explore alternative colorings.
7. Initialize the graph with adjacency matrix representation.
8. Define the number of vertices 'n' and the maximum number of colors 'm'.
9. Call the 'mColoring' function with initial parameters.
10. Print the valid color assignments for the graph.

TIME COMPLEXITY:The time complexity of the backtracking algorithm for the graph coloring problem is O(m^N), where 'N' is the number of vertices and 'm' is the maximum number of colors.

USAGE:
- Modify the 'graph' array to represent the adjacency matrix of the graph.
- Set the values of 'n' and 'm' to the appropriate number of vertices and maximum colors.
- Compile and execute the program.
- The program will output all valid color assignments for the graph vertices.

8.3 SUM OF SUBSETS:
AIM:SOLVE THE SUBSET SUM PROBLEM USING BACKTRACKING ALGORITHM

DESCRIPTION:The subset sum problem involves finding all possible subsets of a given set whose elements sum up to a specified target value. This program aims to solve the subset sum problem using the backtracking algorithm, which explores all possible combinations of elements to identify subsets that satisfy the sum condition.

ALGORITHM:
1. Define an array 'w' to store the elements of the set.
2. Define an array 'x' to represent the inclusion of elements in subsets.
3. Initialize variables 'm', 'n', and 'r' to store the target sum, size of the array, and total sum of elements, respectively.
4. Implement a recursive function 'sumofsubsets' to explore subsets and check for the target sum.
5. Within 'sumofsubsets', recursively include or exclude elements to form subsets.
6. If the current subset sums up to the target sum, print the subset.
7. Initialize the size of the array and target sum by taking input from the user.
8. Read the elements of the array and calculate the total sum.
9. Call the 'sumofsubsets' function with appropriate parameters to find subsets with the target sum.
10. Print the subsets that satisfy the target sum condition.

TIME COMPLEXITY:The time complexity of the backtracking algorithm for the subset sum problem is O(2^N), where 'N' is the size of the input set. This is because the algorithm explores all possible subsets of the input set.

USAGE:
- Enter the size of the array and the target sum when prompted.
- Input the elements of the array.
- Compile and execute the program.
- The program will output all subsets of the given array that sum up to the specified 
