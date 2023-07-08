# create a graph from the stdin, the input format is : value: x, where x is the value to be plotted
# the output is a graph with the x axis being the number of elements in the vector and the y axis being the time taken to perform the operation
# the graph is saved in the current directory as a png file
# usage: python vector_overhead_graph.py < input_file

import matplotlib.pyplot as plt
import sys

x = []

for line in sys.stdin:
    x.append(float(line))

plt.plot(x)
plt.ylabel('time')
plt.xlabel('number of elements')
# plt.savefig('vector_overhead.png')
plt.show()

