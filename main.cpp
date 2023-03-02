#include <iostream>
#include <vector>
#include <random>
#include <chrono> //The chrono library is also used to measure time elapsed during execution of a C++ program.


using namespace std;

//size sudoku grid
const int size = 9; //9 x 9 = 81 cells

//number of cells to fill in the initial grid:
const int cells = 50;

//sudoku grid: 9 x 9  = 81 cells
int grid[size][size];

//function to print the grid
void printSudoku(){
    for (int i = 0; i<size;i++){
        for(int j = 0; j < size; j++){
            cout << grid[i][j] << " ";
        }
        cout <<endl;
    }
    cout << endl
}

int main(int, char **){
    int puzzle[size][size];

    generatePuzzle(puzzle);


    return 0;
}