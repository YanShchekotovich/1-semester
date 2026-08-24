$(document).ready(function() {
    $("#drawing").on("click", function() {
      drawMain();
    });
  });

  function drawMain() {
    clear();

    let graph = $("input[name=graph]:checked").val();
    let color = $("input[name=color]:checked").val();

    switch (graph) {
        case "squared": return draw((x) => x ** 2, color);
        case "cubed": return draw((x) => x ** 3, color);
        case "sin": return draw((x) => Math.sin(x), color);
        case "cos": return draw((x) => Math.cos(x), color);
        case "sqrt": return draw((x) => Math.sqrt(x), color);  
        
    }
}

function clear() {
    let canvas = $("canvas")[0];
    let ctx = canvas.getContext("2d");
    ctx.clearRect(0, 0, canvas.width, canvas.height);
}

function draw(func, color) {
    let SCALE = 20;

    let canvas = $("canvas")[0];
    let ctx = canvas.getContext("2d");

    ctx.strokeStyle = color;

    ctx.beginPath();
    for (let x = -canvas.width / 2; x < canvas.width / 2; x++) {
        let y = func(x / SCALE) * SCALE;

        let canvasX = x + canvas.width / 2;
        let canvasY = -y + canvas.height / 2;

        ctx.lineTo(canvasX, canvasY);
    }
    ctx.stroke();
}


