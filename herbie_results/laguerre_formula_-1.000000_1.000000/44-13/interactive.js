function start(x) {
	return (((((((((((1.0 + (-13.0 * x)) + (39.0 * (x * x))) + (-47.666667 * ((x * x) * x))) + (29.791667 * (((x * x) * x) * x))) + (-10.725 * ((((x * x) * x) * x) * x))) + (2.383333 * (((((x * x) * x) * x) * x) * x))) + (-0.340476 * ((((((x * x) * x) * x) * x) * x) * x))) + (0.03192 * (((((((x * x) * x) * x) * x) * x) * x) * x))) + (-0.00197 * ((((((((x * x) * x) * x) * x) * x) * x) * x) * x))) + (7.9e-05 * (((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x))) + (-2e-06 * ((((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return ((math.pow((x * x), (3.0 + 1.0)) * ((0.03192 + (-0.00197 * x)) + (((x * -2e-06) + 7.9e-05) * (x * x)))) + ((((x * x) * (39.0 - (x * 47.666667))) + (((x * -0.340476) + 2.383333) * (math.pow(x, 3.0) * math.pow(x, 3.0)))) + ((((x * x) * (x * x)) * (29.791667 + (-10.725 * x))) + ((-13.0 * x) + 1.0))));
}
