let str = "Щекотович Ян Олегович";
document.write("Длина ФИО: " + str.length);
let strInUpperCase = str.toUpperCase();
let strInLowerCase = str.toLowerCase();
let strConcatUpperAndLowerCase = strInUpperCase + strInLowerCase;
let words = str.split(' ');
let FIO = words[0][0] + '. ' + words[1][0] + ". " + words[2][0] + '.';
document.write('<br>' + str + '<br>' + strInLowerCase + '<br>' + strInUpperCase + '<br>' + strConcatUpperAndLowerCase + '<br>' + FIO);
