function start(x) {
	return ((((-2.1875 * x) + (19.6875 * ((x * x) * x))) + (-43.3125 * ((((x * x) * x) * x) * x))) + (26.8125 * ((((((x * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return ((math.cbrt(math.pow(math.pow(x, 3.0), (3.0 + 1.0))) * (((x * x) * (26.8125 * x)) + (x * -43.3125))) + (x * (((19.6875 * x) * x) + -2.1875)));
}
