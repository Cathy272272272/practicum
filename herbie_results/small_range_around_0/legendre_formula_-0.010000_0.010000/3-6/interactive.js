function start(x) {
	return (((-0.3125 + (6.5625 * (x * x))) + (-19.6875 * (((x * x) * x) * x))) + (14.4375 * (((((x * x) * x) * x) * x) * x)));
}
function end(x) {
	return (((-0.3125 + (6.5625 * (x * x))) + math.log(math.exp((-19.6875 * (((x * x) * x) * x))))) + (14.4375 * (((((x * x) * x) * x) * x) * x)));
}
