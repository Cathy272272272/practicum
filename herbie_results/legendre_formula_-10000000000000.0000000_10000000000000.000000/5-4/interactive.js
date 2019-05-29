function start(x) {
	return ((0.375 + (-3.75 * (x * x))) + (4.375 * (((x * x) * x) * x)));
}
function end(x) {
	return ((0.375 + (-3.75 * (x * x))) + ((math.cbrt(((4.375 * x) * math.pow(x, 3.0))) * math.cbrt(((4.375 * x) * math.pow(x, 3.0)))) * math.cbrt((math.pow(x, 3.0) * (4.375 * x)))));
}
