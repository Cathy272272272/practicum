function start(x) {
	return (((((-30240.0 + (302400.0 * (x * x))) + (-403200.0 * (((x * x) * x) * x))) + (161280.0 * (((((x * x) * x) * x) * x) * x))) + (-23040.0 * (((((((x * x) * x) * x) * x) * x) * x) * x))) + (1024.0 * (((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return (((math.cbrt(((((x * x) * (x * x)) * (((x * x) * 161280.0) + -403200.0)) + ((((x * x) * 302400.0) + -30240.0) + (((x * x) * -23040.0) * math.pow((x * x), 3.0))))) * math.cbrt(((((x * x) * (x * x)) * (((x * x) * 161280.0) + -403200.0)) + ((((x * x) * 302400.0) + -30240.0) + (((x * x) * -23040.0) * math.pow((x * x), 3.0)))))) * math.cbrt(((-30240.0 + ((math.pow(((x * -403200.0) * math.pow(x, 3.0)), 3.0) + math.pow((x * (x * 302400.0)), 3.0)) / (((x * (302400.0 * x)) * (x * (302400.0 * x))) - (((x * x) * ((x * x) * (x * -403200.0))) * ((302400.0 * x) - ((x * x) * (x * -403200.0))))))) + ((math.pow(x, 3.0) * math.pow(x, 3.0)) * (((x * x) * -23040.0) + 161280.0))))) + (1024.0 * (((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x)));
}
