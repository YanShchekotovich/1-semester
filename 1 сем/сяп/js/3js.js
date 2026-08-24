let table = document.createElement("table");
table.setAttribute("border",1);
let num1 = 1;
let num2 = 4.9;
let tr = table.appendChild(document.createElement('tr'));
tr.appendChild(document.createElement('td')).innerHTML = "Радиус";
tr.appendChild(document.createElement('td')).innerHTML = "Площадь круга";
tr.appendChild(document.createElement('td')).innerHTML = "Длина окружности";
do {
	tr = table.appendChild(document.createElement('tr'));
	tr.appendChild(document.createElement('td')).innerHTML = num1.toFixed(1);
	tr.appendChild(document.createElement('td')).innerHTML = Math.round(Math.PI * Math.pow(num1, 2));
	tr.appendChild(document.createElement('td')).innerHTML = Math.round(Math.PI * 2 * num1)
	num1 += 0.3;
} while(num1 <= num2)
document.body.append(table);