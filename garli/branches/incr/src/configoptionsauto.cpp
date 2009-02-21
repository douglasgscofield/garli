// GARLI version 0.96b8 source code
// Copyright 2005-2008 Derrick J. Zwickl
// email: zwickl@nescent.org
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

// Ideally this file would be autogenerated from some easy-to-parse
//	interface description (e.g. a PISE XML file).
#include "ncl/nxsstring.h"
#include "configoptions.h"

bool GeneralGamlConfig::IsValid() const { 
}

bool * GeneralGamlConfig::GetBoolOptReference(const char * n) {
	if (NxsString::case_insensitive_equals(n, "collapsebranches"))
		return &collapseBranches;
	if (NxsString::case_insensitive_equals(n, "enforcetermconditions"))
		return &enforceTermConditions;
	if (NxsString::case_insensitive_equals(n, "inferinternalstateprobs"))
		return &inferInternalStateProbs;
	if (NxsString::case_insensitive_equals(n, "outputcurrentbesttopology"))
		return &outputCurrentBestTopology;
	if (NxsString::case_insensitive_equals(n, "outputcurrentbesttree"))
		return &outputCurrentBestTopology;
	if (NxsString::case_insensitive_equals(n, "outputeachbettertopology"))
		return &outputTreelog;
	if (NxsString::case_insensitive_equals(n, "outputmostlyuselessfiles"))
		return &outputMostlyUselessFiles;
	if (NxsString::case_insensitive_equals(n, "outputphyliptree"))
		return &outputPhylipTree;
	if (NxsString::case_insensitive_equals(n, "refinestart"))
		return &refineStart;
	if (NxsString::case_insensitive_equals(n, "restart"))
		return &restart;
#	ifdef INCLUDE_PERTURBATION
		if (NxsString::case_insensitive_equals(n, "restartafterabandon"))
			return &restartAfterAbandon;
#	endif
	if (NxsString::case_insensitive_equals(n, "writecheckpoints"))
		return &checkpoint;
	return 0L;
	}

double * GeneralGamlConfig::GetDoubleOptReference(const char * n) {
	if (NxsString::case_insensitive_equals(n, "holdoverpenalty"))
		return &holdoverPenalty;
#	ifdef INCLUDE_PERTURBATION
		if (NxsString::case_insensitive_equals(n, "pertthresh"))
			return &pertThresh;
		if (NxsString::case_insensitive_equals(n, "randpecrweight"))
			return &randPECRweight;
		if (NxsString::case_insensitive_equals(n, "ratchetoffthresh"))
			return &ratchetOffThresh;
		if (NxsString::case_insensitive_equals(n, "ratchetproportion"))
			return &ratchetProportion;
#	endif
	if (NxsString::case_insensitive_equals(n, "sendinterval"))
		return &sendInterval;
	if (NxsString::case_insensitive_equals(n, "treerejectionthreshold"))
		return &treeRejectionThreshold;
	if (NxsString::case_insensitive_equals(n, "brlenweight"))
		return &brlenWeight;
	if (NxsString::case_insensitive_equals(n, "limsprweight"))
		return &limSPRweight;
	if (NxsString::case_insensitive_equals(n, "modweight"))
		return &modWeight;
	if (NxsString::case_insensitive_equals(n, "randnniweight"))
		return &randNNIweight;
	if (NxsString::case_insensitive_equals(n, "randsprweight"))
		return &randSPRweight;
	if (NxsString::case_insensitive_equals(n, "topoweight"))
		return &topoWeight;
	if (NxsString::case_insensitive_equals(n, "availablememory"))
		return &availableMemory;
	if (NxsString::case_insensitive_equals(n, "uniqueswapbias"))
		return &uniqueSwapBias;
	if (NxsString::case_insensitive_equals(n, "gammashapebrlen"))
		return &gammaShapeBrlen;
	if (NxsString::case_insensitive_equals(n, "gammashapemodel"))
		return &gammaShapeModel;
	if (NxsString::case_insensitive_equals(n, "maxbrlen"))
		return &maxBrlen;
	if (NxsString::case_insensitive_equals(n, "meanbrlenmuts"))
		return &meanBrlenMuts;
	if (NxsString::case_insensitive_equals(n, "megsclamemory"))
		return &megsClaMemory;
	if (NxsString::case_insensitive_equals(n, "minbrlen"))
		return &minBrlen;
	if (NxsString::case_insensitive_equals(n, "minoptprec"))
		return &minOptPrec;
	if (NxsString::case_insensitive_equals(n, "precreductionfactor"))
		return &precReductionFactor;
	if (NxsString::case_insensitive_equals(n, "resampleproportion"))
		return &resampleProportion;
	if (NxsString::case_insensitive_equals(n, "scorethreshforterm"))
		return &improveOverStoredIntervalsThresh;
	if (NxsString::case_insensitive_equals(n, "selectionintensity"))
		return &selectionIntensity;
	if (NxsString::case_insensitive_equals(n, "significanttopochange"))
		return &significantTopoChange;
	if (NxsString::case_insensitive_equals(n, "startingbrlen"))
		return &startingBrlen;
	if (NxsString::case_insensitive_equals(n, "startoptprec"))
		return &startOptPrec;
	if (NxsString::case_insensitive_equals(n, "uniqueswapbias"))
		return &uniqueSwapBias;
	return 0L;
	}

