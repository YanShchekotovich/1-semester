"use strict"

function print() {
    let surname = document.forms.main.surname.value; // получаем значение surname 
    let spec = document.getElementById("spec");
    let specValue = spec.options[spec.selectedIndex].value; // получаем текст выбранного option
    let cource = 0;
    let subjects = new Array(); // хранение выбранных предметов

    let courceElement = document.getElementsByName("course"); // курс
    for (let i = 0; i < courceElement.length; i++) {
        if (courceElement[i].checked) {
            cource = courceElement[i].value;
        }
    }

    let subjectElement = document.getElementsByName("subject"); // предметы 
    for (let i = 0; i < subjectElement.length; i++) {
        console.log(subjectElement[i].checked);
        if (subjectElement[i].checked) {
            subjects.push(subjectElement[i].value);
        }
    }
    
    document.write("Студент " + surname + " специальность " + specValue + " курс " + cource + " должен сдавать следующие предметы: ");

    let ul = document.createElement("ul");
    ul.setAttribute("type", "disc");
    for (let i = 0; i < subjects.length; i++) {
        let li = ul.appendChild(document.createElement("li"));
        li.innerHTML = subjects[i];
    }
    document.body.appendChild(ul);

// Задание 4

    let list = document.body.appendChild(document.createElement("select"));
    for (let i = 0; i < subjects.length; i++) {
        let subject = subjects[i];
        let option = list.appendChild(document.createElement("option"));
        option.textContent = subject;
    }
}