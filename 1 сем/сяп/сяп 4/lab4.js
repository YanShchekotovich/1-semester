"use strict"

ex1();
ex2();
ex3();

function Gruppa(students) {
this.students = students,
this.sub_stud = function sub_stud(s){ this.students -= s; }
this.add_stud = function add_stud(s){ this.students += s; }
}

function Student(name, surname, physics, math, informatics)
{
    this.name = name;
    this.surname = surname;
    this.physics = physics;
    this.math = math;
    this.informatics = informatics;
    this.get_info = function get_info(){
        alert("Студент: " + name + " " + surname + "\n" + "Физика: " + physics +  "\n" + "Математика: " + math + "\n" + "Информатика: " + informatics + "\n" + "Средний балл: " + this.average_rate());
    }
    this.average_rate = function(){ return ((physics + math + informatics) / 3).toFixed(1);}
}

function fiveReturner()
{
    return 5;
}

function ex1(){
    let gruppa1 = new Gruppa(18);
    gruppa1.add_stud(21);
    gruppa1.sub_stud(5);
    
    
    let gruppa2 = new Gruppa(14);
    gruppa2.add_stud(20);
    gruppa2.sub_stud(2);
    
    let gruppa3 = new Gruppa(17);
    gruppa3.add_stud(17);
    gruppa3.sub_stud(3);
    
    let gruppa4 = new Gruppa(23);
    gruppa4.add_stud(16);
    gruppa4.sub_stud(7);
    
    
    document.write("Первая группа: " + gruppa1.students + "<br>");
    document.write("Вторая группа: " + gruppa2.students + "<br>");
    document.write("Третья группа: " + gruppa3.students + "<br>");
    document.write("Четвертая группа: " + gruppa4.students + "<br>");
}

function ex2(){

    let st1 = new Student("Ян", "Щекотович", 9, 9, 10);
    let st2 = new Student("Никита", "Прусский", 8, 9, 8);
    let st3 = new Student("Федор", "Мельниченко", 7, 8, 9);

    st1.get_info();
    st2.get_info();    
    st3.get_info();

    console.log(typeof(st1.surname));
    console.log(typeof(st1.physics));
    console.log(typeof(st1.average_rate));
}

function ex3(){

    let arr = Array.of(12, 24, 7, 23);
    console.log(arr);
    delete arr[3];
    console.log(arr);
     2 in arr ? console.log("Содержит") :   console.log("Не содержит");
    "name" in Student ?  console.log("Содержит") :  console.log("Не содержит");
    "surname" in Gruppa ? console.log("Содержит") :  console.log("Не содержит");
    arr instanceof Array ?  console.log("Является") :   console.log("Не является");
    arr instanceof Object ? console.log("Является") :   console.log("Не является");
    arr instanceof String ? console.log("Является") :  console.log("Не является");
    console.log(typeof(fiveReturner()));
    console.log(typeof(arr));
    console.log(typeof(Gruppa));
    console.log(typeof(Student)); 
}