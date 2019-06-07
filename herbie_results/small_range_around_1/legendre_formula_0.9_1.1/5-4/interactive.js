function start(x) {
	return ((0.375 + (-3.75 * (x * x))) + (4.375 * (((x * x) * x) * x)));
}
function end(x) {
	return (math.sqrt(((0.375 + (-3.75 * (x * x))) + ((4.375 * ((x * x) * x)) * x))) * math.sqrt(((((math.pow(x, 3.0) * x) * 4.375) + ((x * -3.75) * x)) + 0.375)));
}
