var spec = new Array();
spec[0] = 6-Math.pow(Math.PI, 2)+3*Math.exp(8);
spec[1] = 2*Math.cos(4)+Math.cos(12)+8-Math.exp(3);
spec[2] = 3*Math.sin(9)+Math.log(5)+Math.sqrt(2);
spec[3] = 2*Math.tan(5)+6-Math.PI+Math.sqrt(12);
document.write("Максимальный элемент массива: " + Math.max(...spec) + "\nИндекс максимального элемента массива: " + spec.indexOf(Math.max(...spec)));
document.write("Минимальный элемент массива: " + Math.min(...spec) + "\nИндекс миинмального элемента массива: " + spec.indexOf(Math.min(...spec)));
