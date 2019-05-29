function start(x) {
	return (((((30240.0 * x) + (-80640.0 * ((x * x) * x))) + (48384.0 * ((((x * x) * x) * x) * x))) + (-9216.0 * ((((((x * x) * x) * x) * x) * x) * x))) + (512.0 * ((((((((x * x) * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return (((math.cbrt((math.pow(x, 3.0) * (- 80640.0))) * math.cbrt(((x * x) * (-80640.0 * x)))) * math.cbrt(((x * x) * (-80640.0 * x)))) + (((((x * x) * (x * x)) * (48384.0 * x)) + (30240.0 * x)) + (((math.pow(x, 3.0) * math.pow(x, 3.0)) * x) * (((512.0 * x) * x) + -9216.0))));
}
