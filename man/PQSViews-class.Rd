% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/PQSViews-class.R
\docType{class}
\name{PQSViews-class}
\alias{.PQSViews}
\alias{PQSViews-class}
\title{An S4 class to represent potential quadruplex forming sequences.}
\description{
Represents potential quadruplex forming sequences found by
\code{\link{pqsfinder}} function. This is a subclass of
\code{\link{XStringViews-class}} class and adds one more slot.
}
\section{Slots}{

\describe{
\item{\code{density}}{Numbers of PQS (potential quadruplex forming sequences)
overlapping at each position in input sequence.}
}}

