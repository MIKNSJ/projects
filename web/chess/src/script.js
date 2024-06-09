const num_cells = 64;
const num_rows = 8;
const num_cols = 8;
white_pieces = ["&#9814", "&#9816", "&#9815", "&#9812", "&#9813", "&#9815",
    "&#9816", "&#9814", "&#9817", "&#9817", "&#9817", "&#9817", "&#9817",
    "&#9817", "&#9817", "&#9817"];
black_pieces = ["&#9823", "&#9823", "&#9823", "&#9823", "&#9823", "&#9823",
    "&#9823", "&#9823", "&#9820", "&#9822", "&#9821", "&#9818", "&#9819",
    "&#9821", "&#9822", "&#9820"];
board = [];

window.onload = function() {
    generateCells();
}

function generateCells() {
    // create board
    var board = document.createElement("div");
    board.id = "board";
    document.body.append(board);
    var count = 0;

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

            // <div id = "board">
            //      <div class = "cell">...</div>
            // </div>
            document.getElementById("board").append(cell);

            if (i < 2 || i > 5) {
                var piece = document.createElement("div");
                piece.id = "pieces";
                if (i < 2) {
                    piece.innerHTML = black_pieces.pop();
                }

                if (i > 5) {
                    piece.innerHTML = white_pieces.pop();
                }
                document.getElementsByClassName("cell")[count].append(piece);
            }
            ++count;
        }
    }
}