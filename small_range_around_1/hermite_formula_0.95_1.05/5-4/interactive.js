function start(x) {
	return ((12.0 + (-48.0 * (x * x))) + (16.0 * (((x * x) * x) * x)));
}
function end(x) {
	return math.log(math.cbrt((math.pow((math.exp(12.0) * math.pow(math.exp(-48.0), (x * x))), 3.0) * math.pow(math.exp(math.abs((x * x))), (math.abs((x * x)) * ((16.0 + 16.0) + 16.0))))));
}
