function start(x) {
	return ((-1.5 * x) + (2.5 * ((x * x) * x)));
}
function end(x) {
	return math.log((math.exp((-1.5 * x)) * math.pow(math.exp(2.5), math.pow(x, 3.0))));
}
