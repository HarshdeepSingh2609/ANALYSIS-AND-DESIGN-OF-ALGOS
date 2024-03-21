set terminal png
set output 'plot.png'
set title 'Average Time vs. Input Size for QuickSort'
set xlabel 'Input Size'
set ylabel 'Average Time (seconds)'
plot 'data.txt' with lines title 'QuickSort'
