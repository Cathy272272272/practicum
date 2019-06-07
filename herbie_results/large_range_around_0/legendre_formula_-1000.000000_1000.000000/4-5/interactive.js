function start(x) {
	return (((1.875 * x) + (-8.75 * ((x * x) * x))) + (7.875 * ((((x * x) * x) * x) * x)));
}
function end(x) {
	return (((math.pow(x, 5.0) * 7.875) + ((x * x) * (-8.75 * x))) + (1.875 * x));
}
