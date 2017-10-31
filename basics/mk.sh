n=40;
max=50;
while [ "$n" -le "$max" ]; do
  cp -r problem-23 "problem-$n"
  n=`expr "$n" + 1`;
done
