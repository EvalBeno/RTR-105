set grid
plot "derivative.dat" every ::1 using 1:2 with lines title "cos^2(x)" lw 1.5 ,\
"derivative.dat" every ::1 using 1:3 with lines title "cos'(x) (Analytical Formula)",\
"derivative.dat" every ::1 using 1:4 with lines title "cos'(x) (Numerical Formula)",\
"derivative.dat" every ::1 using 1:5 with lines title "cos''(x) (Analytical Formula)",\
"derivative.dat" every ::1 using 1:6 with lines title "cos''(x) (Numerical Formula)"
