function start(x) {
	return ((-1.5 * x) + (2.5 * ((x * x) * x)));
}
function end(x) {
	return ((-1.5 * x) + ((math.cbrt((2.5 * ((x * x) * x))) * math.cbrt((2.5 * ((x * x) * x)))) * math.cbrt((2.5 * ((x * x) * x)))));
}
