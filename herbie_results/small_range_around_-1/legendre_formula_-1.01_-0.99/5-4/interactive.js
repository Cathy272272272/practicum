function start(x) {
	return ((0.375 + (-3.75 * (x * x))) + (4.375 * (((x * x) * x) * x)));
}
function end(x) {
	return math.log(math.cbrt(math.pow((math.pow(math.exp(4.375), math.pow(x, (1.0 + 3.0))) * (math.exp(0.375) * math.pow(math.pow(math.exp(-3.75), x), x))), 3.0)));
}