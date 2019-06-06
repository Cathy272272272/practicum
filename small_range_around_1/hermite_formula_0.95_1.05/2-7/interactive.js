function start(x) {
	return ((((-1680.0 * x) + (3360.0 * ((x * x) * x))) + (-1344.0 * ((((x * x) * x) * x) * x))) + (128.0 * ((((((x * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return ((math.sqrt(((-1680.0 * x) + ((((-1344.0 * x) * (x * x)) + (3360.0 * x)) * (x * x)))) * math.sqrt(math.exp(math.log(((3360.0 * math.pow(x, 3.0)) - ((1344.0 * math.pow(x, 5.0)) + (1680.0 * x))))))) + (128.0 * ((((((x * x) * x) * x) * x) * x) * x)));
}
