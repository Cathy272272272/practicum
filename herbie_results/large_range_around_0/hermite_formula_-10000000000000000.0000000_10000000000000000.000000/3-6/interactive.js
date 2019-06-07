function start(x) {
	return (((-120.0 + (720.0 * (x * x))) + (-480.0 * (((x * x) * x) * x))) + (64.0 * (((((x * x) * x) * x) * x) * x)));
}
function end(x) {
	return ((((x * 720.0) * x) + -120.0) + ((64.0 * math.pow(x, 6.0)) - (480.0 * math.pow(x, 4.0))));
}
