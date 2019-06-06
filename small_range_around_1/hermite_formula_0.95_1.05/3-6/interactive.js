function start(x) {
	return (((-120.0 + (720.0 * (x * x))) + (-480.0 * (((x * x) * x) * x))) + (64.0 * (((((x * x) * x) * x) * x) * x)));
}
function end(x) {
	return (((-120.0 + (720.0 * (x * x))) + ((-480.0 * ((x * x) * x)) * x)) + (64.0 * ((math.cbrt(math.pow(math.pow(x, 3.0), (1.0 + 3.0))) * x) * x)));
}
