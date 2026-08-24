document.getElementById("draw_button").addEventListener("click", drawingHandler)

function drawingHandler() {
    clear();

    const graph = document.querySelector("input[name=graph]:checked").value
    const color = document.querySelector("input[name=color]:checked").value

    switch (graph) {
        case "squared_x": return draw((x) => x ** 2, color);
        case "cubed_x": return draw((x) => x ** 3, color);
        case "sin_x": return draw((x) => Math.sin(x), color);
        case "cos_x": return draw((x) => Math.cos(x), color);
    }
}

function clear() {
    const canvas = document.getElementsByTagName("canvas")[0];
    const ctx = canvas.getContext("2d"); // 2D-холст
    ctx.clearRect(0, 0, canvas.width, canvas.height);
}

function draw(func, color) {
    const SCALE = 20;

    const canvas = document.getElementsByTagName("canvas")[0];
    const ctx = canvas.getContext("2d");

    ctx.strokeStyle = color;

    ctx.beginPath();
    for (let x = -canvas.width / 2; x < canvas.width / 2; x++) {
        const y = func(x / SCALE) * SCALE;

        const canvasX = x + canvas.width / 2;
        const canvasY = -y + canvas.height / 2;

        ctx.lineTo(canvasX, canvasY);
    }
    ctx.stroke();
}

