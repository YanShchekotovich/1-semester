let arr = [6*Math.pow(Math.PI, 2)+3*Math.exp(8), 2*Math.cos(4)+Math.cos(12)+8*Math.exp(3), 3*Math.sin(9)+Math.log(5)+Math.sqrt(3), 2*Math.tan(5)+6*Math.PI+Math.sqrt(12)];

console.log("Максимальный элемент массива: " + Math.max(...arr) + "\nИндекс максимального элемента массива: " + arr.indexOf(Math.max(...arr)));
console.log("Минимальный элемент массива: " + Math.min(...arr) + "\nИндекс миинмального элемента массива: " + arr.indexOf(Math.min(...arr)));

