// Задание 1
function ex1() {
    let regex = /./s;
    let string = 'Hello\nWorld!';
    console.log(string.match(regex));    
}
ex1();

// Задание 2
function ex2() {

    function zamena(text) {
        text = text.replace(/\[u\](.*?)\[\/u\]/gim, '<u>$1</u>')
        return text
      }
      
      let line = "[u]мой\n текст[/u]"
      console.log(zamena(line))
}
ex2();

//Задание 3
function ex3() {
    let input = "<a href='https://ru.wikipedia.org/wiki/Volkswagen_Sharan>.</a> Ссылка.\n<a href='https://www.java.com/pl/'> ссылка c другим содержанием.</a>";
    let output = input.replace(/<a/g, '<u>');
    console.log(output);
} 
ex3();

// Задаине 4
function ex4() {
    let string = "firstName, lastName";
    console.log(string);
    let replacedString = string.replace(/(\w+), (\w+)/, "$2, $1");
    console.log(replacedString);
}
ex4();

// Задание 5
function ex5() {

    let obj = {
        prop1: "Значение свойства 1",
        prop2: "Значение свойства 2",
        prop3: "Значение свойства 3",
};
  
    let { prop1, prop2, ...rest } = obj;
  
    console.log(rest);
}
ex5();

// Задание 6
function ex6() {

    let obj1 = {
        prop1: "Значение свойства 1",
        prop2: "Значение свойства 2",
};
  
    let { prop1, ...rest1 } = obj1;

    let obj2 = {
        ...rest1,
        firstName: "Александр",
        lastName: "Гончар",
};
      console.log(obj2); 
}
ex6();