#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;


void part1() {
    fstream myfile("problem_input.txt", std::ios_base::in);

    // vector<string> commands;
    string command, delim = " ", direction, quantity;
    int horizontal = 0, vertical = 0;
    
    while (myfile >> command)
    {
        // commands.push_back(command);
        direction = command.substr(0, command.find(delim));
        quantity = command.substr(command.find(delim) + 1, command.length());
     
        // forward, up, down
        if (direction == "forward") {
            horizontal += stoi(quantity);
        } else if (direction == "up") {
            vertical -= stoi(quantity);
        } else if (direction == "down") {
            vertical += stoi(quantity);
        }
    }

    int product = horizontal * vertical;
    cout << "Product: " << product << endl;
}

void part2() {
    fstream myfile("problem_input.txt", std::ios_base::in);

    vector<int> depths;
    int depth, index = -1, num_inc = 0, window1, window2;

    
}

int main(int argc, char * argv[])
{
    part1(); // 1754
    // part2(); // 1789
}

