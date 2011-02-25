files=`find . | egrep "\.cc$|\.h$" | egrep -v 'softfloat/bit|softfloat/proc|^./gmock|^./gtest'`
for f in $files; do
	python ~/cpplint.py $f
done
