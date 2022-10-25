#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function WBP_ObjectiveMarker.WBP_ObjectiveMarker_C.ParseObjectiveNameForModifier
	 */
	struct UWBP_ObjectiveMarker_C_ParseObjectiveNameForModifier_Params
	{
	public:
		class FString                                              ObjectiveName;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              CleanObjectiveName;                                      // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class UTexture2D*                                          ModifierSprite;                                          // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DisplayStaircaseIcon;                                    // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DisplayLevelNumberText;                                  // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GM4L[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    LevelNumber;                                             // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ModifierSpriteRotation;                                  // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_010B[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ObjectiveMarker.WBP_ObjectiveMarker_C.GetBackground_Border
	 */
	struct UWBP_ObjectiveMarker_C_GetBackground_Border_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_ObjectiveMarker.WBP_ObjectiveMarker_C.CalcPosition
	 */
	struct UWBP_ObjectiveMarker_C_CalcPosition_Params
	{
	public:
		struct FVector                                             InLocation;                                              // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           OutCanvasPosition;                                       // 0x000C(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ObjectiveMarker.WBP_ObjectiveMarker_C.Construct
	 */
	struct UWBP_ObjectiveMarker_C_Construct_Params
	{	};

	/**
	 * Function WBP_ObjectiveMarker.WBP_ObjectiveMarker_C.ExecuteUbergraph_WBP_ObjectiveMarker
	 */
	struct UWBP_ObjectiveMarker_C_ExecuteUbergraph_WBP_ObjectiveMarker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RBR6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
