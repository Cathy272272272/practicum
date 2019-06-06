function start(x) {
	return ((((1680.0 + (-13440.0 * (x * x))) + (13440.0 * (((x * x) * x) * x))) + (-3584.0 * (((((x * x) * x) * x) * x) * x))) + (256.0 * (((((((x * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return ((((-3584.0 + (x * (x * 256.0))) * math.cbrt((math.pow(math.pow(x, 3.0), 3.0) * math.pow(math.pow(x, 3.0), 3.0)))) + 1680.0) + ((13440.0 * x) * ((math.pow(math.pow(math.exp(3.0), (0.0 + math.log(x))), 3.0) - math.pow(x, 3.0)) / (((math.pow(math.exp(3.0), math.log(x)) + x) * x) + (math.pow(math.exp(3.0), math.log(x)) * math.pow(math.exp(3.0), math.log(x)))))));
}
