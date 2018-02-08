#!/bin/bash

g++ $(root-config --cflags --libs) ntuple_data/covmat.C -o ntuple_data/covmat
g++ $(root-config --cflags --libs) ntuple_data/chisq.C -o ntuple_data/chisq

PTMIN=(25 55 75 95 115 150)
PTMAX=(55 75 95 115 150 400)
BINMIN=(1 1 2 2 3 3)
BINMAX=(18 18 18 18 18 18)
# BINMIN=(1 1 2 2 3 3)
# BINMAX=(8 8 8 8 8 8)
# BINMIN=(9 9 9 9 9 9)
# BINMAX=(15 15 15 15 15 15)
# BINMIN=(16 16 16 16 16 16)
# BINMAX=(18 18 18 18 18 18)

PDFNAME=(DSSZCT EPS09CT nCTEQ15CT)
PDFLABEL=(hdssz heps09 hcteq15)

for PDF in $(seq 0 2); do
    for PT in $(seq 1 5); do
        echo "./ntuple_data/covmat ${BINMIN[PT]} ${BINMAX[PT]} ntuple_PDF/output-${PDFNAME[PDF]}-${PTMIN[PT]}-${PTMAX[PT]}.root ntuple_data/datastat_$PT.root ntuple_data/datasys_$PT.root | ./ntuple_data/chisq ntuple_PDF/resultHistograms.root hist_eta_rat_$PT pdfratios.root ${PDFLABEL[PDF]}_${PTMIN[PT]}_${PTMAX[PT]} ${BINMIN[PT]} ${BINMAX[PT]}"

        echo "${PDFNAME[PDF]}: ${PTMIN[PT]} < pt < ${PTMAX[PT]}"
        ./ntuple_data/covmat ${BINMIN[PT]} ${BINMAX[PT]} ntuple_PDF/output-${PDFNAME[PDF]}-${PTMIN[PT]}-${PTMAX[PT]}.root ntuple_data/datastat_$PT.root ntuple_data/datasys_$PT.root | ./ntuple_data/chisq ntuple_PDF/resultHistograms.root hist_eta_rat_$PT pdfratios.root ${PDFLABEL[PDF]}_${PTMIN[PT]}_${PTMAX[PT]} ${BINMIN[PT]} ${BINMAX[PT]}
    done
done
