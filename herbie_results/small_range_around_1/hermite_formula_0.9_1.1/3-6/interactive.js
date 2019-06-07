function start(x) {
	return (((-120.0 + (720.0 * (x * x))) + (-480.0 * (((x * x) * x) * x))) + (64.0 * (((((x * x) * x) * x) * x) * x)));
}
function end(x) {
	return math.log(((math.exp(-120.0) * math.pow(math.exp(64.0), math.pow((x * x), 3.0))) * math.pow(math.pow(math.exp(x), x), ((x * (x * -480.0)) + 720.0))));
}
