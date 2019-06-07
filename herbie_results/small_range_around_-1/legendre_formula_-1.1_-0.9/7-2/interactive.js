function start(x) {
	return (-0.5 + (1.5 * (x * x)));
}
function end(x) {
	return math.cbrt(((((2.25 * math.pow(x, 4.0)) + 0.25) - (1.5 * math.pow(x, 2.0))) * (((x * x) * 1.5) + -0.5)));
}
