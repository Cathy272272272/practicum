function start(x) {
	return ((((0.273438 + (-9.84375 * (x * x))) + (54.140625 * (((x * x) * x) * x))) + (-93.84375 * (((((x * x) * x) * x) * x) * x))) + (50.273438 * (((((((x * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return ((math.cbrt((((((x * 54.140625) * math.pow(x, 3.0)) + (x * (x * -9.84375))) + 0.273438) + ((math.pow(x, 3.0) * math.pow(x, 3.0)) * (-93.84375 + ((50.273438 * x) * x))))) * math.cbrt((((((x * 54.140625) * math.pow(x, 3.0)) + (x * (x * -9.84375))) + 0.273438) + ((math.pow(x, 3.0) * math.pow(x, 3.0)) * (-93.84375 + ((50.273438 * x) * x)))))) * math.cbrt(math.log(((math.exp((54.140625 * math.pow(x, 4.0))) * math.exp((0.273438 + (50.273438 * math.pow(x, 8.0))))) / (math.exp((9.84375 * math.pow(x, 2.0))) * math.pow(math.exp(93.84375), math.pow(x, 6.0)))))));
}
