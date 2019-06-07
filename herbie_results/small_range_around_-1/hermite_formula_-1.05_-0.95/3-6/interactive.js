function start(x) {
	return (((-120.0 + (720.0 * (x * x))) + (-480.0 * (((x * x) * x) * x))) + (64.0 * (((((x * x) * x) * x) * x) * x)));
}
function end(x) {
	return (((-120.0 + (720.0 * (x * x))) + (-480.0 * (math.abs((x * x)) * math.abs((x * x))))) + (64.0 * ((((math.cbrt((math.abs((x * x)) * math.abs((x * x)))) * math.cbrt((math.abs((x * x)) * math.abs((x * x))))) * math.cbrt((math.abs((x * x)) * math.abs((x * x))))) * x) * x)));
}
