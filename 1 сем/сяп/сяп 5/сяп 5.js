//1   
for (let i = 0; i < document.all.length; i++) {
	console.log("Тэг " + document.all[i].tagName + " " + "номер: " + (i + 1));// выводит все теги и их номера
}
//2 
 for (i = 0; i < document.body.childNodes.length; i++) { // цикл перебирает всех потомков document.body и выводит все дочерние элементы
	console.log(document.body.childNodes[i]);
} 

//3.1 
let allSpans = document.getElementsByTagName("span"); // коллекция all
if (allSpans.length > 0) {
let firstSpanContent = allSpans[0].innerHTML;
console.log(firstSpanContent);
}

//3.2
let spanElements = document.querySelectorAll("span"); // частная коллекцию 
if (spanElements.length > 0) {
let firstSpanContent = spanElements[0].innerHTML;
console.log(firstSpanContent);
}

//3.3
let spanElement = document.getElementById("spanElem"); // идентификатор элемента
if (spanElement != null) {
let spanContent = spanElement.innerHTML;
console.log(spanContent);
}

//4
let table = document.getElementById("table");
let avg = 0;
for(let i = 1; i < 5; i++){   //перебираем строки таблицы от индекса 1 до 5
  avg += Number(table.rows[i].cells[1].innerHTML);   // преобразуем его в число 
}

document.getElementById("second").innerHTML += ". Cредний балл: " + (avg / 4);