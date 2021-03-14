
                                      Parallel programming with MPI Homework2.

# Matrix Multiplication using MPI

Creation of 4 worker processes. Process 0 initializes matrices a and b randomly, partitions the data, and distributes the partitions to the other workers.
 Each worker calculates its own partition of the result matrix C.
 After the calculations, Process 0 receives the results from the other processes and displays matrix C on the screen.

# Compile and Run//build&run

First Compile initMatrix with :
mpicc -o initMatrix initMatrix.c

Second Compile main :
$mpicc -o main /main.c

Third Run :
$mpirun -np 4 ./main




#Students 
           Bensafi Sarra 
            Chikh dounia 