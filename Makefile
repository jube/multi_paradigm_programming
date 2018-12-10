LATEX = pdflatex
TARGETS = mpp.pdf

all: ${TARGETS}

%.pdf: %.tex %.aux
	${LATEX} $<

%.aux: %.tex
	${LATEX} $<

mpp.pdf: mpp.tex bits/*.tex snippets/*.cc

clean:
	rm -f *.aux *.log *.toc *.lof
	rm -f *.bbl *.blg
	rm -f *.nav *.out *.snm
	rm -f *.vrb

mrproper: clean
	rm -f ${TARGETS}
