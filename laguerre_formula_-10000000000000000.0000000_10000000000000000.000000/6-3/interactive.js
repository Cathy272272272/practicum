function start(x) {
	return (((1.0 + (-3.0 * x)) + (1.5 * (x * x))) + (-0.166667 * ((x * x) * x)));
}
function end(x) {
	return ((math.pow(((x * -3.0) + 1.0), 3.0) + math.pow(((1.5 + (-0.166667 * x)) * (x * x)), 3.0)) / (((1.0 + (x * -3.0)) * (1.0 + (x * -3.0))) + (((x * x) * ((-0.166667 * x) + 1.5)) * (((x * x) * ((-0.166667 * x) + 1.5)) - (1.0 + (x * -3.0))))));
}