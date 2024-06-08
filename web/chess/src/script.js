const num_cells = 64;
const num_rows = 8;
const num_cols = 8;
board = [];

window.onload = function() {
    generateCells();
}

function generateCells() {
    // create board
    var board = document.createElement("div");
    board.className = "board";
    document.body.append(board);

    for (var i = 0; i < num_rows; i++) {
        for (var j = 0; j < num_cols; j++) {
            // <div>...</div>
            var cell = document.createElement("div"); 
            // <div class = "cell">...</div>
            // or cell.classList.add
            cell.className = "cell";

            if (i % 2 == 0 && j % 2 == 0) {
                cell.style.backgroundColor = "#F5F5DC";
            } else if (i % 2 == 0 && j % 2 != 0) {
                cell.style.backgroundColor = "#8B4513";
            } else if (i % 2 != 0 && j % 2 == 0) {
                cell.style.backgroundColor = "#8B4513";
            } else {
                cell.style.backgroundColor = "#F5F5DC";
            }

            // <div class = "board">
            //      <div class = "cell">...</div>
            // </div>
            document.getElementsByClassName("board")[0].append(cell);
        }
    }
}