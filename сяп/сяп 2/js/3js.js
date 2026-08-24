let table = document.createElement("table");
table.setAttribute("border",3);
let num1 = 1;
let num2 = 4.9;
let tr = table.appendChild(document.createElement('tr'));
tr.appendChild(document.createElement('td')).innerText = "Радиус";
tr.appendChild(document.createElement('td')).innerText = "Площадь круга";
tr.appendChild(document.createElement('td')).innerText = "Длина окружности";
do {
	tr = table.appendChild(document.createElement('tr'));
	tr.appendChild(document.createElement('td')).innerText = num1.toFixed(1);
	tr.appendChild(document.createElement('td')).innerText = Math.round(Math.PI * Math.pow(num1, 2));
	tr.appendChild(document.createElement('td')).innerText = Math.round(Math.PI * 2 * num1)
	num1 += 0.3;
} while(num1 <= num2)
document.body.append(table); //функция выполняется до того момента пока 1 число меньше или равно чем 2 число