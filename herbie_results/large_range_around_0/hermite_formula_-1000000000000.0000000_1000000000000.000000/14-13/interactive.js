function start(x) {
	return (((((((17297280.0 * x) + (-69189120.0 * ((x * x) * x))) + (69189120.0 * ((((x * x) * x) * x) * x))) + (-26357760.0 * ((((((x * x) * x) * x) * x) * x) * x))) + (4392960.0 * ((((((((x * x) * x) * x) * x) * x) * x) * x) * x))) + (-319488.0 * ((((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x) * x))) + (8192.0 * ((((((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return (((x * math.pow((x * x), 3.0)) * (-26357760.0 + ((x * x) * 4392960.0))) + (((x * x) * (((x * 69189120.0) * (x * x)) + (-69189120.0 * x))) + ((x * 17297280.0) + ((math.pow(x, 13.0) * 8192.0) - (319488.0 * math.pow(x, 11.0))))));
}
