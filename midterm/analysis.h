#pragma once
#ifndef GUARD_analysis_h
#define GUARD_analysis_h

#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include "grade.h"
#include "median.h"
#include "Student_info.h"
#include "analysis.h"

using std::ostream;
using std::vector;
using std::string;
using std::domain_error;
using std::endl;


bool did_all_hw(const Student_info&);
double grade_aux(const Student_info&);


double median_analysis(const vector<Student_info>&);
double optimistic_median(const Student_info&);
double optimistic_median_analysis(const vector<Student_info>&);


double average(const vector<double>&);
double average_grade(const Student_info&);
double average_analysis(const vector<Student_info>&);

void write_analysis(ostream& , const string&,
double analysis(const vector<Student_info>&),
const vector<Student_info>&,
const vector<Student_info>&);
#endif