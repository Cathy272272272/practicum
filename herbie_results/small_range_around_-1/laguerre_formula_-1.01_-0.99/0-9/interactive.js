function start(x) {
	return (((((((((1.0 + (-9.0 * x)) + (18.0 * (x * x))) + (-14.0 * ((x * x) * x))) + (5.25 * (((x * x) * x) * x))) + (-1.05 * ((((x * x) * x) * x) * x))) + (0.116667 * (((((x * x) * x) * x) * x) * x))) + (-0.007143 * ((((((x * x) * x) * x) * x) * x) * x))) + (0.000223 * (((((((x * x) * x) * x) * x) * x) * x) * x))) + (-3e-06 * ((((((((x * x) * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return (((((0.000223 + (-3e-06 * x)) * math.pow(x, 8.0)) + ((-9.0 * x) + 1.0)) + math.cbrt((((math.pow(x, 3.0) * math.pow(x, 3.0)) * (18.0 + (-14.0 * x))) * ((18.0 + (-14.0 * x)) * (18.0 + (-14.0 * x)))))) + ((((x * -1.05) + 5.25) + ((x * x) * ((x * -0.007143) + 0.116667))) * math.pow(x, (2.0 + 2.0))));
}
