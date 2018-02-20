longest_substr:
	g++ -std=c++11 -g -o case_longest_substr longest_substr.cpp
subarray_sum:
	g++ -std=c++11 -g -o case_subarray_sum subarray_sum.cpp
valid_bst:valid_bst.cpp
	g++ -std=c++11 -g -o case_valid_bst valid_bst.cpp
has_subtree:has_subtree.cpp
	g++ -std=c++11 -g -o case_has_subtree has_subtree.cpp
print1tomax:print1tomax.cpp
	g++ -std=c++11 -g -o case_print1tomax print1tomax.cpp
complex_list_clone:complex_list_clone.cpp
	g++ -std=c++11 -g -o case_complex_list_clone complex_list_clone.cpp 

clean:
	rm case*  *~
