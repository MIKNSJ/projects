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

function allowDrop(e) {
    e.preventDefault();
}

function drag(e) {
    console.log(e.target);
    e.dataTransfer.setData("text", e.target.id);
}

function drop(e) {
    e.preventDefault();
    var data = e.dataTransfer.getData("text");
    var selected_piece = document.getElementById(data);

    if (e.target.className == "cell") {
        e.target.append(selected_piece);
    }
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
            cell.ondrop = drop;
            cell.ondragover = allowDrop;

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
                piece.className = "pieces";
                piece.draggable = "true";
                piece.ondragstart = drag;
                piece.id = i + "-" + j;

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