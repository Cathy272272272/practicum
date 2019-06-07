function start(x) {
	return (-2.0 + (4.0 * (x * x)));
}
function end(x) {
	return (((((4.0 * x) * x) / math.pow(math.exp(4.0), math.log(x))) * (0.125 - (2.0 / (4.0 * 4.0)))) + ((1.0 - ((0.5 / x) / x)) * (x * (x * 4.0))));
}
