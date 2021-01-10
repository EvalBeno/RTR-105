set samples 100
set xrange [0:pi]
set grid
f(x) = cos(x)*cos(x)

set linetype 1 lc rgb '#A3001E'

set style fill transparent solid 0.35 noborder
filter(x,min,max) = (x >= min && x <= max) ? x : 1/0
plot ''  using (filter($1, 0, 1)):(f($1)) with filledcurves x1 lt 1 notitle,\
     ''  using 1:(f($1)) with lines lw 2 lt 1 title 'cos^2x'
