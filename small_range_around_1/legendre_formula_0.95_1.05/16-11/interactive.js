function start(x) {
	return ((((((-2.707031 * x) + (58.652344 * ((x * x) * x))) + (-351.914062 * ((((x * x) * x) * x) * x))) + (854.648438 * ((((((x * x) * x) * x) * x) * x) * x))) + (-902.128906 * ((((((((x * x) * x) * x) * x) * x) * x) * x) * x))) + (344.449219 * ((((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return math.log(math.exp((math.log((math.exp((x * -2.707031)) * (math.pow(math.pow(math.exp((x * -351.914062)), (x * x)), (x * x)) * math.pow(math.pow(math.exp(344.449219), math.pow(x, 3.0)), math.pow((x * x), (3.0 + 1.0)))))) + ((((-902.128906 * (x * x)) + 854.648438) * (x * (math.pow(x, 3.0) * math.pow(x, 3.0)))) + ((x * 58.652344) * (x * x))))));
}
