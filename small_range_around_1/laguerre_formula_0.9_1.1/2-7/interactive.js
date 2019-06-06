function start(x) {
	return (((((((1.0 + (-7.0 * x)) + (10.5 * (x * x))) + (-5.833333 * ((x * x) * x))) + (1.458333 * (((x * x) * x) * x))) + (-0.175 * ((((x * x) * x) * x) * x))) + (0.009722 * (((((x * x) * x) * x) * x) * x))) + (-0.000198 * ((((((x * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return ((math.exp(((0.0 + math.log(x)) * (3.0 + 3.0))) * ((x * -0.000198) + 0.009722)) + math.log((math.exp(((1.458333 + (x * -0.175)) * math.cbrt(math.pow(math.pow(x, 3.0), (3.0 + 1.0))))) * (math.pow(math.exp(((-5.833333 * x) + 10.5)), (x * x)) * math.exp(((-7.0 * x) + 1.0))))));
}
