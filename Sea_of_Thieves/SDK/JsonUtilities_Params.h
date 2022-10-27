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
	 * Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.UStructToJsonObjectString
	 */
	struct UJsonUtilitiesBlueprintHelperLibrary_UStructToJsonObjectString_Params
	{
	public:
		struct FGenericStruct                                      Struct;                                                  // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JKLW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutJsonString;                                           // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.JsonObjectStringToUStruct
	 */
	struct UJsonUtilitiesBlueprintHelperLibrary_JsonObjectStringToUStruct_Params
	{
	public:
		class FString                                              InJsonString;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FGenericStruct                                      Struct;                                                  // 0x0010(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
