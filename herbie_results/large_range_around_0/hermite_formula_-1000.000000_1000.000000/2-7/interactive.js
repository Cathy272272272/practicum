function start(x) {
	return ((((-1680.0 * x) + (3360.0 * ((x * x) * x))) + (-1344.0 * ((((x * x) * x) * x) * x))) + (128.0 * ((((((x * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return ((((x * x) * (x * x)) * (((x * x) * (128.0 * x)) + (x * -1344.0))) + ((-1680.0 * x) + (3360.0 * math.pow(x, 3.0))));
}
