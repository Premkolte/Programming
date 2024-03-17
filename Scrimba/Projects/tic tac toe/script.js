let board = Array(3).fill(null).map(() => Array(3).fill(null));
let currentPlayer = 1;

function cellClicked(row, col) {
 if (board[row][col] !== null) return;
 board[row][col] = currentPlayer;
 document.getElementsByTagName('table')[0].rows[row].cells[col].innerText = currentPlayer === 1 ? 'X' : 'O';
 currentPlayer = currentPlayer === 1 ? 2 : 1;
 checkForWinner();
}

function checkForWinner() {
 let winner = null;

 // Check rows
 for (let i = 0; i < 3; i++) {
    if (board[i][0] !== null && board[i][0] === board[i][1] && board[i][1] === board[i][2]) {
      winner = board[i][0];
      break;
    }
 }

 // Check columns
 if (winner === null) {
    for (let i = 0; i < 3; i++) {
      if (board[0][i] !== null && board[0][i] === board[1][i] && board[1][i] === board[2][i]) {
        winner = board[0][i];
        break;
      }
    }
 }

 // Check diagonals
 if (winner === null) {
    if (board[0][0] !== null && board[0][0] === board[1][1] && board[1][1] === board[2][2]) {
      winner = board[0][0];
    } else if (board[0][2] !== null && board[0][2] === board[1][1] && board[1][1] === board[2][0]) {
      winner = board[0][2];
    }
 }

 if (winner !== null) {
    alert(winner === 1 ? 'Player 1 wins!' : 'Player 2 wins!');
    location.reload();
 }
}