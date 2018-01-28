longest_substr:
	g++ -std=c++11 -g -o longest_substr longest_substr.cpp
subarray_sum:
	g++ -std=c++11 -g -o subarray_sum subarray_sum.cpp

clean:
	rm longest_substr subarray_sum  *~
