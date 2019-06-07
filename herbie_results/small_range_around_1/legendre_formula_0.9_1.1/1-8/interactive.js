function start(x) {
	return ((((0.273438 + (-9.84375 * (x * x))) + (54.140625 * (((x * x) * x) * x))) + (-93.84375 * (((((x * x) * x) * x) * x) * x))) + (50.273438 * (((((((x * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return ((math.sqrt(math.log((math.pow(math.exp((math.cbrt(math.pow((x * x), 3.0)) * math.cbrt(math.pow((x * x), 3.0)))), ((math.pow(x, 3.0) * (50.273438 * x)) + (-93.84375 * (x * x)))) * math.pow(math.exp((x * 54.140625)), math.pow(math.exp(3.0), math.log(x)))))) + math.sqrt(((9.84375 * (x * x)) - 0.273438))) * (math.sqrt((((math.pow(x, 3.0) * math.pow(x, 3.0)) * (-93.84375 + ((x * x) * 50.273438))) + ((54.140625 * math.pow(math.exp(3.0), math.log(x))) * x))) - math.sqrt(((9.84375 * (x * x)) - 0.273438))));
}
