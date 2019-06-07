function start(x) {
	return ((((1680.0 + (-13440.0 * (x * x))) + (13440.0 * (((x * x) * x) * x))) + (-3584.0 * (((((x * x) * x) * x) * x) * x))) + (256.0 * (((((((x * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return (((math.pow(x, 3.0) * math.pow(x, 3.0)) * ((256.0 * (x * x)) - 3584.0)) + (((((math.pow(math.pow(math.pow(x, 3.0), 3.0), 3.0) - math.pow(math.pow(x, 3.0), 3.0)) / ((math.pow(math.pow(x, 3.0), (3.0 + 1.0)) + math.pow((x * x), 3.0)) + (math.pow(math.pow(x, 3.0), 3.0) * math.pow(math.pow(x, 3.0), 3.0)))) / ((math.pow(x, 3.0) * math.pow(x, 3.0)) + ((x * x) + (math.pow(x, 3.0) * x)))) * (13440.0 * x)) + 1680.0));
}
