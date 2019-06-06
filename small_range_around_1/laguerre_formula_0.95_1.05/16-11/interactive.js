function start(x) {
	return ((((((((((1.0 + (-11.0 * x)) + (27.5 * (x * x))) + (-27.5 * ((x * x) * x))) + (13.75 * (((x * x) * x) * x))) + (-3.85 * ((((x * x) * x) * x) * x))) + (0.641667 * (((((x * x) * x) * x) * x) * x))) + (-0.065476 * ((((((x * x) * x) * x) * x) * x) * x))) + (0.004092 * (((((((x * x) * x) * x) * x) * x) * x) * x))) + (-0.000152 * ((((((((x * x) * x) * x) * x) * x) * x) * x) * x))) + (3e-06 * (((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return math.log((((math.exp((1.0 + (-11.0 * x))) * math.pow(math.exp((x * x)), (27.5 + (-27.5 * x)))) * math.exp((((-0.065476 * x) + 0.641667) * (math.pow(x, 3.0) * math.pow(x, 3.0))))) * ((math.pow(math.exp((3e-06 * x)), math.pow(math.pow(x, 3.0), 3.0)) * math.pow(math.exp(x), (math.pow(x, 3.0) * ((-3.85 * x) + 13.75)))) * math.pow(math.exp(((-0.000152 * x) + 0.004092)), (((x * x) * math.pow(x, 4.0)) * (x * x))))));
}
