function start(x) {
	return (((((((1.0 + (-7.0 * x)) + (10.5 * (x * x))) + (-5.833333 * ((x * x) * x))) + (1.458333 * (((x * x) * x) * x))) + (-0.175 * ((((x * x) * x) * x) * x))) + (0.009722 * (((((x * x) * x) * x) * x) * x))) + (-0.000198 * ((((((x * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return math.log(((math.exp(((x * -7.0) + 1.0)) * math.exp((math.pow((x * x), 3.0) * ((x * -0.000198) + 0.009722)))) * (math.pow(math.exp((x * x)), ((-5.833333 * x) + 10.5)) * math.pow(math.exp(((x * -0.175) + 1.458333)), math.cbrt(math.pow(math.pow(x, 3.0), (1.0 + 3.0)))))));
}
