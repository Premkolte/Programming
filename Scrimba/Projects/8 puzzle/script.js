const board = [
    1, 2, 3,
    4, 5, 6,
    7, 8, 0
];

function createBoard() {
    const puzzleContainer = document.getElementById('puzzle-container');
    puzzleContainer.innerHTML = '';
    board.forEach(tile => {
        const tileElement = document.createElement('div');
        tileElement.classList.add('tile');
        if (tile === 0) {
            tileElement.classList.add('empty');
        }
        tileElement.textContent = tile;
        puzzleContainer.appendChild(tileElement);
    });
}

function shuffleBoard() {
    for (let i = 0; i < 1000; i++) {
        const zeroIndex = board.indexOf(0);
        const directions = [[0, 1], [1, 0], [0, -1], [-1, 0]];
        const direction = directions[Math.floor(Math.random() * directions.length)];
        const newIndex = zeroIndex + direction[0] + direction[1] * 3;
        if (newIndex >= 0 && newIndex < 9 && newIndex % 3 !== 1) {
            [board[zeroIndex], board[newIndex]] = [board[newIndex], board[zeroIndex]];
        }
    }
}

createBoard();
shuffleBoard();
createBoard();