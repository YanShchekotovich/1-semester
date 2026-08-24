let table = document.createElement("table");
table.setAttribute("border", "3");

let a = new Number(18);
let b = new Number(1.769);
let tr = table.appendChild(document.createElement("tr"));
tr.appendChild(document.createElement("th")).innerText = "Число";
tr.appendChild(document.createElement("th")).innerText = "Метод";
tr.appendChild(document.createElement("th")).innerText = "Результат";
tr.appendChild(document.createElement("th")).innerText = "Описание метода";

tr = table.appendChild(document.createElement("tr"));
tr.appendChild(document.createElement("td")).innerText = a;
tr.appendChild(document.createElement("td")).innerText = "toExponential(2)";
tr.appendChild(document.createElement("td")).innerText = a.toExponential(2);
tr.appendChild(document.createElement("td")).innerText = "Представляет число в экспоненциальной форме";

tr = table.appendChild(document.createElement("tr"));
tr.appendChild(document.createElement("td")).innerText = b;
tr.appendChild(document.createElement("td")).innerText = "toExponential(2)";
tr.appendChild(document.createElement("td")).innerText = b.toExponential(2);
tr.appendChild(document.createElement("td")).innerText = "Представляет число в экспоненциальной форме";

tr = table.appendChild(document.createElement("tr"));
tr.appendChild(document.createElement("td")).innerText = a;
tr.appendChild(document.createElement("td")).innerText = "toFixed(2)";
tr.appendChild(document.createElement("td")).innerText = a.toFixed(2);
tr.appendChild(document.createElement("td")).innerText = "Представляет число в форме с фиксированным количеством цифр после точки";

tr = table.appendChild(document.createElement("tr"));
tr.appendChild(document.createElement("td")).innerText = b;
tr.appendChild(document.createElement("td")).innerText = "toFixed(2)";
tr.appendChild(document.createElement("td")).innerText = b.toFixed(2);
tr.appendChild(document.createElement("td")).innerText = "Представляет число в форме с фиксированным количеством цифр после точки";

tr = table.appendChild(document.createElement("tr"));
tr.appendChild(document.createElement("td")).innerText = a;
tr.appendChild(document.createElement("td")).innerText = "toPrecision(2)";
tr.appendChild(document.createElement("td")).innerText = a.toPrecision(2);
tr.appendChild(document.createElement("td")).innerText = "Представляет число с заданным общим количеством значащих цифр";

tr = table.appendChild(document.createElement("tr"));
tr.appendChild(document.createElement("td")).innerText = b;
tr.appendChild(document.createElement("td")).innerText = "toPrecision(2)";
tr.appendChild(document.createElement("td")).innerText = b.toPrecision(2);
tr.appendChild(document.createElement("td")).innerText = "Представляет число с заданным общим количеством значащих цифр";

tr = table.appendChild(document.createElement("tr"));
tr.appendChild(document.createElement("td")).innerText = a;
tr.appendChild(document.createElement("td")).innerText = "toString(2)";
tr.appendChild(document.createElement("td")).innerText = a.toString(2);
tr.appendChild(document.createElement("td")).innerText = " Возвращает строковое представление числа в системе счисления с указанным основанием";

tr = table.appendChild(document.createElement("tr"));
tr.appendChild(document.createElement("td")).innerText = b;
tr.appendChild(document.createElement("td")).innerText = "toString(2)";
tr.appendChild(document.createElement("td")).innerText = b.toString(2);
tr.appendChild(document.createElement("td")).innerText = " Возвращает строковое представление числа в системе счисления с указанным основанием";

document.body.append(table);
document.body.appendChild(document.createElement("br"));
