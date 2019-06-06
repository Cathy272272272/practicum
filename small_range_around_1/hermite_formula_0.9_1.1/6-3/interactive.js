function start(x) {
	return ((-12.0 * x) + (8.0 * ((x * x) * x)));
}
function end(x) {
	return ((-12.0 * x) + (8.0 * math.exp((((math.cbrt((3.0 * math.log(x))) * (math.cbrt(math.cbrt((3.0 * math.log(x)))) * math.cbrt(math.cbrt((3.0 * math.log(x)))))) * math.cbrt(math.cbrt((3.0 * math.log(x))))) * math.cbrt((3.0 * math.log(x)))))));
}
