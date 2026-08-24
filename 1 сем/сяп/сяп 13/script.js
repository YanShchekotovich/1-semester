// Задание 1
function searchN(arr, nElement) {
    for (let i = 0; i < arr.length; i++) {
      if (arr[i] === nElement) {
        return true;
      }
    }
    return false;
}

function ex1() {
    let arr = [];
    for (let i = 0; i < 10; i++) {
      arr.push(Math.floor(Math.random() * 11));
    }
    console.log(arr);
  
    let nElement = prompt("Введите число: ");
  
    let result = searchN(arr, parseInt(nElement));
  
    if (result) {
      console.log("Массив содержит элемент: ", nElement);
    } else {
      console.log("Массив не содержит элемент: ", nElement);
    }
}
ex1();

// Задание 2
function ex2 () {
    let arr = [];
    for (i = 0; i < 10; i++) {
        if (i === 2) {
            arr.push(NaN);
        } else {
            arr.push(Math.floor(Math.random() * 11));
        }
    } 
    console.log(arr);

    if (arr.includes(NaN)) {
        console.log ("В массиве есть NaN");
    } else {
        console.log("В массиве нет NaN");
    }

    // if (arr.indexOf(NaN) !== -1) {
    //     console.log ("В массиве нет NaN");
    // } else {
    //     console.log("В массиве есть NaN");

    // }
}
ex2();

// Задание 3
function ex3() {
  function randomChar() {
    const char = "ABCDEFGZabcdefghijklm12@#$%^";
    return char[Math.floor(Math.random() * char.length)];
  }

  let arr1 = [];
  for (let i = 0; i < 10; i++) {
    arr1.push(randomChar());
  }
  console.log(arr1);

  let arr2 = [];
  for (let i = 0; i < 10; i++) {
    arr2.push(randomChar());
  }
  console.log(arr2);

  let char = prompt("Введите символ: ");

  let hasSymbol1 = false; // Инициализируем hasSymbol как false
  for (let i = 0; i < arr1.length; i++) {
    if (arr1[i].includes(char)) {
      hasSymbol1 = true;
      break;
    }
  }

  let hasSymbol2 = false;
  for (let i = 0; i < arr2.length; i++) {
    if (arr2[i].includes(char)) {
      hasSymbol2 = true;
      break;
    }
  }

  // Вывод результата
  if (hasSymbol1) {
    console.log("Символ", char, "найден в первом массиве");
  } else {
    console.log("Символ", char, "не найден в первом массиве");
  }

  if (hasSymbol2) {
    console.log("Символ", char, "найден во втором массиве");
  } else {
    console.log("Символ", char, "не найден во втором массиве");
  }
}
ex3();

// Задание 4
function ex4() {
    let primer1 = Math.round(1234**2*(23/5)+234);
    document.write("Пример 1: ", primer1, "<br>")

    let primer2 = Math.round(28*(756**2/5)*43**2);
    document.write("Пример 2: ", primer2, "<br>")

    let primer3 = Math.round(3734**6-((434**6+1024**4)/5));
    document.write("Пример 3: ", primer3, "<br>")

    let primer4 = Math.round(6543**35-965732);
    document.write("Пример 4: ", primer4, "<br>")

    let primer5 = Math.round((1000**10+100000**10)/1000);
    document.write("Пример 5: ", primer5, "<br>")
}
ex4();