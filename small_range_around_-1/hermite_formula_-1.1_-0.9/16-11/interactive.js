function start(x) {
	return ((((((-665280.0 * x) + (2217600.0 * ((x * x) * x))) + (-1774080.0 * ((((x * x) * x) * x) * x))) + (506880.0 * ((((((x * x) * x) * x) * x) * x) * x))) + (-56320.0 * ((((((((x * x) * x) * x) * x) * x) * x) * x) * x))) + (2048.0 * ((((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return (((((- ((x * x) * (x * x))) * ((2217600.0 * x) - ((1774080.0 * x) * (x * x)))) * ((2217600.0 * x) + ((x * x) * (x * -1774080.0)))) + ((((((x * x) * (x * x)) * ((x * x) * (x * 506880.0))) + (x * -665280.0)) + ((-56320.0 + ((x * x) * 2048.0)) * math.pow(math.pow(x, 3.0), 3.0))) * (((((x * x) * (x * x)) * ((x * x) * (x * 506880.0))) + (x * -665280.0)) + ((-56320.0 + ((x * x) * 2048.0)) * math.pow(math.pow(x, 3.0), 3.0))))) / (((((x * 506880.0) * ((x * x) * (x * x))) - ((((2217600.0 * x) * (2217600.0 * x)) - (((x * x) * (x * -1774080.0)) * ((x * x) * (x * -1774080.0)))) / ((2217600.0 * x) - ((x * x) * (x * -1774080.0))))) * (x * x)) + (((-56320.0 + ((x * x) * 2048.0)) * math.pow(math.pow(x, 3.0), 3.0)) + (x * -665280.0))));
}