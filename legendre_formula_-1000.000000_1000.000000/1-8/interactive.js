function start(x) {
	return ((((0.273438 + (-9.84375 * (x * x))) + (54.140625 * (((x * x) * x) * x))) + (-93.84375 * (((((x * x) * x) * x) * x) * x))) + (50.273438 * (((((((x * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return (((50.273438 * math.pow(x, 8.0)) + (0.273438 - (93.84375 * math.pow(x, 6.0)))) - ((- (x * x)) * (((x * x) * 54.140625) + -9.84375)));
}