function start(x) {
	return ((-1.5 * x) + (2.5 * ((x * x) * x)));
}
function end(x) {
	return math.log(math.pow((math.exp(-1.5) * math.pow(math.pow(math.exp(2.5), x), x)), x));
}
