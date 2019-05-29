function start(x) {
	return ((12.0 + (-48.0 * (x * x))) + (16.0 * (((x * x) * x) * x)));
}
function end(x) {
	return ((math.pow(12.0, 3.0) + math.pow((((x * 16.0) * math.pow(x, 3.0)) + ((x * -48.0) * x)), 3.0)) / ((12.0 * 12.0) + (((((x * 16.0) * math.pow(x, 3.0)) + ((x * -48.0) * x)) * (((x * 16.0) * math.pow(x, 3.0)) + ((x * -48.0) * x))) - (12.0 * (((x * 16.0) * math.pow(x, 3.0)) + ((x * -48.0) * x))))));
}
