function start(x) {
	return (((((-0.246094 + (13.535156 * (x * x))) + (-117.304688 * (((x * x) * x) * x))) + (351.914062 * (((((x * x) * x) * x) * x) * x))) + (-427.324219 * (((((((x * x) * x) * x) * x) * x) * x) * x))) + (180.425781 * (((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return math.log((math.pow(math.exp(math.pow((x * x), 3.0)), (351.914062 + ((x * x) * -427.324219))) * (math.exp((((180.425781 * x) * x) * math.pow((x * x), (3.0 + 1.0)))) * ((math.pow(math.exp(-117.304688), math.pow(x, 4.0)) * math.exp(-0.246094)) * math.pow(math.pow(math.exp(x), x), 13.535156)))));
}
