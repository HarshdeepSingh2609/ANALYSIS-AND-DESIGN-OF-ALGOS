# Set terminal type and output file
set terminal png
set output "horner.png"

# Set plot title and axis labels
set title "Evaluation Time vs. Input Size"
set xlabel "Input Size"
set ylabel "Evaluation Time (ms)"

# Plot data from the provided file
plot "horner_times.txt" with lines title "Horner's Method Evaluation Time"
