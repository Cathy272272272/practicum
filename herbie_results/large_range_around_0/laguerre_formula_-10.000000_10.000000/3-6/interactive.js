function start(x) {
	return ((((((1.0 + (-6.0 * x)) + (7.5 * (x * x))) + (-3.333333 * ((x * x) * x))) + (0.625 * (((x * x) * x) * x))) + (-0.05 * ((((x * x) * x) * x) * x))) + (0.001389 * (((((x * x) * x) * x) * x) * x)));
}
function end(x) {
	return ((((x * (0.001389 * x)) * math.exp((math.log((x * x)) + math.log((x * x))))) + ((x * -6.0) + 1.0)) + ((((x * x) * (x * x)) * (0.625 + (-0.05 * x))) + math.cbrt((((math.pow(x, 3.0) * math.pow(x, 3.0)) * (7.5 + (x * -3.333333))) * ((7.5 + (x * -3.333333)) * (7.5 + (x * -3.333333)))))));
}