function start(x) {
	return (((120.0 * x) + (-160.0 * ((x * x) * x))) + (32.0 * ((((x * x) * x) * x) * x)));
}
function end(x) {
	return (((120.0 * x) + (-160.0 * ((x * x) * x))) + (32.0 * (math.log(math.exp((((x * x) * x) * x))) * x)));
}