int * GeneralGamlConfig::GetIntOptReference(const char * n) {
	if (NxsString::case_insensitive_equals(n, "randseed"))
		return &randseed;
#	ifdef INCLUDE_PERTURBATION
		if (NxsString::case_insensitive_equals(n, "gensbeforerestart"))
			return &gensBeforeRestart;
		if (NxsString::case_insensitive_equals(n, "maxpertsnoimprove"))
			return &maxPertsNoImprove;
		if (NxsString::case_insensitive_equals(n, "minpertinterval"))
			return &minPertInterval;
		if (NxsString::case_insensitive_equals(n, "nnimaxattempts"))
			return &nniMaxAttempts;
		if (NxsString::case_insensitive_equals(n, "nnitargetaccepts"))
			return &nniTargetAccepts;
		if (NxsString::case_insensitive_equals(n, "numsprcycles"))
			return &numSprCycles;
		if (NxsString::case_insensitive_equals(n, "sprpertrange"))
			return &sprPertRange;
		if (NxsString::case_insensitive_equals(n, "perttype"))
			return &pertType;
		if (NxsString::case_insensitive_equals(n, "ratchetmaxgen"))
			return &ratchetMaxGen;
#	endif
	if (NxsString::case_insensitive_equals(n, "numberofprecreductions"))
		return &numPrecReductions;
	return 0L;
	}

std::string * GeneralGamlConfig::GetStringOptReference(const char * n) {
	if (NxsString::case_insensitive_equals(n, "arbitrarystring"))
		return &arbitraryString;
	if (NxsString::case_insensitive_equals(n, "constraintfile"))
		return &constraintfile;
	if (NxsString::case_insensitive_equals(n, "datafname"))
		return &datafname;
	if (NxsString::case_insensitive_equals(n, "datatype"))
		return &datatype;
	if (NxsString::case_insensitive_equals(n, "geneticcode"))
		return &geneticCode;
	if (NxsString::case_insensitive_equals(n, "incompletetreefname"))
		return &incompletetreefname;
	if (NxsString::case_insensitive_equals(n, "invariantsites"))
		return &proportionInvariant;
	if (NxsString::case_insensitive_equals(n, "ofprefix"))
		return &ofprefix;
	if (NxsString::case_insensitive_equals(n, "outgroup"))
		return &outgroupString;
	if (NxsString::case_insensitive_equals(n, "ratehetmodel"))
		return &rateHetModel;
	if (NxsString::case_insensitive_equals(n, "ratematrix"))
		return &rateMatrix;
	if (NxsString::case_insensitive_equals(n, "statefrequencies"))
		return &stateFrequencies;
	if (NxsString::case_insensitive_equals(n, "streefname"))
		return &streefname;
	return 0L;
	}

unsigned * GeneralGamlConfig::GetUnsignedOptReference(const char * n) {
	if (NxsString::case_insensitive_equals(n, "attachmentspertaxon"))
		return &attachmentsPerTaxon;
	if (NxsString::case_insensitive_equals(n, "genthreshfortopoterm"))
		return &lastTopoImproveThresh;
	if (NxsString::case_insensitive_equals(n, "intervallength"))
		return &intervalLength;
	if (NxsString::case_insensitive_equals(n, "intervalstostore"))
		return &intervalsToStore;
	if (NxsString::case_insensitive_equals(n, "limsprrange"))
		return &limSPRrange;
	if (NxsString::case_insensitive_equals(n, "nindivs"))
		return &nindivs;
	if (NxsString::case_insensitive_equals(n, "searchreps"))
		return &searchReps;
	if (NxsString::case_insensitive_equals(n, "stopgen"))
		return &stopgen;
	if (NxsString::case_insensitive_equals(n, "stoptime"))
		return &stoptime;
	if (NxsString::case_insensitive_equals(n, "bootstrapreps"))
		return &bootstrapReps;
	if (NxsString::case_insensitive_equals(n, "holdover"))
		return &holdover;
	if (NxsString::case_insensitive_equals(n, "logevery"))
		return &logevery;
	if (NxsString::case_insensitive_equals(n, "numratecats"))
		return &numRateCats;
	if (NxsString::case_insensitive_equals(n, "runmode"))
		return &runmode;
	if (NxsString::case_insensitive_equals(n, "saveevery"))
		return &saveevery;
	return 0L;
	}
