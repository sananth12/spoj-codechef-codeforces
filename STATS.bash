echo "Lines of C++:"
( find ./ -name '*.cpp' -print0 | xargs -0 cat ) | wc -l
echo "Lines of C:"
( find ./ -name '*.c' -print0 | xargs -0 cat ) | wc -l
echo "Lines of Python:"
( find ./ -name '*.py' -print0 | xargs -0 cat ) | wc -l
