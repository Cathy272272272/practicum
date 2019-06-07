function start(x) {
	return ((0.375 + (-3.75 * (x * x))) + (4.375 * (((x * x) * x) * x)));
}
function end(x) {
	return (0.375 + (math.cbrt((((math.pow(x, 4.0) * 4.375) - ((3.75 * x) * x)) * ((math.pow(x, 4.0) * 4.375) - ((3.75 * x) * x)))) * math.cbrt(((4.375 * math.pow(x, 4.0)) - (3.75 * math.pow(x, 2.0))))));
}
