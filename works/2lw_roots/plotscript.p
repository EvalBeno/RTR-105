set key inside top right
set xrange [-pi/4:pi/2]
set yrange [-0.5:1.5]
set xtics pi/12

set arrow from -0.5, graph 0 to -0.5, graph 1 nohead
set arrow from 1.5, graph 0 to 1.5, graph 1 nohead

plot  "ranges.dat" using 1:2 title 'Incremental new ranges' lt 7 lc -1,\
cos(x)*cos(x) title "cos^2x" w lines lt 2 lc 9 lw 2,\
0.7 title "C value" w lines lc 7 lw 1.5
