function start(x) {
	return (((120.0 * x) + (-160.0 * ((x * x) * x))) + (32.0 * ((((x * x) * x) * x) * x)));
}
function end(x) {
	return (((math.cbrt((math.pow(x, (3.0 + 1.0)) * x)) * math.pow(math.cbrt(x), (1.0 + 4.0))) * (math.cbrt((math.pow(x, (3.0 + 1.0)) * x)) * 32.0)) + ((120.0 * x) + ((x * x) * (-160.0 * x))));
}
