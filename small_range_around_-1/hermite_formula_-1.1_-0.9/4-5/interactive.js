function start(x) {
	return (((120.0 * x) + (-160.0 * ((x * x) * x))) + (32.0 * ((((x * x) * x) * x) * x)));
}
function end(x) {
	return math.log((math.pow(math.pow(math.exp(32.0), math.pow(x, 3.0)), (x * x)) * (math.pow(math.exp(120.0), x) * math.pow(math.pow(math.exp(-160.0), x), (x * x)))));
}
