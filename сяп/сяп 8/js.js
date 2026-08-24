"use strict"

// 1
let p1 = document.getElementById("p1");
p1.onmouseover = function () {
    p1.style.color = "red";
}

//2 
let p2 = document.getElementById("p2");
p2.onclick = function () {
    p2.style.fontSize = "60px";
}

//3 
let img1 = document.getElementById("img1");
img1.onclick = function () {
    img1.src = "gif.gif";
    img1.style.width = "450px";
    img1.style.height = "450px";
    su1();
}
function su1 (){
    let audio = new Audio();
    audio.src = "kap.wav";
    audio.autoplay = true;
}
//4 
let p3 = document.getElementById("p3");
p3.onclick = function () {
    p3.innerHTML = "<img src = 22.webp height = 100px width = 100px>";
}

//5 
let img2 = document.getElementById("img2");
img2.onmouseover = function () {
    img2.style.width = "300px";
    img2.style.height = "300px";
}

img2.onmouseout = function () {
    img2.style.width = "100px";
    img2.style.height = "100px";
}

//6
let p4 = document.getElementById("p4");
p4.ondblclick = function () {
    p4.style.border = "2px dotted red";
}