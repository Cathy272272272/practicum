function start(x) {
	return (((((2.460938 * x) + (-36.09375 * ((x * x) * x))) + (140.765625 * ((((x * x) * x) * x) * x))) + (-201.09375 * ((((((x * x) * x) * x) * x) * x) * x))) + (94.960938 * ((((((((x * x) * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return (((math.pow(x, 3.0) * (x * x)) * (140.765625 + ((x * x) * -201.09375))) + math.log(((math.exp((x * 2.460938)) * math.pow(math.pow(math.exp(-36.09375), (x * x)), x)) * math.pow(math.exp((x * 94.960938)), math.pow((x * x), (1.0 + 3.0))))));
}
