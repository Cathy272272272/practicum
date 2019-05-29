function start(x) {
	return (((((((((1.0 + (-9.0 * x)) + (18.0 * (x * x))) + (-14.0 * ((x * x) * x))) + (5.25 * (((x * x) * x) * x))) + (-1.05 * ((((x * x) * x) * x) * x))) + (0.116667 * (((((x * x) * x) * x) * x) * x))) + (-0.007143 * ((((((x * x) * x) * x) * x) * x) * x))) + (0.000223 * (((((((x * x) * x) * x) * x) * x) * x) * x))) + (-3e-06 * ((((((((x * x) * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return (((((x * 0.000223) * x) * math.pow((x * x), 3.0)) + (((x * x) * -3e-06) * (math.cbrt((math.pow(x, 3.0) * (x * x))) * ((math.cbrt((math.cbrt(math.pow(x, 10.0)) * math.cbrt(math.pow(x, 10.0)))) * math.cbrt(math.cbrt(math.pow(x, 10.0)))) * (x * x))))) + (((((x * x) * (x * x)) * (5.25 + (-1.05 * x))) + (math.pow((x * x), 3.0) * ((-0.007143 * x) + 0.116667))) + (((x * x) * (18.0 + (-14.0 * x))) + ((x * -9.0) + 1.0))));
}
