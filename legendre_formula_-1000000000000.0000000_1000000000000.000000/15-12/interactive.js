function start(x) {
	return ((((((0.225586 + (-17.595703 * (x * x))) + (219.946289 * (((x * x) * x) * x))) + (-997.089844 * (((((x * x) * x) * x) * x) * x))) + (2029.790039 * (((((((x * x) * x) * x) * x) * x) * x) * x))) + (-1894.470703 * (((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x))) + (660.194336 * (((((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return (((math.pow((x * x), (3.0 + 1.0)) * ((-1894.470703 * x) * x)) + (((x * x) * (x * 660.194336)) * math.pow(math.pow(x, 3.0), 3.0))) + ((math.pow((x * x), 3.0) * ((2029.790039 * (x * x)) + -997.089844)) + (0.225586 + ((math.pow(x, 4.0) * 219.946289) + ((x * x) * -17.595703)))));
}
