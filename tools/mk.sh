n=3;
max=23;
while [ "$n" -le "$max" ]; do
  cp -r problem-1 "problem-$n"
  n=`expr "$n" + 1`;
done
