function start(x) {
	return ((((1.0 + (-4.0 * x)) + (3.0 * (x * x))) + (-0.666667 * ((x * x) * x))) + (0.041667 * (((x * x) * x) * x)));
}
function end(x) {
	return (((1.0 + ((-4.0 + (3.0 * x)) * x)) + (-0.666667 * math.log(math.exp(math.pow(x, 3.0))))) + (0.041667 * (((x * x) * x) * x)));
}
