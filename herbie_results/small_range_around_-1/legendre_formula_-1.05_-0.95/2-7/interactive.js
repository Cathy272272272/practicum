function start(x) {
	return ((((-2.1875 * x) + (19.6875 * ((x * x) * x))) + (-43.3125 * ((((x * x) * x) * x) * x))) + (26.8125 * ((((((x * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return math.log((math.pow(math.pow(math.exp(x), ((x * x) * (x * x))), ((x * (26.8125 * x)) + -43.3125)) * math.cbrt((math.pow((math.exp(-2.1875) * math.exp((19.6875 * (x * x)))), x) * math.pow((math.exp(-2.1875) * math.pow(math.exp(19.6875), (x * x))), (x + x))))));
}
