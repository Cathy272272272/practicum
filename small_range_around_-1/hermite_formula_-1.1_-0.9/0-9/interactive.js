function start(x) {
	return (((((30240.0 * x) + (-80640.0 * ((x * x) * x))) + (48384.0 * ((((x * x) * x) * x) * x))) + (-9216.0 * ((((((x * x) * x) * x) * x) * x) * x))) + (512.0 * ((((((((x * x) * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return ((math.pow((((((-9216.0 * x) * (x * x)) * ((x * x) * (x * x))) + (30240.0 * x)) + ((x * x) * ((-80640.0 * x) + ((x * 48384.0) * (x * x))))), 3.0) + math.pow((((x * 512.0) * (x * x)) * math.pow((x * x), 3.0)), 3.0)) / (((((((-9216.0 * x) * (x * x)) * ((x * x) * (x * x))) + (30240.0 * x)) + ((x * x) * ((-80640.0 * x) + ((x * 48384.0) * (x * x))))) * ((math.pow(((((-9216.0 * x) * (x * x)) * ((x * x) * (x * x))) + (30240.0 * x)), 3.0) + math.pow(((x * x) * ((-80640.0 * x) + ((x * 48384.0) * (x * x)))), 3.0)) / ((((x * x) * ((x * -80640.0) + ((x * x) * (48384.0 * x)))) * (((x * x) * ((x * -80640.0) + ((x * x) * (48384.0 * x)))) - ((30240.0 * x) + (((x * x) * (x * x)) * ((-9216.0 * x) * (x * x)))))) + (((30240.0 * x) + (((x * x) * (x * x)) * ((-9216.0 * x) * (x * x)))) * ((30240.0 * x) + (((x * x) * (x * x)) * ((-9216.0 * x) * (x * x)))))))) + (((((math.pow(x, 3.0) * math.pow(x, 3.0)) * x) * ((x * (x * 512.0)) - -9216.0)) - (((x * x) * ((x * 48384.0) * (x * x))) + ((30240.0 * x) + ((x * x) * (-80640.0 * x))))) * (((x * 512.0) * (x * x)) * (math.pow(x, 3.0) * math.pow(x, 3.0))))));
}
