function start(x) {
	return (((((30240.0 * x) + (-80640.0 * ((x * x) * x))) + (48384.0 * ((((x * x) * x) * x) * x))) + (-9216.0 * ((((((x * x) * x) * x) * x) * x) * x))) + (512.0 * ((((((((x * x) * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return ((((x * x) * ((x * x) * (x * 48384.0))) + ((30240.0 * x) + ((-80640.0 * x) * (x * x)))) + ((math.cbrt((((math.pow(x, 3.0) * math.pow(x, 3.0)) * x) * (-9216.0 + (x * (512.0 * x))))) * math.cbrt((((math.pow(x, 3.0) * math.pow(x, 3.0)) * x) * (-9216.0 + (x * (512.0 * x)))))) * math.cbrt((((math.pow(x, 3.0) * math.pow(x, 3.0)) * x) * (-9216.0 + (x * (512.0 * x)))))));
}
