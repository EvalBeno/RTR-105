#This is GNUPLOT script file which was used to graph the function graphs

set xrange[-2*pi:2*pi]
set yrange[-5:5]
set grid
set ytics 1
set xtics pi/6
set multiplot

plot cos(x)*cos(x) title "cos^2x" w lines lc 7 lw 2,\
1-(x**2) title "SumOf 1",\
1-(x**2)+(x**4/3) title "SumOf 2",\
1-(x**2)+(x**4/3)-(2*x**6/45) title "SumOf 3",\
1-(x**2)+(x**4/3)-(2*x**6/45)+(x**8/315) title "SumOf 4",\
1-(x**2)+(x**4/3)-(2*x**6/45)+(x**8/315)-(2*x**10/14175)+(2*x**12/467775)-(4*x**14/42567525) title "SumOf 5"
