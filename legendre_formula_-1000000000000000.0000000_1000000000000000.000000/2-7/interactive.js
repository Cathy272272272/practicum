function start(x) {
	return ((((-2.1875 * x) + (19.6875 * ((x * x) * x))) + (-43.3125 * ((((x * x) * x) * x) * x))) + (26.8125 * ((((((x * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return ((math.pow(x, (2.0 + 2.0)) * (math.cbrt(((math.pow(x, 3.0) * math.pow(x, 3.0)) * math.pow((x * 26.8125), 3.0))) + (x * -43.3125))) + (x * (((19.6875 * x) * x) + -2.1875)));
}
