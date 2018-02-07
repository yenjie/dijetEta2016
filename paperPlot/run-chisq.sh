#!/bin/bash

g++ $(root-config --cflags --libs) ntuple_data/covmat.C -o ntuple_data/covmat
g++ $(root-config --cflags --libs) ntuple_data/chisq.C -o ntuple_data/chisq

PTMIN=(25 55 75 95 115 150)
PTMAX=(55 75 95 115 150 400)
NBINS=(18 18 17 17 16 16)

PDFNAME=(DSSZCT EPS09CT nCTEQ15CT)
PDFLABEL=(hdssz heps09 hcteq15)

for PDF in $(seq 0 2); do
    for PT in $(seq 1 5); do
        echo "./ntuple_data/covmat ${NBINS[PT]} ntuple_PDF/output-${PDFNAME[PDF]}-${PTMIN[PT]}-${PTMAX[PT]}.root ntuple_data/datastat_$PT.root ntuple_data/datasys_$PT.root | ./ntuple_data/chisq ntuple_PDF/resultHistograms.root hist_eta_rat_$PT pdfratios.root ${PDFLABEL[PDF]}_${PTMIN[PT]}_${PTMAX[PT]} ${NBINS[PT]}"

        echo "${PDFNAME[PDF]}: ${PTMIN[PT]} < pt < ${PTMAX[PT]}"
        ./ntuple_data/covmat ${NBINS[PT]} ntuple_PDF/output-${PDFNAME[PDF]}-${PTMIN[PT]}-${PTMAX[PT]}.root ntuple_data/datastat_$PT.root ntuple_data/datasys_$PT.root | ./ntuple_data/chisq ntuple_PDF/resultHistograms.root hist_eta_rat_$PT pdfratios.root ${PDFLABEL[PDF]}_${PTMIN[PT]}_${PTMAX[PT]} ${NBINS[PT]}
    done
done
