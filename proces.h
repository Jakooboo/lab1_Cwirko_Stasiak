#pragma once
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
#include <iostream>
class process {
private:
    int size_of_process;
    std::vector<int>* front_time;
    std::vector<int>* middle_time;
    std::vector<int>* end_time;
    int* order;

    int return_front_time(int a) const { return (*front_time)[a]; }
    int return_middle_time(int a) const { return (*middle_time)[a]; }
    int return_end_time(int a) const { return (*end_time)[a]; }
    int return_size_of_process() const { return size_of_process; }
    void swap_elements(int first, int second, std::vector<int> &front, std::vector<int> &middle, std::vector<int> &end);
public:
    process(std::string);
    int calculate_length_of_process() const;
    void sort_process_first();
    void print_order() const;
};
