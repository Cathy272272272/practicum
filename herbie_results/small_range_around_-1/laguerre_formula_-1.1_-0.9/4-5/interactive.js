function start(x) {
	return (((((1.0 + (-5.0 * x)) + (5.0 * (x * x))) + (-1.666667 * ((x * x) * x))) + (0.208333 * (((x * x) * x) * x))) + (-0.008333 * ((((x * x) * x) * x) * x)));
}
function end(x) {
	return math.log((math.pow(math.exp((x * x)), (5.0 + (-1.666667 * x))) * (math.pow(math.pow(math.exp(x), math.pow(x, 3.0)), ((x * -0.008333) + 0.208333)) * math.exp((1.0 + (x * -5.0))))));
}
