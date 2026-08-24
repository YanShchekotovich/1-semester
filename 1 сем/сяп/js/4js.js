let table = document.createElement("table");
table.setAttribute("border", "3");

let a = new Number(18);
let b = new Number(1.769);

let tr = table.appendChild(document.createElement("tr"));
tr.appendChild(document.createElement("th")).innerText = "Число";
tr.appendChild(document.createElement("th")).innerHTML = "Метод";
tr.appendChild(document.createElement("th")).innerHTML = "Результат";
tr.appendChild(document.createElement("th")).innerHTML = "Описание метода";

tr = table.appendChild(document.createElement("tr"));
tr.appendChild(document.createElement("td")).innerHTML = a;
tr.appendChild(document.createElement("td")).innerHTML = "toExponential(2)";
tr.appendChild(document.createElement("td")).innerHTML = a.toExponential(2);
tr.appendChild(document.createElement("td")).innerHTML = "Представляет число в экспоненциальной форме";

tr = table.appendChild(document.createElement("tr"));
tr.appendChild(document.createElement("td")).innerHTML = b;
tr.appendChild(document.createElement("td")).innerHTML = "toExponential(2)";
tr.appendChild(document.createElement("td")).innerHTML = b.toExponential(2);
tr.appendChild(document.createElement("td")).innerHTML = "Представляет число в экспоненциальной форме";

tr = table.appendChild(document.createElement("tr"));
tr.appendChild(document.createElement("td")).innerHTML = a;
tr.appendChild(document.createElement("td")).innerHTML = "toFixed(2)";
tr.appendChild(document.createElement("td")).innerHTML = a.toFixed(2);
tr.appendChild(document.createElement("td")).innerHTML = "Представляет число в форме с фиксированным количеством цифр после точки";

tr = table.appendChild(document.createElement("tr"));
tr.appendChild(document.createElement("td")).innerHTML = b;
tr.appendChild(document.createElement("td")).innerHTML = "toFixed(2)";
tr.appendChild(document.createElement("td")).innerHTML = b.toFixed(2);
tr.appendChild(document.createElement("td")).innerHTML = "Представляет число в форме с фиксированным количеством цифр после точки";

tr = table.appendChild(document.createElement("tr"));
tr.appendChild(document.createElement("td")).innerHTML = a;
tr.appendChild(document.createElement("td")).innerHTML = "toPrecision(2)";
tr.appendChild(document.createElement("td")).innerHTML = a.toPrecision(2);
tr.appendChild(document.createElement("td")).innerHTML = "Представляет число с заданным общим количеством значащих цифр";

tr = table.appendChild(document.createElement("tr"));
tr.appendChild(document.createElement("td")).innerHTML = b;
tr.appendChild(document.createElement("td")).innerHTML = "toPrecision(2)";
tr.appendChild(document.createElement("td")).innerHTML = b.toPrecision(2);
tr.appendChild(document.createElement("td")).innerHTML = "Представляет число с заданным общим количеством значащих цифр";

tr = table.appendChild(document.createElement("tr"));
tr.appendChild(document.createElement("td")).innerHTML = a;
tr.appendChild(document.createElement("td")).innerHTML = "toString(2)";
tr.appendChild(document.createElement("td")).innerHTML = a.toString(2);
tr.appendChild(document.createElement("td")).innerHTML = " Возвращает строковое представление числа в системе счисления с указанным основанием";

tr = table.appendChild(document.createElement("tr"));
tr.appendChild(document.createElement("td")).innerHTML = b;
tr.appendChild(document.createElement("td")).innerHTML = "toString(2)";
tr.appendChild(document.createElement("td")).innerHTML = b.toString(2);
tr.appendChild(document.createElement("td")).innerHTML = " Возвращает строковое представление числа в системе счисления с указанным основанием";

document.body.append(table);
document.body.appendChild(document.createElement("br"));

    
