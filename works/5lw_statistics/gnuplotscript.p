     set boxwidth 2 relative
     set style data histograms
     set style fill solid 1.0 border -1
     plot 'file.dat' u 2 title ' ', '' u 0:(0):xticlabel(1) w l title ''
