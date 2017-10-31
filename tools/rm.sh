n=1;
max=23;
while [ "$n" -le "$max" ]; do
  cd "problem-$n";
  rm -r statement;
  cd ..;
  n=`expr "$n" + 1`;
done
