function start(x) {
	return ((((((0.225586 + (-17.595703 * (x * x))) + (219.946289 * (((x * x) * x) * x))) + (-997.089844 * (((((x * x) * x) * x) * x) * x))) + (2029.790039 * (((((((x * x) * x) * x) * x) * x) * x) * x))) + (-1894.470703 * (((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x))) + (660.194336 * (((((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return (((((x * x) * (660.194336 * x)) * math.pow(math.pow(x, 3.0), 3.0)) + ((math.pow(x, 10.0) * -1894.470703) + (219.946289 * math.pow(x, 4.0)))) - (((math.pow(x, 6.0) * 997.089844) - ((x * (x * -17.595703)) + 0.225586)) - ((math.pow(x, 3.0) * math.pow(x, 3.0)) * ((x * 2029.790039) * x))));
}
