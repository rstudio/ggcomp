% Generated by roxygen2 (4.0.2): do not edit by hand
\name{geometry_jitter}
\alias{geometry_jitter}
\title{Jitter geometries to avoid overplotting.}
\usage{
geometry_jitter(geom, x = NULL, y = NULL)
}
\arguments{
\item{geom}{A geometry data frame.}

\item{x,y}{amount to jitter in x and y directions. In most cases, defaults
to 40\% of the resolution of the data.}
}
\description{
Jitter adds random uniform offsets to avoid overplotting.
}
\details{
Jittering differs a little depending on the underlying geometry:
\describe{
  \item{point,path,polygon,text}{Jitters both x and y.}
  \item{ribbon}{Jitters y1 & y2 by same amount}
  \item{rect}{Jitters x1 & x2, and y1 & y2 by same amount - the
    height and width stay the same.}
}
}
\examples{
scatter_ex \%>\%
 plot() \%>\%
 geometry_jitter() \%>\%
 plot(add = TRUE, col = "red")

# Can override amount of jitter
scatter_ex \%>\%
 plot() \%>\%
 geometry_jitter(0.2, 0.2) \%>\%
 plot(add = TRUE, col = "red")
}

