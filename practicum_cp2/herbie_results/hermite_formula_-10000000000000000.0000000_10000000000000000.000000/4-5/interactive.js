function start(x) {
	return (((120.0 * x) + (-160.0 * ((x * x) * x))) + (32.0 * ((((x * x) * x) * x) * x)));
}
function end(x) {
	return (((120.0 * x) + (-160.0 * ((x * x) * x))) + (32.0 * (math.pow(x, (3.0 + 1.0)) * x)));
}
