////////////////////////////////////////////////////////////////////////////
//
//  Copyright (c) 2017 Zhejiang University
//  All Rights Reserved
//
//  For more information see <https://github.com/ZJUCVG/ENFT>
//  If you use this code, please cite the corresponding publications as 
//  listed on the above website.
//
//  Permission to use, copy, modify and distribute this software and its
//  documentation for educational, research and non-profit purposes only.
//  Any modification based on this work must be open source and prohibited
//  for commercial use.
//  You must retain, in the source form of any derivative works that you 
//  distribute, all copyright, patent, trademark, and attribution notices 
//  from the source form of this work.
//   
//
////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "SequenceSet.h"

void SequenceSet::SetMeasurementStates(const SequenceMeasurementIndexList &iSeqMeas, const MeasurementStateList &meaStates)
{
	SequenceIndex iSeq;
	MeasurementIndex iMea;
	const MeasurementIndex nMeas = FrameIndex(meaStates.size());
	for(MeasurementIndex i = 0; i < nMeas; ++i)
	{
		iSeqMeas[i].Get(iSeq, iMea);
		m_pSeqs[iSeq]->SetMeasurementState(iMea, meaStates[i]);
	}
}