// ResultsParticipantForSeriesSet.cpp : implementation file
//

#include "stdafx.h"

#include "CSV.h"
#include "StringStream.h"
#include "RecordsetEx.h"

#include "ResultsParticipantForSeriesSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CResultsParticipantForSeriesSet

IMPLEMENT_DYNAMIC(CResultsParticipantForSeriesSet, CRecordsetEx)

CResultsParticipantForSeriesSet::CResultsParticipantForSeriesSet(CDatabase* pdb)
	: CRecordsetEx(pdb)
{
	//{{AFX_FIELD_INIT(CResultsParticipantForSeriesSet)
	m_SeriesID = 0;
	m_EventID = 0;
	m_PersonID = 0;
//	m_DivisionActual = 0;
//	m_AgeGroup = 0;
//	m_GroupIDActual = 0;
//	m_GroupStartActual = 0.0f;
	m_NewGroupID = 0;
	m_NewGroupMessage = _T("");
//	m_GrossPerformanceHOUR = 0;
//	m_GrossPerformanceMIN = 0;
//	m_GrossPerformanceSEC = 0.0f;
//	m_NetPerformanceHOUR = 0;
//	m_NetPerformanceMIN = 0;
//	m_NetPerformanceSEC = 0.0f;
//	m_Place = 0;
//	m_OverallPlace = 0;
//	m_Percentile = 0;
//	m_Points = 0;
//	m_Eligible = _T("");
//	m_EventRate = 0.0f;
//	m_GroupRateActual = 0.0f;
//	m_ChestNumber = _T("");
//	m_WorldStandard = 0.0f;
	m_GroupIDSupposedTo = 0;
//	m_DivisionSupposedTo = 0;
//	m_OrgID = 0;

//	m_PFS_SeriesID = 0;
//	m_PFS_PersonID = 0;
	m_PFS_GroupIDSupposedTo = 0;
//	m_PFS_DivisionSupposedTo = 0;
//	m_PFS_ConsistencyAgeGroup = 0;
//	m_PFS_ConsistencyEventsCurrent = 0;
//	m_PFS_ConsistencyEventsOlder = 0;
//	m_PFS_ConsistencyEventsRate = 0.0f;
//	m_PFS_EventsForSeason = 0;
//	m_PFS_GrossPoints = 0;
//	m_PFS_LowPoints = 0;
//	m_PFS_NetPoints = 0;
//	m_PFS_EligibilityForEvent = _T("");
//	m_PFS_OrgID = 0;
//	m_PFS_EventsForSeries = 0;

//	m_nFields = 42;
	m_nFields = 7;
	//}}AFX_FIELD_INIT
	m_nDefaultType = dynaset;
}


CString CResultsParticipantForSeriesSet::GetDefaultConnect()
{
	return _T("");
}

CString CResultsParticipantForSeriesSet::GetDefaultSQL()
{
	return _T("[Results],[ParticipantForSeries]");
}

void CResultsParticipantForSeriesSet::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CResultsParticipantForSeriesSet)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Long(pFX, _T("[Results].[SeriesID]"), m_SeriesID);
	RFX_Long(pFX, _T("[Results].[EventID]"), m_EventID);
	RFX_Long(pFX, _T("[Results].[PersonID]"), m_PersonID);
//	RFX_Long(pFX, _T("[Results].[DivisionActual]"), m_DivisionActual);
//	RFX_Long(pFX, _T("[Results].[AgeGroup]"), m_AgeGroup);
//	RFX_Long(pFX, _T("[Results].[GroupIDActual]"), m_GroupIDActual);
//	RFX_Double(pFX, _T("[Results].[GroupStartActual]"), m_GroupStartActual);
	RFX_Long(pFX, _T("[Results].[NewGroupID]"), m_NewGroupID);
	RFX_Text(pFX, _T("[Results].[NewGroupMessage]"), m_NewGroupMessage);
