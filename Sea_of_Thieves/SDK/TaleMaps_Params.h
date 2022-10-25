#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function TaleMaps.TaleQuestCustomMapFunctionLibrary.UpdateStrikeThoughTextElement
	 */
	struct UTaleQuestCustomMapFunctionLibrary_UpdateStrikeThoughTextElement_Params
	{
	public:
		struct FGuid                                               MapGuid;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FGuid                                               ElementGuid;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       StrikeThroughEnabled;                                    // 0x0020(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TaleMaps.TaleQuestCustomMapFunctionLibrary.AddCustomMap
	 */
	struct UTaleQuestCustomMapFunctionLibrary_AddCustomMap_Params
	{
	public:
		TAssetPtr<class UCustomMapData>                            Data;                                                    // 0x0000(0x001C)  (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
		struct FGuid                                               MapGuid;                                                 // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TaleMaps.TaleQuestTriggerNamedChecklistEventStepDesc.EventsSource
	 */
	struct UTaleQuestTriggerNamedChecklistEventStepDesc_EventsSource_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
