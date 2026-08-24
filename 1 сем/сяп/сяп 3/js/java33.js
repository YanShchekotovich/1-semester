var spec = ['pow', 'pop', 'push', 'shift', 'round', 'floor', 'sline', 'sort'];
let specOfMathMethods = [];
let specOfArrayMethods = [];
for (let i = 0; i < spec.length; i++) {
	if (Math.hasOwnProperty(spec[i])) 
		specOfMathMethods.push(spec[i]);
	else if (Array.prototype.hasOwnProperty(spec[i]))
		specOfArrayMethods.push(spec[i]);
}

specOfArrayMethods.push('reverse');
specOfMathMethods.push('PI');

document.write("Исходный массив: " + spec + "<br>");
document.write("Массив с методами массива: " + specOfArrayMethods + "<br>");
document.write("Длина массива с методами массива: " + specOfArrayMethods.length + "<br>" );
document.write("Массив с методами объекта Math: " + specOfMathMethods + "<br>");
document.write("Длина массива с методами объекта Math: " + specOfMathMethods.length + "<br>");
