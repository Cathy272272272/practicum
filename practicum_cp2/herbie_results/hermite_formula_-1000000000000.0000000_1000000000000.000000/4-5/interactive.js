function start(x) {
	return (((120.0 * x) + (-160.0 * ((x * x) * x))) + (32.0 * ((((x * x) * x) * x) * x)));
}
function end(x) {
	return ((((-160.0 * x) * (x * x)) + (math.pow(x, 4.0) * (x * 32.0))) + (120.0 * x));
}
