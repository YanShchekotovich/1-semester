let img = document.getElementById("myimg");
left = -100;

setInterval(road, 10); // идентификатор временного интервала

function road() {
img.style.left = left + "px";
left++;
if (left == 300) {
left = 50;
}
}
  