# Arithmetic Evaluator

A simple calculator to evaluate a simple arithmetic expression.

An arithmetic expression is an expression that results in a numeric value. A numeric value is considered to be real or floating point numbers. A simple arithmetic expression involves numeric values connected by arithmetic operators. The operators are +, −, ∗, and /.

In evaluating arithmetic expression, ∗ and / have higher precedence than + and −. With operators of the same precedence, the order of evaluation is from left to right. We will use s exp to represent simple arithmetic expression, m exp to represent simple arithmetic expression in which all operators are ∗ or /, l op to represent operators + and −, h op to represent operators ∗ and /, and num to represent numeric value.

The solution will be solved recursively:

s exp → m exp

s exp → s exp l op m exp

m exp → num

m exp → m exp h op num

l op → + | −

h op → ∗ | /
