function start(x) {
	return (((1.875 * x) + (-8.75 * ((x * x) * x))) + (7.875 * ((((x * x) * x) * x) * x)));
}
function end(x) {
	return math.log((math.pow(math.pow((math.pow((math.cbrt(math.exp(7.875)) * math.cbrt(math.exp(7.875))), math.pow(x, 3.0)) * math.pow(math.cbrt(math.exp(7.875)), math.pow(x, 3.0))), x), x) * (math.exp((1.875 * x)) * math.pow(math.exp(-8.75), math.pow(x, 3.0)))));
}
