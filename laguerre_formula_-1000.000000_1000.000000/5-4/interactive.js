function start(x) {
	return ((((1.0 + (-4.0 * x)) + (3.0 * (x * x))) + (-0.666667 * ((x * x) * x))) + (0.041667 * (((x * x) * x) * x)));
}
function end(x) {
	return ((x * ((-4.0 + (x * 3.0)) + ((0.041667 * x) * (x * x)))) + ((math.pow((1.0 / x), -3.0) * -0.666667) + 1.0));
}
