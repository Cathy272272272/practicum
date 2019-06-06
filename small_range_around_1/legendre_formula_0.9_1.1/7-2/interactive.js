function start(x) {
	return (-0.5 + (1.5 * (x * x)));
}
function end(x) {
	return math.cbrt((math.cbrt(math.pow(((math.pow(x, 4.0) * 2.25) + (0.25 - ((1.5 * x) * x))), 3.0)) * (((x * x) * 1.5) + -0.5)));
}
