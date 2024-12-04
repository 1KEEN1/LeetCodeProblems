#include <vector>
#include <unordered_set>

bool isValidSudoku(std::vector<std::vector<char>>& board) {
  for (int i = 0; i < 9; i++) {
    std::unordered_set<char> rowSet, colSet;
    for (int j = 0; j < 9; j++) {
      if (board[i][j] != '.') {
        if (rowSet.find(board[i][j]) != rowSet.end()) {
          return false;
        }
        rowSet.insert(board[i][j]);
      }
      if (board[j][i] != '.') {
        if (colSet.find(board[j][i]) != colSet.end()) {
          return false;
        }
        colSet.insert(board[j][i]);
      }
    }
  }

  for (int block = 0; block < 9; block++) {
    std::unordered_set<char> blockSet;
    int startRow = (block / 3) * 3;
    int startCol = (block % 3) * 3;
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        char cell = board[startRow + i][startCol + j];
        if (cell != '.') {
          if (blockSet.find(cell) != blockSet.end()) {
            return false;
          }
          blockSet.insert(cell);
        }
      }
    }
  }

  return true;
}
