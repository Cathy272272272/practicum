function start(x) {
	return ((((((((((1.0 + (-12.0 * x)) + (33.0 * (x * x))) + (-36.666667 * ((x * x) * x))) + (20.625 * (((x * x) * x) * x))) + (-6.6 * ((((x * x) * x) * x) * x))) + (1.283333 * (((((x * x) * x) * x) * x) * x))) + (-0.157143 * ((((((x * x) * x) * x) * x) * x) * x))) + (0.012277 * (((((((x * x) * x) * x) * x) * x) * x) * x))) + (-0.000606 * ((((((((x * x) * x) * x) * x) * x) * x) * x) * x))) + (1.8e-05 * (((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return ((((((x * -0.157143) + 1.283333) * math.pow(x, (2.0 * 3.0))) + ((x * -12.0) + 1.0)) + (((-0.000606 * x) + 0.012277) * (math.pow(x, 4.0) * math.pow(x, 4.0)))) + ((((math.pow(x, 4.0) * 1.8e-05) * math.pow((x * x), 3.0)) + (((x * -6.6) + 20.625) * math.pow(x, (2.0 + 2.0)))) + (((-36.666667 * x) + 33.0) * (x * x))));
}
