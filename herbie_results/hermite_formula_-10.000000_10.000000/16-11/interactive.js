function start(x) {
	return ((((((-665280.0 * x) + (2217600.0 * ((x * x) * x))) + (-1774080.0 * ((((x * x) * x) * x) * x))) + (506880.0 * ((((((x * x) * x) * x) * x) * x) * x))) + (-56320.0 * ((((((((x * x) * x) * x) * x) * x) * x) * x) * x))) + (2048.0 * ((((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return ((((math.pow(x, 3.0) * (math.pow(x, 3.0) * math.pow(x, 3.0))) * ((x * (x * 2048.0)) + -56320.0)) + ((((506880.0 * x) * (x * x)) * ((x * x) * (x * x))) + (-665280.0 * x))) + math.cbrt(((((x * 2217600.0) + ((x * -1774080.0) * (x * x))) * ((x * 2217600.0) + ((x * -1774080.0) * (x * x)))) * ((math.pow((x * x), 3.0) * x) * (((x * -1774080.0) * x) + 2217600.0)))));
}
