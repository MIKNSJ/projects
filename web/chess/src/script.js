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

function dragOver(e) {
    e.preventDefault();
}

function drag(e) {
    e.dataTransfer.setData("text", e.target.id);
    var drag_image = e.target.cloneNode(true);
    drag_image.style.position = "absolute";
    drag_image.style.left = "-99999px";
    drag_image.style.top = "-99999px";
    drag_image.id = "copy";
    drag_image.innerHTML = e.target.innerHTML;
    document.body.appendChild(drag_image);
    e.dataTransfer.setDragImage(drag_image, 35, 40);
}

function drop(e) {
    e.preventDefault();
    var data = e.dataTransfer.getData("text");
    var selected_piece = document.getElementById(data);

    if (e.target.className == "cell") {
        e.target.appendChild(selected_piece);
        var drag_image = document.getElementById("copy");
        if (drag_image) {
            drag_image.parentNode.removeChild(drag_image);
        }
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
            cell.addEventListener("drop", drop);
            cell.addEventListener("dragover", dragOver);

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
            board.append(cell);
            //document.getElementById("board").append(cell);

            if (i < 2 || i > 5) {
                var piece = document.createElement("div");
                piece.className = "pieces";
                piece.draggable = "true";
                piece.addEventListener("dragstart", drag);
                piece.id = count;

                if (i < 2 && black_pieces.length > 0) {
                    piece.innerHTML = black_pieces.pop();
                }

                if (i > 5 && white_pieces.length > 0) {
                    piece.innerHTML = white_pieces.pop();
                }

                //document.getElementsByClassName("cell")[count].append(piece);
                cell.append(piece);
            }
            
            ++count;
        }
    }
}