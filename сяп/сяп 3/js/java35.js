let date = new Date()
let table = document.createElement('table');
table.setAttribute("border", "3");
let tr = table.appendChild(document.createElement('tr'));
tr.appendChild(document.createElement('td')).innerHTML = 'Год';
tr.appendChild(document.createElement('td')).innerHTML = date.getFullYear();

tr = table.appendChild(document.createElement('tr'));
tr.appendChild(document.createElement('td')).innerHTML = 'Месяц';
tr.appendChild(document.createElement('td')).innerHTML = date.getMonth()+1;
tr = table.appendChild(document.createElement('tr'));
tr.appendChild(document.createElement('td')).innerHTML = 'День';
tr.appendChild(document.createElement('td')).innerHTML = date.getDate();

tr = table.appendChild(document.createElement('tr'));
tr.appendChild(document.createElement('td')).innerHTML = 'Час';
tr.appendChild(document.createElement('td')).innerHTML = date.getHours();

tr = table.appendChild(document.createElement('tr'));
tr.appendChild(document.createElement('td')).innerHTML = 'Минуты';
tr.appendChild(document.createElement('td')).innerHTML = date.getMinutes();

tr = table.appendChild(document.createElement('tr'));
tr.appendChild(document.createElement('td')).innerHTML = 'Секунды';
tr.appendChild(document.createElement('td')).innerHTML = date.getSeconds();

document.body.appendChild(table);