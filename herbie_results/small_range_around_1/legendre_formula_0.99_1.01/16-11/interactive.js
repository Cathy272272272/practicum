function start(x) {
	return ((((((-2.707031 * x) + (58.652344 * ((x * x) * x))) + (-351.914062 * ((((x * x) * x) * x) * x))) + (854.648438 * ((((((x * x) * x) * x) * x) * x) * x))) + (-902.128906 * ((((((((x * x) * x) * x) * x) * x) * x) * x) * x))) + (344.449219 * ((((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return math.log((math.pow(math.pow(math.exp(x), math.pow((x * x), 3.0)), (854.648438 + ((x * x) * -902.128906))) * ((math.pow(math.pow(math.exp(344.449219), math.pow(x, 3.0)), math.pow((x * x), (3.0 + 1.0))) * math.pow(math.exp(-351.914062), (math.pow(x, 3.0) * (x * x)))) * (math.exp((-2.707031 * x)) * math.pow(math.exp(58.652344), math.pow(x, 3.0))))));
}
