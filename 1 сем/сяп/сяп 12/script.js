// Задание 1
let map = new Map();
map.set("1", "+375-29-649-90-90");
map.set("2", "+375-29-356-39-34");
map.set("3", "+375-29-321-49-54");
map.set("4", "+375-29-500-56-24");
map.set("5", "+375-29-536-77-24");

function getNumber() {
  let key = window.prompt('Введите ключ (1, 2, 3, 4 или 5):');

  if (map.has(key)) { // проверяет, есть ли ключ key в коллекции (нет ключа – возвращает false)
    alert(`Номер телефона: ${map.get(key)}`); // после знака $ будет следовать переменная, значение которой нужно встроить в строку
  } else {
    alert('Ключ не найден в телефонной книге');
  }
}
getNumber();

// Задание 2
let mySet = new Set();

mySet.add(1);
mySet.add(3);
mySet.add(5);

let setSize = mySet.size; // возвращает текущее количество значений в множестве
console.log("Размер Set: " + setSize);

console.log("Есть элемент 1? " + mySet.has(1));
console.log("Есть элемент 4? " + mySet.has(4));
console.log("Есть элемент 5? " + mySet.has(5));

// Задание 3
let proto = {
    surname: "",
    name: "",
    otchestvo: "",
    fio: function() {
        console.log("Имя: " + this.name);
        console.log("Фамилия: " + this.surname);
        console.log("Отчество: " + this.otchestvo);
    }
};

proto.name = "Ян";  
proto.surname = "Щекотович";
proto.otchestvo = "Олегович";
proto.fio();

let proto2 = Object.create(proto);
proto2.name = "Федя";
proto2.fio();

//Задание 4
function hello(name) {
    if (name.length > 0) {
        console.log("Привет, " + name);
    } else {
        console.log("Привет, Аноним");
    }
}
 
hello(""); // если здесь ничего нет, то выведет привет аноним

// Задание 5
function clicker() {
  let count = 0; // Начальное количество нажатий
  
  return function() {
  count++; // Увеличиваем счетчик
  this.textContent = 'Нажатий: ' + count; // Обновляем текст кнопки
  }
  }
  
  // Получаем все кнопки
  let buttons = document.querySelectorAll('button');
  
  // Привязываем событие click к каждой кнопке, используя замыкание
  buttons.forEach(function(button) {
  let clickCounter = clicker(); // Создаем замыкание для каждой кнопки
  button.addEventListener('click', clickCounter);
  });