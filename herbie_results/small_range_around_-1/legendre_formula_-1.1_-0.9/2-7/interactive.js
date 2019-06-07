function start(x) {
	return ((((-2.1875 * x) + (19.6875 * ((x * x) * x))) + (-43.3125 * ((((x * x) * x) * x) * x))) + (26.8125 * ((((((x * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return ((math.cbrt((((x * math.pow(x, 4.0)) * (-43.3125 + ((x * 26.8125) * x))) + ((x * -2.1875) + ((x * x) * (19.6875 * x))))) * math.cbrt(math.log(((math.exp((26.8125 * math.pow(x, 7.0))) * math.exp((19.6875 * math.pow(x, 3.0)))) / math.exp(((43.3125 * math.pow(x, 5.0)) + (2.1875 * x))))))) * math.cbrt(((x * (((19.6875 * x) * x) + -2.1875)) + ((x * math.pow(x, 4.0)) * ((x * (26.8125 * x)) + -43.3125)))));
}
