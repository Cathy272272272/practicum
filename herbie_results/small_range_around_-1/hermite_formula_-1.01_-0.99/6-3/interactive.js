function start(x) {
	return ((-12.0 * x) + (8.0 * ((x * x) * x)));
}
function end(x) {
	return math.log((math.pow(math.exp(-12.0), x) * (math.pow(math.sqrt(math.exp(8.0)), math.pow(x, 3.0)) * math.pow(math.sqrt(math.exp(8.0)), math.pow(x, 3.0)))));
}