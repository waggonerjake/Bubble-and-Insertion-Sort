
# Honor Pledge:
# # I pledge that I have neither given nor
# # received any help on this assignment.
# # jwaggon

Big-o: Driver.o InsertionSort.o BubbleSort.o
	g++ -o Big-o Driver.o InsertionSort.o BubbleSort.o
Driver.o: Driver.cpp
	g++ -c Driver.cpp -o Driver.o
InsertionSort.o: InsertionSort.cpp
	g++ -c InsertionSort.cpp -o InsertionSort.o
BubbleSort.o: BubbleSort.cpp
	g++ -c BubbleSort.cpp -o BubbleSort.o
val: Big-o
	valgrind --leak-check=full --log-file=valgrind.txt ./Big-o
clean:
	rm -f *.o
