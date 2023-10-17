#include <iostream>

int main() {
  const int numRows = 10;
  const int numColumns = 10;

  int grid[numRows][numColumns];

  for (int row = 0; row < numRows; row++) {
     for (int col = 0; col < numColumns; col++) {
        grid[row][col] = row * numColumns + col;

        }
     }
 int rowToDisplay = 8;
 int columnToDisplay = 6;

 if (rowToDisplay >= 0 && rowToDisplay < numRows && columnToDisplay >= 0 && columnToDisplay < numColumns) {
    int valueToDisplay = grid[rowToDisplay][columnToDisplay];
    std::cout <<  "Value in the 9th row and 7th column : " <<valueToDisplay << std::end1;
 } else {
   std::cout << "Invalid row or column index provided. " << std::end1;
 }

 return 0;
 
 }
