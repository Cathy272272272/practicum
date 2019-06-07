function start(x) {
	return (((1.0 + (-3.0 * x)) + (1.5 * (x * x))) + (-0.166667 * ((x * x) * x)));
}
function end(x) {
	return (((math.cbrt(((1.0 + (-3.0 * x)) + (1.5 * (x * x)))) * math.cbrt(((1.0 + (-3.0 * x)) + (1.5 * (x * x))))) * math.cbrt(((1.0 + (-3.0 * x)) + (1.5 * (x * x))))) + (-0.166667 * ((x * x) * x)));
}
