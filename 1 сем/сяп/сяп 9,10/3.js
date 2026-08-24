let position = 100; 
const target = document.getElementById("myimg"); // указывает на элемент на котором было вызвано событие
 
setInterval(circle, 5); 
 
function circle() { 
    const radius = 350; 
    const centerX = screen.width / 2 - target.width / 2; 
    const centerY = screen.height /2.2 - target.height / 2.2; 
    position += 2 * Math.PI / 500; 
 
    target.style.left = centerX + radius * Math.sin(position) + "px"; 
    target.style.top = centerY + radius * Math.cos(position) + "px"; 
} 
