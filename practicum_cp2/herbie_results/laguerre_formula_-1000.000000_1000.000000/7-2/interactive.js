function start(x) {
	return ((1.0 + (-2.0 * x)) + (0.5 * (x * x)));
}
function end(x) {
	return ((1.0 + (-2.0 * x)) + ((math.cbrt((0.5 * (x * x))) * math.cbrt((0.5 * (x * x)))) * math.cbrt((0.5 * (x * x)))));
}
