function start(x) {
	return ((0.375 + (-3.75 * (x * x))) + (4.375 * (((x * x) * x) * x)));
}
function end(x) {
	return (0.375 + (((x * 4.375) * math.pow(x, 3.0)) + ((x * -3.75) * x)));
}
