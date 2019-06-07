function start(x) {
	return (((1.875 * x) + (-8.75 * ((x * x) * x))) + (7.875 * ((((x * x) * x) * x) * x)));
}
function end(x) {
	return math.log(math.cbrt(((math.pow(math.pow(math.pow(math.exp(7.875), math.pow(x, 3.0)), x), x) * math.pow(math.pow(math.pow(math.exp(7.875), math.pow(x, 3.0)), x), x)) * (math.pow((math.pow(math.exp(-8.75), math.pow(x, 3.0)) * math.exp((x * 1.875))), 3.0) * math.pow(math.pow(math.pow(math.exp(7.875), math.pow(x, 3.0)), x), x)))));
}
