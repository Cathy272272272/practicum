function start(x) {
	return (((-120.0 + (720.0 * (x * x))) + (-480.0 * (((x * x) * x) * x))) + (64.0 * (((((x * x) * x) * x) * x) * x)));
}
function end(x) {
	return (((-120.0 + (720.0 * (x * x))) + (-480.0 * (((x * x) * x) * x))) + (64.0 * (((math.log((math.cbrt(math.exp((((x * x) * x) * x))) * math.cbrt(math.exp((((x * x) * x) * x))))) + (math.log(math.sqrt(math.cbrt(math.exp((((x * x) * x) * x))))) + math.log(math.sqrt(math.cbrt(math.exp((((x * x) * x) * x))))))) * x) * x)));
}
