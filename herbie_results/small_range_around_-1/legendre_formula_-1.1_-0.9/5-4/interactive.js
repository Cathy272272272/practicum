function start(x) {
	return ((0.375 + (-3.75 * (x * x))) + (4.375 * (((x * x) * x) * x)));
}
function end(x) {
	return math.log((math.exp((0.375 + (-3.75 * (x * x)))) * math.pow(math.exp(4.375), ((x * x) * (x * x)))));
}
