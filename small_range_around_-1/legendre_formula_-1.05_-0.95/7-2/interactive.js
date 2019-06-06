function start(x) {
	return (-0.5 + (1.5 * (x * x)));
}
function end(x) {
	return math.cbrt((math.sqrt(math.pow((((x * 1.5) * x) + -0.5), 3.0)) * math.sqrt(math.pow((((x * 1.5) * x) + -0.5), 3.0))));
}
