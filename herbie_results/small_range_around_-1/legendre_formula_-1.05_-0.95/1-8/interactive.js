function start(x) {
	return ((((0.273438 + (-9.84375 * (x * x))) + (54.140625 * (((x * x) * x) * x))) + (-93.84375 * (((((x * x) * x) * x) * x) * x))) + (50.273438 * (((((((x * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return (math.cbrt(((((x * (54.140625 * math.pow(x, 3.0))) + (x * (x * -9.84375))) + 0.273438) + ((math.pow(x, 3.0) * math.pow(x, 3.0)) * (-93.84375 + ((50.273438 * x) * x))))) * (math.cbrt((((-93.84375 + ((50.273438 * x) * x)) * (math.pow(x, 3.0) * math.pow(x, 3.0))) + (((math.pow(x, 3.0) * (x * 54.140625)) + 0.273438) + ((x * -9.84375) * x)))) * math.cbrt(((((math.pow((x * x), 3.0) * (((x * x) * 50.273438) + -93.84375)) * (math.pow((x * x), 3.0) * (((x * x) * 50.273438) + -93.84375))) - (((((x * x) * -9.84375) + ((54.140625 * x) * math.pow(x, 3.0))) + 0.273438) * ((((x * x) * -9.84375) + ((54.140625 * x) * math.pow(x, 3.0))) + 0.273438))) / (((-93.84375 + ((50.273438 * x) * x)) * (math.pow(x, 3.0) * math.pow(x, 3.0))) - (((math.pow(x, 3.0) * (x * 54.140625)) + 0.273438) + ((x * -9.84375) * x)))))));
}
