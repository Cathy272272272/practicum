function start(x) {
	return ((((((((((1.0 + (-11.0 * x)) + (27.5 * (x * x))) + (-27.5 * ((x * x) * x))) + (13.75 * (((x * x) * x) * x))) + (-3.85 * ((((x * x) * x) * x) * x))) + (0.641667 * (((((x * x) * x) * x) * x) * x))) + (-0.065476 * ((((((x * x) * x) * x) * x) * x) * x))) + (0.004092 * (((((((x * x) * x) * x) * x) * x) * x) * x))) + (-0.000152 * ((((((((x * x) * x) * x) * x) * x) * x) * x) * x))) + (3e-06 * (((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return ((((math.pow((x * x), 3.0) * (0.641667 + (x * -0.065476))) + math.log(math.pow(math.pow(math.exp(x), math.pow(x, 3.0)), ((x * -3.85) + 13.75)))) + ((math.pow(x, 8.0) * 0.004092) + ((3e-06 * x) * math.pow(math.pow(x, 3.0), 3.0)))) - (((0.000152 * math.pow(x, 9.0)) - ((-11.0 * x) + 1.0)) - ((x * x) * (27.5 + (x * -27.5)))));
}