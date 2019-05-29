function start(x) {
	return ((((1680.0 + (-13440.0 * (x * x))) + (13440.0 * (((x * x) * x) * x))) + (-3584.0 * (((((x * x) * x) * x) * x) * x))) + (256.0 * (((((((x * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return (((math.exp(math.log(((x * 13440.0) * math.pow(x, 3.0)))) + (x * (x * -13440.0))) + 1680.0) + ((math.pow(x, 3.0) * math.pow(x, 3.0)) * (-3584.0 + ((256.0 * x) * x))));
}
