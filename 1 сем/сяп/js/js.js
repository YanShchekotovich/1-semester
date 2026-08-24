let table = document.createElement('table');
table.setAttribute("border",1);
let num1 = prompt("Введите первое число");
let num2 = prompt("Введите второе число");
for(let n = 0; n <= num1; n++)
{
	tr = table.appendChild(document.createElement('tr'));
	for (p = 0; p <= num2; p++) {
	    td = tr.appendChild(document.createElement('td'));
	    if(n==0)
	    	td.append(p);
	    else if (p==0)
	    	td.append(n);
	    else
	    	td.append(n*p);
	}
}
document.body.append(table);