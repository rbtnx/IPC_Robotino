///////////////////////////////////////////////////////////////////////////////
// velocityConverterToCartesian.h
#pragma once

#include "velocityConverterToCartesianInterfaces.h"

class CvelocityConverterToCartesian 
	: public ITComObject
	, public ITcADI
	, public ITcWatchSource
///<AutoGeneratedContent id="InheritanceList">
	, public ITcCyclic
///</AutoGeneratedContent>
{
public:
	DECLARE_IUNKNOWN()
	DECLARE_IPERSIST(CID_velocityConverterToCartesianCvelocityConverterToCartesian)
	DECLARE_ITCOMOBJECT_LOCKOP()
	DECLARE_ITCADI()
	DECLARE_ITCWATCHSOURCE()
	DECLARE_OBJPARAWATCH_MAP()
	DECLARE_OBJDATAAREA_MAP()

	CvelocityConverterToCartesian();
	virtual	~CvelocityConverterToCartesian();


///<AutoGeneratedContent id="InterfaceMembers">
	// ITcCyclic
	virtual HRESULT TCOMAPI CycleUpdate(ITcTask* ipTask, ITcUnknown* ipCaller, ULONG_PTR context);

///</AutoGeneratedContent>

protected:
	DECLARE_ITCOMOBJECT_SETSTATE();

	HRESULT AddModuleToCaller();
	VOID RemoveModuleFromCaller();

	// Tracing
	CTcTrace m_Trace;

	double v0;
	double v1;
	double v2;

///<AutoGeneratedContent id="Members">
	TcTraceLevel m_TraceLevelMax;
	velocityConverterToCartesianParameter m_Parameter;
	velocityConverterToCartesianInputs m_Inputs;
	velocityConverterToCartesianOutputs m_Outputs;
	ITcCyclicCallerInfoPtr m_spCyclicCaller;
///</AutoGeneratedContent>

	// TODO: Custom variable
	UINT m_counter;
};