//	RFX_Long(pFX, _T("[Results].[GrossPerformanceHOUR]"), m_GrossPerformanceHOUR);
//	RFX_Long(pFX, _T("[Results].[GrossPerformanceMIN]"), m_GrossPerformanceMIN);
//	RFX_Double(pFX, _T("[Results].[GrossPerformanceSEC]"), m_GrossPerformanceSEC);
//	RFX_Long(pFX, _T("[Results].[NetPerformanceHOUR]"), m_NetPerformanceHOUR);
//	RFX_Long(pFX, _T("[Results].[NetPerformanceMIN]"), m_NetPerformanceMIN);
//	RFX_Double(pFX, _T("[Results].[NetPerformanceSEC]"), m_NetPerformanceSEC);
//	RFX_Long(pFX, _T("[Results].[Place]"), m_Place);
//	RFX_Long(pFX, _T("[Results].[OverallPlace]"), m_OverallPlace);
//	RFX_Long(pFX, _T("[Results].[Percentile]"), m_Percentile);
//	RFX_Long(pFX, _T("[Results].[Points]"), m_Points);
//	RFX_Text(pFX, _T("[Results].[Eligible]"), m_Eligible);
//	RFX_Double(pFX, _T("[Results].[EventRate]"), m_EventRate);
//	RFX_Double(pFX, _T("[Results].[GroupRateActual]"), m_GroupRateActual);
//	RFX_Text(pFX, _T("[Results].[ChestNumber]"), m_ChestNumber);
//	RFX_Double(pFX, _T("[Results].[WorldStandard]"), m_WorldStandard);
	RFX_Long(pFX, _T("[Results].[GroupIDSupposedTo]"), m_GroupIDSupposedTo);
//	RFX_Long(pFX, _T("[Results].[DivisionSupposedTo]"), m_DivisionSupposedTo);
//	RFX_Long(pFX, _T("[Results].[OrgID]"), m_OrgID);


//	RFX_Long(pFX, _T("[ParticipantForSeries].[SeriesID]"), m_PFS_SeriesID);
//	RFX_Long(pFX, _T("[ParticipantForSeries].[PersonID]"), m_PFS_PersonID);
	RFX_Long(pFX, _T("[ParticipantForSeries].[GroupIDSupposedTo]"), m_PFS_GroupIDSupposedTo);
//	RFX_Long(pFX, _T("[ParticipantForSeries].[DivisionSupposedTo]"), m_PFS_DivisionSupposedTo);
//	RFX_Long(pFX, _T("[ParticipantForSeries].[ConsistencyAgeGroup]"), m_PFS_ConsistencyAgeGroup);
//	RFX_Long(pFX, _T("[ParticipantForSeries].[ConsistencyEventsCurrent]"), m_PFS_ConsistencyEventsCurrent);
//	RFX_Long(pFX, _T("[ParticipantForSeries].[ConsistencyEventsOlder]"), m_PFS_ConsistencyEventsOlder);
//	RFX_Double(pFX, _T("[ParticipantForSeries].[ConsistencyEventsRate]"), m_PFS_ConsistencyEventsRate);
//	RFX_Long(pFX, _T("[ParticipantForSeries].[EventsForSeason]"), m_PFS_EventsForSeason);
//	RFX_Long(pFX, _T("[ParticipantForSeries].[GrossPoints]"), m_PFS_GrossPoints);
//	RFX_Long(pFX, _T("[ParticipantForSeries].[LowPoints]"), m_PFS_LowPoints);
//	RFX_Long(pFX, _T("[ParticipantForSeries].[NetPoints]"), m_PFS_NetPoints);
//	RFX_Text(pFX, _T("[ParticipantForSeries].[EligibilityForEvent]"), m_PFS_EligibilityForEvent);
//	RFX_Long(pFX, _T("[ParticipantForSeries].[OrgID]"), m_PFS_OrgID);
//	RFX_Long(pFX, _T("[ParticipantForSeries].[EventsForSeries]"), m_PFS_EventsForSeries);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CResultsParticipantForSeriesSet diagnostics

#ifdef _DEBUG
void CResultsParticipantForSeriesSet::AssertValid() const
{
	CRecordsetEx::AssertValid();
}

void CResultsParticipantForSeriesSet::Dump(CDumpContext& dc) const
{
	CRecordsetEx::Dump(dc);
}
#endif //_DEBUG
