// Задание 1
let person = {
    name: 'Федя',
    age: 18,
    city: 'Минск'
};
  
let values = Object.values(person);
console.log(values); 
  
let keys = Object.keys(person);
console.log(keys);

// Задание 2
let numbers = ['1', '22', '333', '4444', '55555'];

let alignedNumbers = numbers.map(number => {
  let paddedNumber = number.padStart(7, '.').padEnd(15, '.');
  return paddedNumber;
});

console.log('Список до выравнивания:');
numbers.forEach(number => {
  console.log(number);
});

console.log('Список после выравнивания:');
alignedNumbers.forEach(number => {
  console.log(number);
});

// Задание 3
let name = "Ян";
let surname = "Щекотович";
let age = 17;

let randomChars = Math.random().toString(36).substring(4, 10);
let fullName = randomChars + name + " " + surname + " " + age;

console.log(fullName);

// Задание 4
let arr = ['1', '7', 'Я', 'Н', '4', '3', '2'];

for (let i = 0; i < 5; i++) {
  arr.unshift('1');
}


for (let i = 0; i < 4; i++) {
  arr.push(' ');
}
arr.push('0');

console.log(arr.join(''));

// Задание 5
let myObject = {
    property1: 'Значение свойства 1',
    property2: 'Значение свойства 2',
    property3: 'Значение свойства 3',
};

let propertyDescription = 'Описание свойства 2';
  
console.log(propertyDescription + ': ' + myObject.property2);

// Задание 6
function ex6() {
    let myObject = {};

    Object.defineProperty(myObject, 'property1', {
        value: 'Значение свойства 1',
        writable: true,
        enumerable: true,
        configurable: true 
});

    Object.defineProperty(myObject, 'property2', {
        value: 'Значение свойства 2',
        writable: false, 
        enumerable: true,
        configurable: false
});

console.log(myObject.property1);
console.log(myObject.property2);
}
ex6();

  