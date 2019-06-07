function start(x) {
	return (((((2.460938 * x) + (-36.09375 * ((x * x) * x))) + (140.765625 * ((((x * x) * x) * x) * x))) + (-201.09375 * ((((((x * x) * x) * x) * x) * x) * x))) + (94.960938 * ((((((((x * x) * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return math.log((math.exp(((math.pow(x, 3.0) * (x * x)) * (140.765625 + ((x * x) * -201.09375)))) * (math.exp((((x * 94.960938) * (x * x)) * math.pow((x * x), 3.0))) * ((math.cbrt(math.exp((((x * x) * (x * -36.09375)) + (x * 2.460938)))) * math.cbrt(math.exp((((x * x) * (x * -36.09375)) + (x * 2.460938))))) * math.cbrt(math.exp((((x * x) * (x * -36.09375)) + (x * 2.460938))))))));
}
