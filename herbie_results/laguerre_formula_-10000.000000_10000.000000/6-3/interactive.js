function start(x) {
	return (((1.0 + (-3.0 * x)) + (1.5 * (x * x))) + (-0.166667 * ((x * x) * x)));
}
function end(x) {
	return (((x * -3.0) + 1.0) + ((math.cbrt(((1.5 + (-0.166667 * x)) * (x * x))) * math.cbrt(((1.5 + (-0.166667 * x)) * (x * x)))) * math.cbrt(((1.5 + (-0.166667 * x)) * (x * x)))));
}
