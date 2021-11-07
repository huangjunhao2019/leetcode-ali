# 11.7 vector初始化时指定capacity
从./other/vector_cap.cpp的程序可以看出，在指定时，利用"vector<int> nums(10)”指定的是vector的capacity，而不是size。只有在利用push_back的时候，才会改变vector的capacity。