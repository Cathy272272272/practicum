function start(x) {
	return ((((((665280.0 + (-7983360.0 * (x * x))) + (13305600.0 * (((x * x) * x) * x))) + (-7096320.0 * (((((x * x) * x) * x) * x) * x))) + (1520640.0 * (((((((x * x) * x) * x) * x) * x) * x) * x))) + (-135168.0 * (((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x))) + (4096.0 * (((((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return (((math.pow((x * x), 3.0) * ((x * x) * (x * x))) * (-135168.0 + (x * (4096.0 * x)))) + ((math.pow((x * x), 3.0) * ((1520640.0 * (x * x)) + -7096320.0)) + (665280.0 + ((math.pow(x, 4.0) * 13305600.0) + ((x * x) * -7983360.0)))));
}
