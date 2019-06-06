function start(x) {
	return ((((((1.0 + (-6.0 * x)) + (7.5 * (x * x))) + (-3.333333 * ((x * x) * x))) + (0.625 * (((x * x) * x) * x))) + (-0.05 * ((((x * x) * x) * x) * x))) + (0.001389 * (((((x * x) * x) * x) * x) * x)));
}
function end(x) {
	return (((x * math.pow(x, 3.0)) * (((x * x) * 0.001389) + ((x * -0.05) + 0.625))) + math.log(((math.exp(1.0) * math.pow(math.exp(-3.333333), math.pow(x, 3.0))) * math.pow(math.exp(x), ((x * 7.5) - 6.0)))));
}
