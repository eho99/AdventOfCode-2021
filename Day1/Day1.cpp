#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void part1() {
    fstream myfile("problem1_input.txt", std::ios_base::in);

    vector<int> depths;
    int depth, index = -1, num_inc = 0;

    while (myfile >> depth)
    {
        depths.push_back(depth);
        index++;
        if (index > 0) {
            if (depths[index-1] < depths[index]) {
                num_inc++;
            }
        }
    }

    cout << "Number of Increases: " << num_inc << endl;
    // return num_inc;
}

void part2() {
    fstream myfile("problem1_input.txt", std::ios_base::in);

    vector<int> depths;
    int depth, index = -1, num_inc = 0, window1, window2;

    while (myfile >> depth)
    {
        depths.push_back(depth);
        index++;
        if (index > 2) {
            window1 = depths[index-3] + depths[index-2] + depths[index-1];
            window2 = window1 - depths[index-3] + depths[index];
            if (window1 < window2) {
                num_inc++;
            }
        }
    }

    cout << "Number of Window Increases: " << num_inc << endl;
}

int main(int argc, char * argv[])
{
    part1(); // 1754
    part2(); // 1789
}

// 1754 Increases