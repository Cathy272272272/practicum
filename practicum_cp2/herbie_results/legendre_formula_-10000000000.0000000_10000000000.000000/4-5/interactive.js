function start(x) {
	return (((1.875 * x) + (-8.75 * ((x * x) * x))) + (7.875 * ((((x * x) * x) * x) * x)));
}
function end(x) {
	return ((((-8.75 * x) * (x * x)) + (math.pow(x, 4.0) * (x * 7.875))) + (1.875 * x));
}
